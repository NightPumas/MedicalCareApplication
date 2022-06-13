#ifndef EDITPATIENTWINDOW_H
#define EDITPATIENTWINDOW_H

#include <QWidget>
#include "ui_EditPatientWindow.h"
#include "Person.h"
#include <QCloseEvent>
#include <qmessagebox.h>
#include "DataValidation.h"
#include<qsqldatabase.h>
#include <qsqlquery.h>
#include <DbConnection.h>
#include "doctorFunctions.h"

class EditPatientWindow : public QWidget
{
	Q_OBJECT

public:
	EditPatientWindow(QWidget *parent = 0);
	void closeEvent(QCloseEvent * event);
	~EditPatientWindow();
	Ui::EditPatientWindow getUI();

	void setPatient(int id, QString firstN, QString lastN, QString address, QString phone, QString email);

	QPushButton * getUpdateButton();

	


private:
	Ui::EditPatientWindow ui;

	Person *currentPatient;

	int currentRow = -1;
	int id = -1;
	QStringList ErrorMessage;
	QString DisplayError;
	bool error = false;
	QMessageBox *msg;
	private slots:
	void UpdateFunc();
};

#endif // EDITPATIENTWINDOW_H
