#ifndef DOCTORWINDOW_H
#define DOCTORWINDOW_H

#include <QMainWindow>
#include "bitalino.h"
#include"AddPatient.hpp"
#include"EditPatientWindow.h"
#include "MedicalHistoryWindow.h"
#include <qsqlquery.h>
#include <ui_DoctorWindow.h>
#include "doctorFunctions.h"
#include "EditPersonalDataWindow.h"

class DoctorWindow : public QMainWindow
{
	Q_OBJECT

public:
	DoctorWindow(QMainWindow *parent = 0);
	~DoctorWindow();
	void setDoctor(Doctor * doc);
	bool getIsDeleted();
	void setTitleLbl();
	Ui::DoctorWindow ui;
private:

	void ShowText();
	void closeEvent(QCloseEvent * event);

	AddPatient *addWin;
	EditPatientWindow *editWin;
	MedicalHistoryWindow *medicalhistoryWin;
	DbConnection *connection;
	Doctor *doctor;
	int idDoctor;
	doctorFunctions *docFunctions;
	EditPersonalDataWindow *editPersInfo;
	int currentRow=-1;
	int idPatient = -1;
	int PersonID = 0;
	QMessageBox *msg;

	QString docFullName;

	QString currentFirstName;
	QString currentLastName;
	QString currentHomeAddress;
	QString currentPhoneNo;
	QString currentEmail;
	QString DocCurrentEmail;
	QString DocCurrentPhone;
	QString DocCurrentHomeAddress;

private slots:
	void AddPatientWin();
	void EditPatientWin();
	void DeletePatientFunc();
	void ViewMedicalHistoryWin();
	void EditPersonalInfo();
	void UpdatePersonalInfo();
	void LogoutFunc(); 
	void refreshTable();

};

#endif // DOCTORWINDOW_H
