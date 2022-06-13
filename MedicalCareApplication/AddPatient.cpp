#include "AddPatient.hpp"

AddPatient::AddPatient(QWidget * parent) : QWidget(parent) 
{
	ui.setupUi(this);
	this->setWindowFlags(Qt::Window);

	//Set CreateUserAccountHidden
	ui.AccountGroup->setHidden(true);

	connect(ui.addBtn, SIGNAL(clicked()), this, SLOT(AddPatientToDatabase()));
	connect(ui.cancelBtn, SIGNAL(clicked()), this, SLOT(close()));

}

void AddPatient::closeEvent(QCloseEvent *event)
{
	QMessageBox::StandardButton xBtn;

	xBtn = QMessageBox::question(this, "Close Window", "Are you sure?\n",
		QMessageBox::Yes | QMessageBox::No);
	if (xBtn != QMessageBox::Yes) {
		event->ignore();
	}
	else {
		event->ignore();
		this->deleteLater();
	}
}

AddPatient::~AddPatient() 
{
	
}

void AddPatient::setDoctorId(int id)
{
	docId = id;
}

void AddPatient::AddPatientToDatabase()
{
	//====================================== Data Validation
	int FirstNameCheck = DataValidation::CheckName(ui.firstNameTxtBox->text());
	int LastNameCheck = DataValidation::CheckName(ui.lastNameTxtBox->text());
	int CNPCheck = DataValidation::CheckCNP(ui.cnpTxtBox->text());
	int GenderCheck = DataValidation::CheckGender(ui.gender->currentText());
	int HomeAddressCheck = DataValidation::CheckHomeAddress(ui.addressTxtBox->text());
	int PhoneCheck = DataValidation::CheckPhone(ui.phoneTxtBox->text());
	int EmailCheck = DataValidation::CheckEmail(ui.emailTxtBox->text());
	int UserNameCheck = DataValidation::CheckUserName(ui.usernameTxtBox->text());
	int PasswordCheck = DataValidation::CheckPassword(ui.passwordTxtBox->text());
	int bloodTypeCheck = DataValidation::CheckbloodType(ui.bloodType->currentText());
	int RHCheck = DataValidation::CheckRH(ui.RH->currentText());

	error = false;

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
		//ErrorMessage << "HomeAddress cannot be empty";
		//error = true;
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
		//ErrorMessage << "Phone cannot be empty";
		//error = true;
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
		//ErrorMessage << "Email cannot be empty";
		//error = true;
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

	if (UserNameCheck == -1)
	{
		ErrorMessage << "UserName is Invalid or to long";
		error = true;
	}

	// Check Password

	if (PasswordCheck == -1)
	{
		ErrorMessage << "Password is Invalid or to long";
		error = true;
	}

	//Check BloodType
	if (bloodTypeCheck == 0)
	{
		ErrorMessage << "BloodType cannot be empty";
		error = true;
	}

	//Check RH
	if (RHCheck == 0)
	{
		ErrorMessage << "RH cannot be empty";
		error = true;
	}

	QString DisplayError = ErrorMessage.join(" \n ");

	if (error == true)
	{
		QMessageBox *msg = new QMessageBox(this);
		msg->setText(DisplayError);
		msg->setIcon(QMessageBox::Information);
		msg->NoRole;
		msg->show();
		error = false;
		ErrorMessage.clear();
	}

	else
	{


		if (ui.usernameTxtBox->text() != NULL && ui.passwordTxtBox->text() != NULL)
		{
			DbConnection::Getconnection()->OpenDatabaseConnection();

			QSqlQuery query(connection->Getconnection()->getDb());
			query.prepare("{call InsertPacientWithAccount(:persontype, :firstname, :lastname, :cnp, :gender, :dateofbirth, :homeaddress, :phonenumber, :emailaddress, :bloodtype, :rh, :doctorid, :username, :password)}");
			query.bindValue(":persontype", 3);
			query.bindValue(":firstname", ui.firstNameTxtBox->text());
			query.bindValue(":lastname", ui.lastNameTxtBox->text());
			query.bindValue(":cnp", ui.cnpTxtBox->text());
			query.bindValue(":gender", ui.gender->currentText());
			query.bindValue(":dateofbirth", BirttDateString);
			query.bindValue(":homeaddress", ui.addressTxtBox->text());
			query.bindValue(":phonenumber", ui.phoneTxtBox->text());
			query.bindValue(":emailaddress", ui.emailTxtBox->text());
			query.bindValue(":bloodtype", ui.bloodType->currentText());
			query.bindValue(":rh", ui.RH->currentText());
			query.bindValue(":doctorid", docId);
			query.bindValue(":username", ui.usernameTxtBox->text());
			query.bindValue(":password", ui.passwordTxtBox->text());
			query.exec();
			query.next();
		}
		else
		{
			DbConnection::Getconnection()->OpenDatabaseConnection();

			QSqlQuery query(connection->Getconnection()->getDb());
			query.prepare("{call InsertPacient(:persontype, :firstname, :lastname, :cnp, :gender, :dateofbirth, :homeaddress, :phonenumber, :emailaddress, :bloodtype, :rh, :doctorid)}");
			query.bindValue(":persontype", 3);
			query.bindValue(":firstname", ui.firstNameTxtBox->text());
			query.bindValue(":lastname", ui.lastNameTxtBox->text());
			query.bindValue(":cnp", ui.cnpTxtBox->text());
			query.bindValue(":gender", ui.gender->currentText());
			query.bindValue(":dateofbirth", BirttDateString);
			query.bindValue(":homeaddress", ui.addressTxtBox->text());
			query.bindValue(":phonenumber", ui.phoneTxtBox->text());
			query.bindValue(":emailaddress", ui.emailTxtBox->text());
			query.bindValue(":bloodtype", ui.bloodType->currentText());
			query.bindValue(":rh", ui.RH->currentText());
			query.bindValue(":doctorid", docId);
			query.exec();
			query.next();
		}
		this->hide();
	}
}

QPushButton *AddPatient::getaddButton()
{
	return ui.addBtn;
}