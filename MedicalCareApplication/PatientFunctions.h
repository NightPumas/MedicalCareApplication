#pragma once
#include <QCloseEvent>
#include <qmessagebox.h>
#include <Person.h>
#include "Patient.h"
#include "ui_medicalcareapplication.h"
#include "DbConnection.h"

class PatientFunctions
{
public:
	PatientFunctions();
	~PatientFunctions();
	Patient * CurrentPatient(Ui::MedicalCareApplicationClass ui);
	Patient *currentPatient;

private:
};

