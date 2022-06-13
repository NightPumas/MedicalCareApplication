#include "AdminFunctions.h"

AdminFunctions::AdminFunctions()
{
	this->currentRow = -1;
}

AdminFunctions::~AdminFunctions()
{
}

void AdminFunctions::PopulateTable(Ui::AdminWindow ui)
{
	DbConnection::Getconnection()->OpenDatabaseConnection();

	QSqlQuery query(DbConnection::Getconnection()->getDb());
	query.prepare("{call DoctorViewAll}");
	query.exec();
	query.next();

	QSqlRecord qRecord = query.record();
	ui.table->setColumnCount(qRecord.count());
	ui.table->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
	ui.table->setHorizontalHeaderLabels(QString("ID; FisrtName; LastName; CNP; Gender; DateOfBirth; HomeAddress; PhoneNumber; EmailAddress; Specialty; UserName; Password").split("; "));

	int index = 0;

	do
	{
		ui.table->setRowCount(index + 1);

		///idDoctor
		QTableWidgetItem *item0 = new QTableWidgetItem;
		item0->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
		item0->setText(query.value(0).toString());
		ui.table->setItem(index, 0, item0);

		///firstName
		item0 = new QTableWidgetItem;
		item0->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
		item0->setText(query.value(1).toString());
		ui.table->setItem(index, 1, item0);

		///lastName
		item0 = new QTableWidgetItem;
		item0->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
		item0->setText(query.value(2).toString());
		ui.table->setItem(index, 2, item0);


		///cnp
		item0 = new QTableWidgetItem;
		item0->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
		item0->setText(query.value(3).toString());
		ui.table->setItem(index, 3, item0);

		///gender
		item0 = new QTableWidgetItem;
		item0->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
		item0->setText(query.value(4).toString());
		ui.table->setItem(index, 4, item0);

		///dateOfBirth
		item0 = new QTableWidgetItem;
		item0->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
		item0->setText(query.value(5).toString());
		ui.table->setItem(index, 5, item0);

		///homeAddress
		item0 = new QTableWidgetItem;
		item0->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
		item0->setText(query.value(6).toString());
		ui.table->setItem(index, 6, item0);

		///phoneNumber
		item0 = new QTableWidgetItem;
		item0->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
		item0->setText(query.value(7).toString());
		ui.table->setItem(index, 7, item0);

		///emailAddress
		item0 = new QTableWidgetItem;
		item0->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
		item0->setText(query.value(8).toString());
		ui.table->setItem(index, 8, item0);

		///specialty
		item0 = new QTableWidgetItem;
		item0->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
		item0->setText(query.value(9).toString());
		ui.table->setItem(index, 9, item0);

		///userName
		item0 = new QTableWidgetItem;
		item0->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
		item0->setText(query.value(10).toString());
		ui.table->setItem(index, 10, item0);

		///password
		item0 = new QTableWidgetItem;
		item0->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
		item0->setText(query.value(11).toString());
		ui.table->setItem(index, 11, item0);

		index++;
	} while (query.next());

	ui.table->show();
}

void AdminFunctions::ShowText(Ui::AdminWindow ui)
{
	/**
	*  Populate textBoxes for edit
	*/

	this->currentRow = ui.table->currentItem()->row();

	ui.firstNameUpdateTxtBox->setText(ui.table->item(currentRow, 1)->text());
	ui.lastNameUpdateTxtBox->setText(ui.table->item(currentRow, 2)->text());
	ui.addressUpdateTxtBox->setText(ui.table->item(currentRow, 6)->text());
	ui.phoneUpdateTxtBox->setText(ui.table->item(currentRow, 7)->text());
	ui.emailUpdateTxtBox->setText(ui.table->item(currentRow, 8)->text());

	this->docId = ui.table->item(currentRow, 0)->text().toInt();
	this->currentFirstName = ui.table->item(currentRow, 1)->text();
	this->currentLastName = ui.table->item(currentRow, 2)->text();
	this->currentHomeAddress = ui.table->item(currentRow, 6)->text();
	this->currentPhoneNo = ui.table->item(currentRow, 7)->text();
	this->currentEmail = ui.table->item(currentRow, 8)->text();
}

QString AdminFunctions::CurrentSelectedDoc()
{
	return this->currentLastName + " " + this->currentFirstName;
}

int AdminFunctions::GetselectedDocPersonID(Ui::AdminWindow ui)
{
	if (ui.table->selectedItems().size() != 0)
	{
		this->currentRow = ui.table->currentItem()->row();
		//GetPersonID to apply updates
		DbConnection::Getconnection()->OpenDatabaseConnection();

		QSqlQuery query(DbConnection::Getconnection()->getDb());
		query.prepare("{call FindIdPersonAfterCNP(:CNP)}");
		query.bindValue(":CNP", ui.table->item(currentRow, 3)->text());
		query.exec();
		query.next();;
		selectedDocPersonID = query.value(0).toInt();
		DbConnection::Getconnection()->CloseDatabaseConnection();
		return selectedDocPersonID;
	}
	return -1;
}

int AdminFunctions::CurrentDocId()
{
	return this->docId;
}

void AdminFunctions::UpdateFunc(Ui::AdminWindow ui, QWidget* parent)
{	
	msg = new QMessageBox(parent);
	msg->setIcon(QMessageBox::Information);

	//====================================== Data Validation
	selectedDocPersonID = AdminFunctions::GetselectedDocPersonID(ui);

	if (selectedDocPersonID != -1)
	{
		int FirstNameCheck = DataValidation::CheckName(ui.firstNameUpdateTxtBox->text());
		int LastNameCheck = DataValidation::CheckName(ui.lastNameUpdateTxtBox->text());
		int HomeAddressCheckx = DataValidation::CheckHomeAddress(ui.addressUpdateTxtBox->text());
		int PhoneCheck = DataValidation::CheckPhone(ui.phoneUpdateTxtBox->text());
		int EmailCheck = DataValidation::CheckEmail(ui.emailUpdateTxtBox->text());

		//Data verification
		//Check FirstName

		if (FirstNameCheck == 0)
		{
			ErrorMessage << "First Name cannot be empty";
			error = true;
		}
		else
		{
			if (FirstNameCheck == -1)
			{
				ErrorMessage << "First Name is Invalid or to long";
				error = true;
			};
		}

		//Check LastName
		if (LastNameCheck == 0)
		{
			ErrorMessage << "Last Name cannot be empty";
			error = true;
		}
		else
		{
			if (LastNameCheck == -1)
			{
				ErrorMessage << "Last Name is Invalid or to long";
				error = true;
			};
		}

		//check HomeAddress 
		if (HomeAddressCheckx == 0)
		{
			ErrorMessage << "HomeAddress cannot be empty";
			error = true;
		}
		else
		{
			if (HomeAddressCheckx == -1)
			{
				ErrorMessage << "HomeAddress is Invalid or to long";
				error = true;
			};
		}

		// Check phoneNumber
		if (PhoneCheck == 0)
		{
			ErrorMessage << "Phone cannot be empty";
			error = true;
		}
		else
		{
			//check Phone is valid
			if (PhoneCheck == -1)
			{
				ErrorMessage << "Phone is Invalid";
				error = true;
			};
		}

		// Check Email
		if (EmailCheck == 0)
		{
			ErrorMessage << "Email cannot be empty";
			error = true;
		}
		else

		{
			//check email is valid
			if (EmailCheck == -1)
			{
				ErrorMessage << "Email is Invalid or to long";
				error = true;
			}
		}

		DisplayError = ErrorMessage.join(" \n ");

		if (error == true)
		{
			msg->setText(DisplayError);
			msg->show();
			error = false;
			ErrorMessage.clear();
			return;
		}
		else
		{
			bool edited = false;

			if (!error)
			{
				DbConnection::Getconnection()->OpenDatabaseConnection();

				if (!DbConnection::Getconnection()->getDb().isOpen())
				{
					msg->setText("Database Connection Error!");
					msg->show();
					return;

				}
				if (currentFirstName != ui.firstNameUpdateTxtBox->text() && (!ui.firstNameUpdateTxtBox->text().isEmpty()))
				{
					QSqlQuery query(DbConnection::Getconnection()->getDb());

					ui.table->item(currentRow, 1)->setText(ui.firstNameUpdateTxtBox->text());
					query.prepare("{call UpdatePersonFirstNameInDatabase(:objectID, :firstName)}");
					query.bindValue(":objectID", selectedDocPersonID);
					query.bindValue(":firstName", ui.firstNameUpdateTxtBox->text());
					query.exec();
					query.next();
					edited = true;
				}

				if (currentLastName != ui.lastNameUpdateTxtBox->text() && (!ui.lastNameUpdateTxtBox->text().isEmpty()))
				{
					QSqlQuery query(DbConnection::Getconnection()->getDb());
					ui.table->item(currentRow, 2)->setText(ui.lastNameUpdateTxtBox->text());
					query.prepare("{call UpdatePersonLastNameInDatabase(:objectID, :lastName)}");
					query.bindValue(":objectID", selectedDocPersonID);
					query.bindValue(":lastName", ui.lastNameUpdateTxtBox->text());
					query.exec();
					query.next();
					edited = true;
				}

				if (currentHomeAddress != ui.addressUpdateTxtBox->text() && (!ui.addressUpdateTxtBox->text().isEmpty()))
				{
					QSqlQuery query(DbConnection::Getconnection()->getDb());
					ui.table->item(currentRow, 6)->setText(ui.addressUpdateTxtBox->text());
					query.prepare("{call UpdatePersonAddressInDatabase(:objectID, :homeAddress)}");
					query.bindValue(":objectID", selectedDocPersonID);
					query.bindValue(":homeAddress", ui.addressUpdateTxtBox->text());
					query.exec();
					query.next();
					edited = true;
				}

				if (currentPhoneNo != ui.phoneUpdateTxtBox->text() && (!ui.phoneUpdateTxtBox->text().isEmpty()))
				{
					QSqlQuery query(DbConnection::Getconnection()->getDb());
					ui.table->item(currentRow, 7)->setText(ui.phoneUpdateTxtBox->text());
					query.prepare("{call UpdatePersonPhoneInDatabase(:objectID, :phoneNo)}");
					query.bindValue(":objectID", selectedDocPersonID);
					query.bindValue(":phoneNo", ui.phoneUpdateTxtBox->text());
					query.exec();
					query.next();
					edited = true;
				}

				if (currentEmail != ui.emailUpdateTxtBox->text() && (!ui.emailUpdateTxtBox->text().isEmpty()))
				{
					QSqlQuery query(DbConnection::Getconnection()->getDb());
					ui.table->item(currentRow, 8)->setText(ui.emailUpdateTxtBox->text());
					query.prepare("{call UpdatePersonEmailInDatabase(:objectID, :email)}");
					query.bindValue(":objectID", selectedDocPersonID);
					query.bindValue(":email", ui.emailUpdateTxtBox->text());
					query.exec();
					query.next();
					edited = true;
				}

				DbConnection::Getconnection()->CloseDatabaseConnection();

				if (edited == true)
				{
					msg->setText("Updated !");
					msg->show();
					edited = false;
					PopulateTable(ui);
				}
				else
				{
					msg->setText("Nothing to Update !");
					msg->show();
				}
			}

			ClearCredentials(ui);
		}
	}
	else
	{
		msg->setText("Please Select Doctor to update !");
		msg->show();
	}
}

void AdminFunctions::ClearCredentials(Ui::AdminWindow ui)
{
	ui.firstNameUpdateTxtBox->setText("");
	ui.lastNameUpdateTxtBox->setText("");
	ui.addressUpdateTxtBox->setText("");
	ui.phoneUpdateTxtBox->setText("");
	ui.emailUpdateTxtBox->setText("");
	currentRow = -1;
	selectedDocPersonID = -1;
}

void AdminFunctions::AddDoctor(Ui::AddDoctor ui, QWidget* parent)
{
	msg = new QMessageBox(parent);
	msg->setIcon(QMessageBox::Information);

	//====================================== Data Validation
	int FirstNameCheck = DataValidation::CheckName(ui.firstNameTxtBox->text());
	int LastNameCheck = DataValidation::CheckName(ui.lastNameTxtBox->text());
	int CNPCheck = DataValidation::CheckCNP(ui.cnpTxtBox->text());
	int GenderCheck = DataValidation::CheckGender(ui.gender->currentText());
	int HomeAddressCheck = DataValidation::CheckHomeAddress(ui.homeAddressTxtBox->text());
	int PhoneCheck = DataValidation::CheckPhone(ui.phoneNumnberTxtBox->text());
	int EmailCheck = DataValidation::CheckEmail(ui.emailAddressTxtBox->text());
	int UserNameCheck = DataValidation::CheckUserName(ui.usernameTxtBox->text());
	int PasswordCheck = DataValidation::CheckPassword(ui.passwordTxtBox->text());

	//Check FirstName
	if (FirstNameCheck == 0)
	{
		ErrorMessage << "First Name cannot be empty";
		error = true;
	}
	else
	{
		if (FirstNameCheck == -1)
		{
			ErrorMessage << "First Name is Invalid or to long";
			error = true;
		};
	}

	//Check LastName

	if (LastNameCheck == 0)
	{
		ErrorMessage << "Last Name cannot be empty";
		error = true;
	}
	else
	{
		if (LastNameCheck == -1)
		{
			ErrorMessage << "Last Name is Invalid or to long";
			error = true;
		};
	}

	// Check CNP
	if (CNPCheck == 0)
	{
		ErrorMessage << "CNP cannot be empty";
		error = true;
	}
	else
	{
		if (CNPCheck == -1)
		{
			ErrorMessage << "CNP lenght is Invalid";
			error = true;
		};
	}

	//Check Gender
	if (GenderCheck == 0)
	{
		ErrorMessage << "Gender cannot be empty";
		error = true;
	}

	//date validation
	QString BirttDateString = ui.BirthDate->date().toString("yyyyMMdd");

	//check HomeAddress 

	if (HomeAddressCheck == 0)
	{
		ErrorMessage << "HomeAddress cannot be empty";
		error = true;
	}
	else
	{
		if (HomeAddressCheck == -1)
		{
			ErrorMessage << "HomeAddress is Invalid or to long";
			error = true;
		};
	}

	// Check phoneNumber

	if (PhoneCheck == 0)
	{
		ErrorMessage << "Phone cannot be empty";
		error = true;
	}
	else
	{
		//check Phone is valid
		if (PhoneCheck == -1)
		{
			ErrorMessage << "Phone is Invalid";
			error = true;
		};
	}

	// Check Email

	if (EmailCheck == 0)
	{
		ErrorMessage << "Email cannot be empty";
		error = true;
	}
	else
	{
		//check email is valid
		if (EmailCheck == -1)
		{
			ErrorMessage << "Email is Invalid or to long";
			error = true;
		}
	}

	// Check UserName

	if (UserNameCheck == 0)
	{
		ErrorMessage << "UserName cannot be empty";
		error = true;
	}
	else
	{
		//check UserName is valid
		if (UserNameCheck == -1)
		{
			ErrorMessage << "UserName is Invalid or to long";
			error = true;
		};
	}

	// Check Password

	if (PasswordCheck == 0)
	{
		ErrorMessage << "Password cannot be empty";
		error = true;
	}
	else
	{
		//check Password is valid
		if (PasswordCheck == -1)
		{
			ErrorMessage << "Password is Invalid or to long";
			error = true;
		};
	}

	QString DisplayError = ErrorMessage.join(" \n ");

	if (error == true)
	{
		msg->setText(DisplayError);
		msg->show();
		error = false;
		ErrorMessage.clear();
	}
	else
	{
		DbConnection::Getconnection()->OpenDatabaseConnection();

		QSqlQuery query(DbConnection::Getconnection()->getDb());

		query.prepare("{call InsertDoctor(:persontype, :firstname, :lastname, :cnp, :gender, :dateofbirth, :homeaddress, :phonenumber, :emailaddress, :username, :password, :specialty)}");
		query.bindValue(":persontype", 2);
		query.bindValue(":firstname", ui.firstNameTxtBox->text());
		query.bindValue(":lastname", ui.lastNameTxtBox->text());
		query.bindValue(":cnp", ui.cnpTxtBox->text());
		query.bindValue(":gender", ui.gender->currentText());
		query.bindValue(":dateofbirth", BirttDateString);
		query.bindValue(":homeaddress", ui.homeAddressTxtBox->text());
		query.bindValue(":phonenumber", ui.phoneNumnberTxtBox->text());
		query.bindValue(":emailaddress", ui.emailAddressTxtBox->text());
		query.bindValue(":username", ui.usernameTxtBox->text());
		query.bindValue(":password", ui.passwordTxtBox->text());
		query.bindValue(":specialty", ui.specialtyComboBox->currentText());
		query.exec();
		query.next();

		parent->deleteLater();
	}

}

void AdminFunctions::DeleteDoctor(Ui::AdminWindow ui, QWidget * parent, QString doctorString, int docId)
{
	msg = new QMessageBox(parent);
	msg->setIcon(QMessageBox::Information);

	selectedDocPersonID = AdminFunctions::GetselectedDocPersonID(ui);

	if (selectedDocPersonID != -1)
	{

		DbConnection::Getconnection()->OpenDatabaseConnection();

		if (!DbConnection::Getconnection()->getDb().isOpen())
		{
			msg->setText("Database Connection Error!");
			msg->show();
			return;
		}

		QSqlQuery query(DbConnection::Getconnection()->getDb());

		query.prepare("{call NoPatients(:docId)}");
		query.bindValue(":docId", docId);
		query.exec();
		query.next();

		transferWin->setOldDocId(docId);
		transferWin->setNoOfPatientsLbl(doctorString, query.value(0).toString());

		if (query.value(0).toInt() != 0)
		{
			DbConnection::Getconnection()->OpenDatabaseConnection();

			QSqlQuery queryDoc(DbConnection::Getconnection()->getDb());

			queryDoc.prepare("{call ReturnTransferDoctors(:docId)}");
			queryDoc.bindValue(":docId", docId);
			bool e1 = queryDoc.exec();

			QStringList doctorsList;
			int noOfDoc = 0;

			doctorsList.push_back(" ");

			while (queryDoc.next())
			{
				doctorsList.push_back(queryDoc.value(0).toString() + " Dr. " + queryDoc.value(3).toString() + " " + queryDoc.value(2).toString());
				noOfDoc++;
			}

			int *idDoctorList = new int[noOfDoc];

			transferWin->setDoctorComboBox(doctorsList);
			transferWin->setIdDoctor(docId);
			transferWin->show();
		}
		else
		{
			QMessageBox::StandardButton xBtn;

			xBtn = QMessageBox::question(parent, "Delete Doctor", "Are you sure?\n",
				QMessageBox::Yes | QMessageBox::No);
			if (xBtn != QMessageBox::Yes) {
				//
			}
			else {
				transferWin->setIdDoctor(docId); // set doctor ID to delete
				transferWin->DeleteDoctor();  //delete doctor
				PopulateTable(ui); // repopulate table
				msg->setText("Doctor Deleted!");
				msg->show();
			}
}
		ClearCredentials(ui);
	}
	else
	{
		msg->setText("Select a doctor!");
		msg->show();
	}
}

