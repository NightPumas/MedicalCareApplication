#include "DoctorWindow.h"

DoctorWindow::DoctorWindow(QMainWindow *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	this->setWindowFlags(Qt::Window);
	//editWin = NULL;

	connect(ui.addPatientBtn, SIGNAL(clicked()), this, SLOT(AddPatientWin()));
	connect(ui.editPatientBtn, SIGNAL(clicked()), this, SLOT(EditPatientWin()));
	connect(ui.viewPatientBtn, SIGNAL(clicked()), this, SLOT(ViewMedicalHistoryWin()));
	connect(ui.LogOut, SIGNAL(clicked()), this, SLOT(LogoutFunc()));
	connect(ui.deletePatientbtn, SIGNAL(clicked()), this, SLOT(DeletePatientFunc()));
	connect(ui.commandEditPersonalInfo, SIGNAL(clicked()), this, SLOT(EditPersonalInfo()));
	//connect(ui.actionEdit_Personal_Info, SIGNAL(changed()), this, SLOT(EditPersonalInfo()));

	docFunctions = new doctorFunctions();
	msg = new QMessageBox(this);
	msg->setIcon(QMessageBox::Information);
}

void DoctorWindow::LogoutFunc()
{
	QMainWindow *LoginScreen = (QMainWindow*)(this->parent());
	LoginScreen->show();
	this->deleteLater();
}

void DoctorWindow::refreshTable()
{
	docFunctions->PopulateTable(ui.patientsTable, idDoctor);
}

void DoctorWindow::ShowText()
{
	//Ui::EditPatientWindow uiEdit;
	/**
	*  Populate textBoxes for edit
	*/

	if (ui.patientsTable->selectedItems().size() != 0)
	{
		currentRow = ui.patientsTable->currentItem()->row();
	};
	
	if (currentRow != -1)
	{
		editWin = new EditPatientWindow(this); // create edit window 
		connect(editWin->getUpdateButton(), SIGNAL(clicked()), this, SLOT(refreshTable()));

		DbConnection::Getconnection()->OpenDatabaseConnection();
		QSqlQuery query(DbConnection::Getconnection()->getDb());
		query.prepare("{call PatientViewSingle(:cnp)}");
		query.bindValue(":cnp", ui.patientsTable->item(currentRow, 3)->text());
		query.exec();
		query.next();

		editWin->getUI().firstNameUpdateTxtBox->setText(ui.patientsTable->item(currentRow, 1)->text());
		editWin->getUI().lastNameUpdateTxtBox->setText(ui.patientsTable->item(currentRow, 2)->text());
		editWin->getUI().addressUpdateTxtBox->setText(query.value(6).toString());
		editWin->getUI().phoneUpdateTxtBox->setText(query.value(7).toString());
		editWin->getUI().emailUpdateTxtBox->setText(query.value(8).toString());

		this->currentFirstName = ui.patientsTable->item(currentRow, 1)->text();
		this->currentLastName = ui.patientsTable->item(currentRow, 2)->text();
		this->currentHomeAddress = query.value(6).toString();
		this->currentPhoneNo = query.value(7).toString();
		this->currentEmail = query.value(8).toString();

		editWin->setPatient(docFunctions->PatientId(ui.patientsTable, currentRow),
			ui.patientsTable->item(currentRow, 1)->text(),
			ui.patientsTable->item(currentRow, 2)->text(),
			query.value(6).toString(),
			query.value(7).toString(),
			query.value(8).toString());
	}

}

void DoctorWindow::closeEvent(QCloseEvent *event)
{
	QMessageBox::StandardButton xBtn;

	xBtn = QMessageBox::question(this, "Close Window", "Are you sure?\n",
		QMessageBox::Yes | QMessageBox::No);
	if (xBtn != QMessageBox::Yes) 
	{
		event->ignore();
	}
	else 
	{
		event->ignore();
		this->deleteLater();
		QMainWindow *LoginScreen = (QMainWindow*)(this->parent());
		LoginScreen->show();
	}
}

DoctorWindow::~DoctorWindow()
{

}

void DoctorWindow::setDoctor(Doctor * doc)
{
	this->doctor = doc;
	idDoctor = doc->getDocId();
	PersonID = doc->getPersonID();
	docFullName = doc->getFirstName() + " " + doc->getLastName();
	DocCurrentEmail = doc->getEmailAddress();
	DocCurrentPhone = doc->getPhoneNumber();
	DocCurrentHomeAddress = doc->getHomeAddress();
	docFunctions->PopulateTable(ui.patientsTable, idDoctor);
}

bool DoctorWindow::getIsDeleted()
{
	return this->doctor->getIsDeleted();
}

void DoctorWindow::setTitleLbl()
{
	QFont serifFont("Times", 14, QFont::Bold);
	ui.titleLbl->setText("<font color = '#4b0082' >Hello, Dr. " + docFullName + "!</font>");
	ui.titleLbl->setFont(serifFont);
}

void DoctorWindow::AddPatientWin()
{
	addWin = new AddPatient(this);

	connect(addWin->getaddButton(), SIGNAL(clicked()), this, SLOT(refreshTable()));

	addWin->setDoctorId(idDoctor);
	addWin->show();
}

void DoctorWindow::EditPatientWin()
{
	ShowText();
	if (currentRow != -1)
	{
		//PatientViewSingle
		//DbConnection::Getconnection()->OpenDatabaseConnection();
		//QSqlQuery query(DbConnection::Getconnection()->getDb());
		//query.prepare("{call PatientViewSingle(:cnp)}");
		//query.bindValue(":cnp", ui.patientsTable->item(currentRow, 3)->text());
		//query.exec();
		//query.next();

		//editWin->setPatient(docFunctions->PatientId(ui.patientsTable, currentRow),
		//	ui.patientsTable->item(currentRow,1)->text(),
		//	ui.patientsTable->item(currentRow, 2)->text(),
		//	query.value(6).toString(),
		//	query.value(7).toString(),
		//	query.value(8).toString());

		editWin->show();
	}
	else
	{
		msg->setText("Select Patient to update!");
		msg->show();
	};

}

void DoctorWindow::DeletePatientFunc()
{

		if (ui.patientsTable->selectedItems().size() != 0)
		{
			currentRow = ui.patientsTable->currentItem()->row();

			QMessageBox::StandardButton xBtn;
			QStringList PatDeleteName;
			PatDeleteName << " Are you sure you want to delete patient" << ui.patientsTable->item(currentRow, 1)->text() << ui.patientsTable->item(currentRow, 2)->text() ;
			QString DisplayPatDeleteName = PatDeleteName.join(" ");

			xBtn = QMessageBox::question(this, "Delete Patient", DisplayPatDeleteName,
				QMessageBox::Yes | QMessageBox::No);
			if (xBtn == QMessageBox::Yes)
			{
				
				idPatient = ui.patientsTable->item(currentRow, 0)->text().toInt();

				DbConnection::Getconnection()->OpenDatabaseConnection();
				QSqlQuery query(DbConnection::Getconnection()->getDb());

				query.prepare("{call DeleteFromPatient(:patientID)}");
				query.bindValue(":patientID", idPatient);
				query.exec();
				query.next();
				DbConnection::Getconnection()->CloseDatabaseConnection();
				currentRow = -1;
				refreshTable();
			}

		}
		else
		{
			msg->setText("Select Patient to delete!");
			msg->show();
		}

}

void DoctorWindow::ViewMedicalHistoryWin()
{
	if (ui.patientsTable->selectedItems().size() != 0)
	{
		int currentRow = ui.patientsTable->currentItem()->row();
		medicalhistoryWin = new MedicalHistoryWindow(this);
		medicalhistoryWin->setDoctorInfoLbl("<font color = '#4b0082' > Dr. " + docFullName + "</font>");
		medicalhistoryWin->setPatientInfoLbl("<font color = '#4b0082' > Patient: " + ui.patientsTable->item(currentRow, 1)->text()
			+ " " + ui.patientsTable->item(currentRow, 2)->text() + "</font>");

		DbConnection::Getconnection()->OpenDatabaseConnection();
		QSqlQuery query(DbConnection::Getconnection()->getDb());
		query.prepare("{call PatientViewSingle(:cnp)}");
		query.bindValue(":cnp", ui.patientsTable->item(currentRow, 3)->text());
		query.exec();
		query.next();

		medicalhistoryWin->setPacientData(query.value(3).toString(),
			query.value(12).toString(),
			query.value(10).toString(),
			query.value(11).toString(),
			query.value(6).toString());

		medicalhistoryWin->show();
	}
	else
	{
		msg->setText("Select Patient to View!");
		msg->show();
	}
}

void DoctorWindow::EditPersonalInfo()
{
	editPersInfo = new EditPersonalDataWindow(this);
	editPersInfo->getUI().emailAddressTxtBox->setText(DocCurrentEmail);
	editPersInfo->getUI().phoneNumberTxtBox->setText(DocCurrentPhone);
	editPersInfo->getUI().homeAddressTxtBox->setText(DocCurrentHomeAddress);
	editPersInfo->setPesonID(PersonID);
	editPersInfo->show();
	connect(editPersInfo->getEditbtn(), SIGNAL(clicked()), this, SLOT(UpdatePersonalInfo()));
}

void DoctorWindow::UpdatePersonalInfo()
{
	DocCurrentHomeAddress = editPersInfo->getUI().homeAddressTxtBox->text();
	DocCurrentEmail = editPersInfo->getUI().emailAddressTxtBox->text();
	DocCurrentPhone = editPersInfo->getUI().phoneNumberTxtBox->text();
	//doctor->setHomeAddress(DocCurrentHomeAddress);
	//doctor->setEmailAddress(DocCurrentEmail);
	//doctor->setPhoneNumber(DocCurrentPhone);


}
