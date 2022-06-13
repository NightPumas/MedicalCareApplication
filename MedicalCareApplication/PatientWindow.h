#ifndef PATIENTWINDOW_H
#define PATIENTWINDOW_H

#include <QMainWindow>
#include "EditPersonalDataWindow.h"
#include "ui_PatientWindow.h"
#include "PatientFunctions.h"


class PatientWindow : public QMainWindow
{
	Q_OBJECT

public:
	PatientWindow(QMainWindow *parent = 0);
	void closeEvent(QCloseEvent * event);
	~PatientWindow();
	bool getIsDeleted();
	void setTitleLbl();
	void setPatient(Patient * patient);

private:
	Ui::PatientWindow ui;
	EditPersonalDataWindow *editWin;
	int idPacient;
	int personID;
	QString PatCurrentEmail;
	QString PatCurrentPhone;
	QString PatCurrentHomeAddress;
	Patient *patient;
	PatientFunctions *patFunctions;
	EditPersonalDataWindow *editPersInfo;
	QString patFullName;

private slots:
	void EditDataWin();
	void LogoutFunc();
	void EditPersonalInfo();
	void UpdatePersonalInfo();
};

#endif // PATIENTWINDOW_H
