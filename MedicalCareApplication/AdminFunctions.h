#pragma once
#include "DbConnection.h"
#include "ui_AdminWindow.h"
#include "AddDoctor.h"
#include<QtWidgets\qmessagebox.h>
#include "DataValidation.h"
#include "TransferPatientWindow.h"

class AdminFunctions
{
private:
	int selectedDocPersonID=-1;
	int currentRow = -1;

	int docId;

	QString currentFirstName;
	QString currentLastName;
	QString currentHomeAddress;
	QString currentPhoneNo;
	QString currentEmail;

	QStringList ErrorMessage;
	QString DisplayError;
	bool error = false;
	QMessageBox *msg;


public:
	AdminFunctions();
	~AdminFunctions();

	TransferPatientWindow *transferWin;

	void PopulateTable(Ui::AdminWindow ui);
	void ShowText(Ui::AdminWindow ui);
	QString CurrentSelectedDoc();
	int GetselectedDocPersonID(Ui::AdminWindow ui);
	int CurrentDocId();
	void UpdateFunc(Ui::AdminWindow ui, QWidget* parent);
	void ClearCredentials(Ui::AdminWindow ui);
	void AddDoctor(Ui::AddDoctor ui, QWidget* parent);
	void DeleteDoctor(Ui::AdminWindow ui, QWidget* parent, QString doctorString, int docId);
};

