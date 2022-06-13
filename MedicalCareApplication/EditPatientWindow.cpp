#include "EditPatientWindow.h"

EditPatientWindow::EditPatientWindow(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setWindowFlags(Qt::Window);
	connect(ui.cancelBtn, SIGNAL(clicked()), this, SLOT(close()));
	connect(ui.updateBtn, SIGNAL(clicked()), this, SLOT(UpdateFunc()));

	msg = new QMessageBox(this);
	msg->setIcon(QMessageBox::Information);

}

void EditPatientWindow::closeEvent(QCloseEvent *event)
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

EditPatientWindow::~EditPatientWindow()
{

}

Ui::EditPatientWindow EditPatientWindow::getUI()
{
	return ui;
}

void EditPatientWindow::setPatient(int id, QString firstN, QString lastN, QString address, QString phone, QString email)
{
	currentPatient = new Person(id, firstN, lastN, address, phone, email);
	ui.firstNameUpdateTxtBox->setText(firstN);
	ui.lastNameUpdateTxtBox->setText(lastN);
	ui.addressUpdateTxtBox->setText(address);
	ui.phoneUpdateTxtBox->setText(phone);
	ui.emailUpdateTxtBox->setText(email);
}

void EditPatientWindow::UpdateFunc()
{
	//QString  x = currentPatient->getObjectID();
	id = currentPatient->getPersonID();
	//====================================== Data Validation
	int FirstNameCheck = DataValidation::CheckName(ui.firstNameUpdateTxtBox->text());
	int LastNameCheck = DataValidation::CheckName(ui.lastNameUpdateTxtBox->text());
	int HomeAddressCheckx = DataValidation::CheckHomeAddress(ui.addressUpdateTxtBox->text());
	int PhoneCheck = DataValidation::CheckPhone(ui.phoneUpdateTxtBox->text());
	int EmailCheck = DataValidation::CheckEmail(ui.emailUpdateTxtBox->text());

	//Data verification
	//Check FirstName

	if (id != -1)
	{
		//QStringList ErrorMessage;

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
		}
		else
		{
			DbConnection::Getconnection()->OpenDatabaseConnection();
			QSqlQuery query(DbConnection::Getconnection()->getDb());
			bool edited = false;

			if (currentPatient->getFirstName() != ui.firstNameUpdateTxtBox->text() /*&& (!ui.firstNameUpdateTxtBox->text().isEmpty())*/)
			{
				query.prepare("{call UpdatePersonFirstNameInDatabase(:objectID, :firstName)}");
				query.bindValue(":objectID", currentPatient->getPersonID());
				query.bindValue(":firstName", ui.firstNameUpdateTxtBox->text());
				query.exec();
				query.next();
				currentPatient->setFirstName(ui.firstNameUpdateTxtBox->text());
				edited = true;
			}

			if (currentPatient->getLastName() != ui.lastNameUpdateTxtBox->text() /*&& (!ui.lastNameUpdateTxtBox->text().isEmpty())*/)
			{
				query.prepare("{call UpdatePersonLastNameInDatabase(:objectID, :lastName)}");
				query.bindValue(":objectID", currentPatient->getPersonID());
				query.bindValue(":lastName", ui.lastNameUpdateTxtBox->text());
				query.exec();
				query.next();
				currentPatient->setLastName(ui.lastNameUpdateTxtBox->text());
				edited = true;
			}

			if (currentPatient->getHomeAddress() != ui.addressUpdateTxtBox->text() /*&& (!(!ui.addressUpdateTxtBox->text().isEmpty())*/)
			{
				query.prepare("{call UpdatePersonAddressInDatabase(:objectID, :homeAddress)}");
				query.bindValue(":objectID", currentPatient->getPersonID());
				query.bindValue(":homeAddress", ui.addressUpdateTxtBox->text());
				query.exec();
				query.next();
				edited = true;
			}

			if (currentPatient->getPhoneNumber() != ui.phoneUpdateTxtBox->text() /*&& (!(!ui.phoneUpdateTxtBox->text().isEmpty())*/)
			{
				query.prepare("{call UpdatePersonPhoneInDatabase(:objectID, :phoneNo)}");
				query.bindValue(":objectID", currentPatient->getPersonID());
				query.bindValue(":phoneNo", ui.phoneUpdateTxtBox->text());
				query.exec();
				query.next();
				edited = true;
			}

			if (currentPatient->getEmailAddress() != ui.emailUpdateTxtBox->text() /*&& (!ui.emailUpdateTxtBox->text().isEmpty())*/)
			{
				query.prepare("{call UpdatePersonEmailInDatabase(:objectID, :email)}");
				query.bindValue(":objectID", currentPatient->getPersonID());
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
				
			}
			else
			{
				msg->setText("Nothing to Update !");
				msg->show();
			}
		}
	}
}

QPushButton *EditPatientWindow::getUpdateButton()
{
	return ui.updateBtn;
}