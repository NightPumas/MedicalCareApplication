#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_AddDoctor.h"
#include <QCloseEvent>
#include <qmessagebox.h>
#include <qsqlrecord.h>
#include "AddDoctor.h"

class AdminWindow : public QMainWindow 
{
	Q_OBJECT

public:
	AdminWindow(QMainWindow * parent = 0);
	~AdminWindow();

	void closeEvent(QCloseEvent * event);

private:
	Ui::AdminWindow ui;

	AddDoctor *addDoctorWin;

	AdminFunctions *adminFunc;

private slots:
	void AddDoctorFunc();
	void UpdateDoctorFunction();
	void ShowText();
	void DeleteFunc();
	void LogoutFunc();
	void PopulateT();
};
