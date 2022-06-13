#ifndef TRANSFERPATIENTWINDOW_H
#define TRANSFERPATIENTWINDOW_H

#include <QWidget>
#include "ui_TransferPatientWindow.h"
#include "DbConnection.h"
#include <QCloseEvent>
#include <qmessagebox.h>

class TransferPatientWindow : public QWidget
{
	Q_OBJECT

public:
	TransferPatientWindow(QWidget *parent = 0);
	void closeEvent(QCloseEvent * event);
	~TransferPatientWindow();

	void setIdDoctor(int id);
	void setOldDocId(int id);
	void setNoOfPatientsLbl(QString doc, QString no);
	void setDoctorComboBox(QStringList doctors);

	QPushButton* getTransferBtn();

	void DeleteDoctor();

private:
	Ui::TransferPatientWindow ui;

	int idDoctor;
	int oldDocId;

private slots:
	void TrasferFunc();
};

#endif // TRANSFERPATIENTWINDOW_H
