#include "PatientWindow.h"
#include "ui_medicalcareapplication.h"

PatientWindow::PatientWindow(QMainWindow *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	this->setWindowFlags(Qt::Window);

	connect(ui.logOutBtn, SIGNAL(clicked()), this, SLOT(LogoutFunc()));
	connect(ui.commandEditPersonalInfo, SIGNAL(clicked()), this, SLOT(EditPersonalInfo()));
}

void PatientWindow::closeEvent(QCloseEvent *event)
{
	QMessageBox::StandardButton xBtn;

	xBtn = QMessageBox::question(this, "Close Window", "Are you sure?\n",
		QMessageBox::Yes | QMessageBox::No);
	if (xBtn != QMessageBox::Yes) {
		event->ignore();
	}
	else {
		event->ignore();
		this->deleteLater();
		QMainWindow *LoginScreen = (QMainWindow*)(this->parent());
		LoginScreen->show();
	}
}

PatientWindow::~PatientWindow()
{
}

bool PatientWindow::getIsDeleted()
{
	return this->patient->getIsDeleted();
}


void PatientWindow::setPatient(Patient * pat)
{
	this->patient = pat;
	idPacient = pat->getPatId();
	personID = pat->getPersonID();
	patFullName = pat->getFirstName() + " " + pat->getLastName();
	PatCurrentEmail = pat->getEmailAddress();
	PatCurrentPhone = pat->getPhoneNumber();
	PatCurrentHomeAddress = pat->getHomeAddress();
}

void PatientWindow::setTitleLbl()
{
	QFont serifFont("Times", 14, QFont::Bold);
	ui.titleLbl->setText("<font color = '#4b0082' >Hello, " + patFullName + "!</font>");
	QString xx = "<font color = '#4b0082' >Hello, " + patFullName + "!</font>";
	ui.titleLbl->setFont(serifFont);
}

void PatientWindow::EditDataWin()
{
	editWin = new EditPersonalDataWindow();
	editWin->show();
}

void PatientWindow::LogoutFunc()
{
	QMainWindow *LoginScreen = (QMainWindow*)(this->parent());
	LoginScreen->show();
	this->deleteLater();
}

void PatientWindow::EditPersonalInfo()
{
	editPersInfo = new EditPersonalDataWindow(this);
	editPersInfo->getUI().emailAddressTxtBox->setText(PatCurrentEmail);
	editPersInfo->getUI().phoneNumberTxtBox->setText(PatCurrentPhone);
	editPersInfo->getUI().homeAddressTxtBox->setText(PatCurrentHomeAddress);
	editPersInfo->setPesonID(personID);
	editPersInfo->show();
	connect(editPersInfo->getEditbtn(), SIGNAL(clicked()), this, SLOT(UpdatePersonalInfo()));
}

void PatientWindow::UpdatePersonalInfo()
{
	PatCurrentHomeAddress = editPersInfo->getUI().homeAddressTxtBox->text();
	PatCurrentEmail = editPersInfo->getUI().emailAddressTxtBox->text();
	PatCurrentPhone = editPersInfo->getUI().phoneNumberTxtBox->text();
	patient->setHomeAddress(PatCurrentHomeAddress);
	patient->setEmailAddress(PatCurrentEmail);
	patient->setPhoneNumber(PatCurrentPhone);


}
