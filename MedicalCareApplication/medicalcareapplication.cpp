#include "MedicalCareApplication.h"

MedicalCareApplication::MedicalCareApplication(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	///	LogIn Button Pressed
	connect(ui.logInBtn, SIGNAL(clicked()), this, SLOT(LogInWindowBtnPressed()));

	///	Cancel Button Pressed
	connect(ui.cancelBtn, SIGNAL(clicked()), this, SLOT(close()));

	DbConnection::Getconnection()->ConnectToDatabase("CERNER-84B0DR5L", "InternshipProjectDB", "sa", "admin");
	//DbConnection::Getconnection()->ConnectToDatabase("CERNER-BAAN7V8A\\SQLEXPRESS", "InternshipProjectDB", "sa", "admin");
	//DbConnection::Getconnection()->ConnectToDatabase("CERNER-OE3PR4Q1\\SQLEXPRESS", "InternshipProjectDB", "sa", "admin");
}

MedicalCareApplication::~MedicalCareApplication()
{

}

void MedicalCareApplication::LogInWindowBtnPressed()
{

	QMessageBox msgBox;
	bool completed = true;

	///	Username entered test
	if (ui.userTxtBox->text().isEmpty() || ui.passwordTxtBox->text().isEmpty())
	{
		msgBox.setText("Username or password cannot be blank");
		msgBox.exec();
		completed = false;
	}

	///LogIn Button Action
	if (completed == true)
	{
		int check = checkCredentials();

		switch (check)
		{
			case -1:
			{
				msgBox.setText("User not found");
				msgBox.exec();
				break;
			}

			case 1:
			{
				adminWin = new AdminWindow(this);
				adminWin->show();
				this->hide();
				ClearCredentials();
				break;
			}

			case 2:
			{
				doctorWin = new DoctorWindow(this);

				doctorWin->setDoctor(docFunction->CurrentDoctor(ui));
				doctorWin->setTitleLbl();

				if (doctorWin->getIsDeleted() == false)
				{
					doctorWin->show();
					this->hide();
				}
				else
				{
					msgBox.setText("No valid account!");
					msgBox.exec();
				}
				ClearCredentials();
				
			}
				break;
			case 3:
			{
				patientWin = new PatientWindow(this);

				//patientWin->setPatient(patFunction->CurrentPatient(ui));
				patientWin->setTitleLbl();

				if (patientWin->getIsDeleted() == false)
				{
					patientWin->show();
					this->hide();
				}
				else
				{
					msgBox.setText("No valid account!");
					msgBox.exec();
				}
				ClearCredentials();
				break;
			}
		}
	}
}

int MedicalCareApplication::checkCredentials()
{
	DbConnection::Getconnection()->OpenDatabaseConnection();

	QSqlQuery query(DbConnection::Getconnection()->getDb());
	query.prepare("{call CheckPassword(:username, :password)}");
	query.bindValue(":username", ui.userTxtBox->text());
	query.bindValue(":password", ui.passwordTxtBox->text());
	query.exec();
	query.next();

	int typeOfUser = query.value(0).toInt();
	return typeOfUser;

}

void MedicalCareApplication::ClearCredentials()
{
	ui.userTxtBox->setText("");
	ui.passwordTxtBox->setText("");
}

