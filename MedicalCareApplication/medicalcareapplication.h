#ifndef MEDICALCAREAPPLICATION_H
#define MEDICALCAREAPPLICATION_H

#include <QtWidgets/QMainWindow>
#include"AdminWindow.h"
#include "DoctorWindow.h"
#include "PatientWindow.h"
#include "ui_MedicalCareApplication.h"
#include<QtWidgets\qmessagebox.h>
#include"DbConnection.h"
#include<QtSql\qsql.h>

class MedicalCareApplication : public QMainWindow
{
	Q_OBJECT

public:
	MedicalCareApplication(QWidget *parent = 0);
	~MedicalCareApplication();

	int checkCredentials();
	void ClearCredentials();
	
private:
	Ui::MedicalCareApplicationClass ui;

	//Windows
	AdminWindow *adminWin;
	DoctorWindow *doctorWin;
	PatientWindow *patientWin;
	doctorFunctions *docFunction;
	//PatientFunctions *patFunction;

private slots:
	void LogInWindowBtnPressed();
};

#endif // MEDICALCAREAPPLICATION_H
