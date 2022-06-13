#pragma once
#include <QtCore\qstring.h>
#include <QtSql\qsqldatabase.h>
#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlQuery>
#include <QtSql/qsqlerror.h>
#include <QtSql/qsqlrecord.h>

class DbConnection
{
	static DbConnection *connection;
	QSqlDatabase db;
	QString connectionString;
	DbConnection();
public:

	void ConnectToDatabase(QString address, QString dbName, QString userName, QString password);

	static DbConnection *Getconnection();

	void OpenDatabaseConnection();

	QSqlDatabase getDb();

	void CloseDatabaseConnection();
};