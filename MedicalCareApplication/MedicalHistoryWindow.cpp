#include "MedicalHistoryWindow.h"

MedicalHistoryWindow::MedicalHistoryWindow(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setWindowFlags(Qt::Window);

	connect(ui.addExamBtn, SIGNAL(clicked()), this, SLOT(AddExamWin()));
	connect(ui.viewExamBtn, SIGNAL(clicked()), this, SLOT(ExamInfoWin()));
	connect(ui.cancelBtn, SIGNAL(clicked()), this, SLOT(close()));
}

MedicalHistoryWindow::~MedicalHistoryWindow()
{

}

void MedicalHistoryWindow::setDoctorInfoLbl(QString info)
{
	QFont serifFont("Times", 12, QFont::Bold);
	ui.doctorInfoLbl->setText(info);
	ui.doctorInfoLbl->setFont(serifFont);
}

void MedicalHistoryWindow::setPatientInfoLbl(QString info)
{
	QFont serifFont("Times", 12, QFont::Bold);
	ui.patientInfoLbl->setText(info);
	ui.patientInfoLbl->setFont(serifFont);
}

void MedicalHistoryWindow::setPacientData(QString cnp, QString age, QString bloodType, QString rh, QString address)
{
	ui.cnpValueLbl->setText("<font color = '#5555ff'>" + cnp + "</font>");
	ui.ageValueLbl->setText("<font color = '#5555ff'>" +  age + "</font>");
	ui.bloodTypeValueLbl->setText("<font color = '#5555ff'>" +  bloodType + "</font>");
	ui.rhValueLbl->setText("<font color = '#5555ff'>" +  rh + "</font>");
	ui.addressValueLbl->setText("<font color = '#5555ff'>" +  address + "</font>");
}

void MedicalHistoryWindow::ExamInfoWin()
{
	examInfoWin = new ExamInfoWindow();
	examInfoWin->show();
}

void MedicalHistoryWindow::AddExamWin()
{
	addExamWin = new AddExam(this);
	addExamWin->show();
}
