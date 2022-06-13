#include "EditPersonalDataWindow.h"

EditPersonalDataWindow::EditPersonalDataWindow(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setWindowFlags(Qt::Window);
	connect(ui.editBtn, SIGNAL(clicked()), this, SLOT(UpdateFunc()));
	connect(ui.cancelBtn, SIGNAL(clicked()), this, SLOT(close()));
}

Ui::EditPersonalDataWindow EditPersonalDataWindow::getUI()
{
	return ui;
}

QPushButton *EditPersonalDataWindow::getEditbtn()
{
	return ui.editBtn;
}

void EditPersonalDataWindow::setPesonID(int personID)
{
	this->PersonID = personID;
}

QString EditPersonalDataWindow::getEmail()
{
	return currentEmail;
};

void EditPersonalDataWindow::closeEvent(QCloseEvent *event)
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

EditPersonalDataWindow::~EditPersonalDataWindow()
{

}

void EditPersonalDataWindow::UpdateFunc()
{
	msg = new QMessageBox(this);
	msg->setIcon(QMessageBox::Information);

	//====================================== Data Validation
	int HomeAddressCheckx = DataValidation::CheckHomeAddress(ui.homeAddressTxtBox->text());
	int PhoneCheck = DataValidation::CheckPhone(ui.phoneNumberTxtBox->text());
	int EmailCheck = DataValidation::CheckEmail(ui.emailAddressTxtBox->text());

	//Data verification

		//check HomeAddress 
		if (HomeAddressCheckx == 0)
		{
			ErrorMessage << "Home Address cannot be empty";
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

				if (currentHomeAddress != ui.homeAddressTxtBox->text() && (!ui.homeAddressTxtBox->text().isEmpty()))
				{
					QSqlQuery query(DbConnection::Getconnection()->getDb());
					//ui.table->item(currentRow, 6)->setText(ui.homeAddressTxtBox->text());
					query.prepare("{call UpdatePersonAddressInDatabase(:objectID, :homeAddress)}");
					query.bindValue(":objectID", PersonID);
					query.bindValue(":homeAddress", ui.homeAddressTxtBox->text());
					query.exec();
					query.next();
					edited = true;
				}

				if (currentPhoneNo != ui.phoneNumberTxtBox->text() && (!ui.phoneNumberTxtBox->text().isEmpty()))
				{
					QSqlQuery query(DbConnection::Getconnection()->getDb());
				//	ui.table->item(currentRow, 7)->setText(ui.phoneNumberTxtBox->text());
					query.prepare("{call UpdatePersonPhoneInDatabase(:objectID, :phoneNo)}");
					query.bindValue(":objectID", PersonID);
					query.bindValue(":phoneNo", ui.phoneNumberTxtBox->text());
					query.exec();
					query.next();
					edited = true;
				}

				if (currentEmail != ui.emailAddressTxtBox->text() && (!ui.emailAddressTxtBox->text().isEmpty()))
				{
					QSqlQuery query(DbConnection::Getconnection()->getDb());
				//	ui.table->item(currentRow, 8)->setText(ui.emailAddressTxtBox->text());
					query.prepare("{call UpdatePersonEmailInDatabase(:objectID, :email)}");
					query.bindValue(":objectID", PersonID);
					query.bindValue(":email", ui.emailAddressTxtBox->text());
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
