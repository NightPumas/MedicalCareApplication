#pragma once
#include <QWidget>
#include "ui_addpatient.h"
#include "DataValidation.h"
#include <qmessagebox.h>
#include <qsqlquery.h>
#include "DbConnection.h"
#include <QCloseEvent>
#include <qmessagebox.h>

class AddPatient : public QWidget {
	Q_OBJECT

public:
	AddPatient(QWidget * parent = Q_NULLPTR);
	void closeEvent(QCloseEvent * event);
	~AddPatient();
	void setDoctorId(int id);

	QPushButton * getaddButton();
	

private:
	Ui::AddPatient ui;

	QStringList ErrorMessage;

	DbConnection *connection;

	bool error;

	int docId;

private slots:
	void AddPatientToDatabase();
};
