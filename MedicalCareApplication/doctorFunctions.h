#pragma once
#include "DbConnection.h"
#include <qtablewidget.h>
#include "Doctor.h"
#include "ui_medicalcareapplication.h"
#include "EditPatientWindow.h"

class doctorFunctions
{
public:
	doctorFunctions();
	Doctor* CurrentDoctor(Ui::MedicalCareApplicationClass ui);
	~doctorFunctions();

	void PopulateTable(QTableWidget *patientsTable, int id);

	int PatientId(QTableWidget *patientsTable, int currentRow);
	Doctor *currentDoc;
private:
	

};

