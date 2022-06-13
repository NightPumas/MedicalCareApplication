#include "TransferPatientWindow.h"

TransferPatientWindow::TransferPatientWindow(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setWindowFlags(Qt::Window);

	connect(ui.transferBtn, SIGNAL(clicked()), this, SLOT(TrasferFunc()));
	connect(ui.cancelBtn, SIGNAL(clicked()), this, SLOT(close()));
}

void TransferPatientWindow::closeEvent(QCloseEvent *event)
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
	}
}

TransferPatientWindow::~TransferPatientWindow()
{

}

void TransferPatientWindow::setIdDoctor(int id)
{
	this->idDoctor = id;
}

void TransferPatientWindow::setOldDocId(int id)
{
	this->oldDocId = id;
}

void TransferPatientWindow::setNoOfPatientsLbl(QString doc, QString no)
{
	QFont serifFont("Times", 12, QFont::Bold);
	ui.noOfPatientsLbl->setText("<font color='#4b0082'> Dr. " + doc + " have " + no + " patients. </font>");
	ui.noOfPatientsLbl->setFont(serifFont);
}

void TransferPatientWindow::setDoctorComboBox(QStringList doctors)
{
	ui.doctorComboBox->addItems(doctors);
}

QPushButton* TransferPatientWindow::getTransferBtn()
{
	return ui.transferBtn;
}

void TransferPatientWindow::TrasferFunc()
{
	QStringList list = ui.doctorComboBox->currentText().split(" ");
	int docId = list.at(0).toInt();

	DbConnection::Getconnection()->OpenDatabaseConnection();
	QSqlQuery query(DbConnection::Getconnection()->getDb());

	query.prepare("{call UpdateTransferDoctor(:oldDocId, :newDocId)}");
	query.bindValue(":oldDocId", oldDocId);
	query.bindValue(":newDocId", docId);
	bool e = query.exec();
	query.next();

	DeleteDoctor();

	this->deleteLater();
}

void TransferPatientWindow::DeleteDoctor()
{
	DbConnection::Getconnection()->OpenDatabaseConnection();
	QSqlQuery queryDelete(DbConnection::Getconnection()->getDb());

	queryDelete.prepare("{call DeleteFromDoctor(:docId)}");
	queryDelete.bindValue(":docId", this->idDoctor);
	queryDelete.exec();
	queryDelete.next();
	DbConnection::Getconnection()->CloseDatabaseConnection();
}