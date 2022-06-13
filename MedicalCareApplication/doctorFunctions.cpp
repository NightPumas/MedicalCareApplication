#include "doctorFunctions.h"


doctorFunctions::doctorFunctions()
{
}

Doctor* doctorFunctions::CurrentDoctor(Ui::MedicalCareApplicationClass ui)
{
	DbConnection::Getconnection()->OpenDatabaseConnection();
	QSqlDatabase db = DbConnection::Getconnection()->getDb();
	bool x = db.isOpen();
	QString user = ui.userTxtBox->text();
	QSqlQuery query(DbConnection::Getconnection()->getDb());
	query.prepare("{call DoctorViewSingle(:username)}");
	query.bindValue(":username", user);
	query.exec();
	query.next();


	int xx = query.value(0).toInt();
	int sdsf = query.value(1).toInt();
	QString sds = query.value(2).toString();
	QString dfs = query.value(3).toString();
	QString fdf =query.value(4).toString();
	QString fde= query.value(5).toString();
	QString fddsf= query.value(6).toString();
	QString fdsf = query.value(7).toString();
	QString fdsdsf = query.value(8).toString();
	QString fddsfgfsf = query.value(9).toString();
	QString fd34sf =  query.value(10).toString();
	QString fdgfdhsf =  query.value(11).toString();
	QString cfwertefw = query.value(12).toString();
	bool defrw = query.value(13).toBool();



	currentDoc = new Doctor(
		query.value(0).toInt(),
		query.value(1).toInt(),
		query.value(2).toString(),
		query.value(3).toString(),
		query.value(4).toString(),
		query.value(5).toString(),
		query.value(6).toString(),
		query.value(7).toString(),
		query.value(8).toString(),
		query.value(9).toString(),
		query.value(10).toString(),
		query.value(11).toString(),
		query.value(12).toString(),
		query.value(13).toBool());

	return currentDoc;
}

doctorFunctions::~doctorFunctions()
{
}

void doctorFunctions::PopulateTable(QTableWidget *patientsTable, int id)
{
	DbConnection::Getconnection()->OpenDatabaseConnection();

	QSqlQuery query(DbConnection::Getconnection()->getDb());
	query.prepare("{call PacientViewAll(:doctor)}");
	query.bindValue(":doctor", id);
	query.exec();
	query.next();

	patientsTable->setColumnCount(5);
	patientsTable->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
	patientsTable->setHorizontalHeaderLabels(QString("ID; FisrtName; LastName; CNP; Gender").split("; "));

	int index = 0;

	do
	{
		patientsTable->setRowCount(index + 1);

		///idDoctor
		QTableWidgetItem *item0 = new QTableWidgetItem;
		item0->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
		item0->setText(query.value(0).toString());
		patientsTable->setItem(index, 0, item0);

		///firstName
		item0 = new QTableWidgetItem;
		item0->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
		item0->setText(query.value(1).toString());
		patientsTable->setItem(index, 1, item0);

		///lastName
		item0 = new QTableWidgetItem;
		item0->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
		item0->setText(query.value(2).toString());
		patientsTable->setItem(index, 2, item0);


		///cnp
		item0 = new QTableWidgetItem;
		item0->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
		item0->setText(query.value(3).toString());
		patientsTable->setItem(index, 3, item0);

		///gender
		item0 = new QTableWidgetItem;
		item0->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
		item0->setText(query.value(4).toString());
		patientsTable->setItem(index, 4, item0);

		index++;
	} while (query.next());

	patientsTable->show();

}

int doctorFunctions::PatientId(QTableWidget *patientsTable, int currentRow)
{
	DbConnection::Getconnection()->OpenDatabaseConnection();

	QSqlQuery query(DbConnection::Getconnection()->getDb());
	query.prepare("{call FindIdPersonAfterCNP(:cnp)}");
	query.bindValue(":cnp", patientsTable->item(currentRow, 3)->text());
	query.exec();
	query.next();

	int patientId = query.value(0).toInt();

	DbConnection::Getconnection()->CloseDatabaseConnection();

	return patientId;
}