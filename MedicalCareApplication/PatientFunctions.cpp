#include "PatientFunctions.h"



PatientFunctions::PatientFunctions()
{
}


PatientFunctions::~PatientFunctions()
{
}
Patient* PatientFunctions::CurrentPatient(Ui::MedicalCareApplicationClass ui)
{
	DbConnection::Getconnection()->OpenDatabaseConnection();

	QString user = ui.userTxtBox->text();
	QSqlQuery query(DbConnection::Getconnection()->getDb());
	query.prepare("{call PacientViewbyUsername(:username)}");
	query.bindValue(":username", user);
	query.exec();
	query.next();

	currentPatient = new Patient(query.value(0).toInt(),
		query.value(1).toInt(),
		query.value(2).toString(),
		query.value(3).toString(),
		query.value(4).toString(),
		query.value(5).toString(),
		query.value(6).toString(),
		query.value(7).toString(),
		query.value(8).toString(),
		query.value(9).toString(),
		query.value(10).toInt(),
		query.value(11).toString(),
		query.value(12).toString(),
		query.value(13).toString(),
		query.value(14).toString(),
		query.value(15).toInt(),
		query.value(16).toBool());

	return currentPatient;

}
