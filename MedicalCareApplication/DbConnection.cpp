#include "DbConnection.h"

DbConnection *DbConnection::connection = NULL;

DbConnection::DbConnection()
{
	
}

void DbConnection::ConnectToDatabase(QString address, QString dbName, QString userName, QString password)
{
	QString connectionTemplate = "DRIVER={SQL SERVER};SERVER=%1;DATABASE=%2;";

	connectionString = connectionTemplate.arg(address).arg(dbName);

	db = QSqlDatabase::addDatabase("QODBC", "MainDatabase");
	db.setDatabaseName(connectionString);
	db.setUserName(userName);
	db.setPassword(password);
}

DbConnection *DbConnection::Getconnection()
	{
		if (!connection)
			connection = new DbConnection();
		return connection;
	}

	void DbConnection::OpenDatabaseConnection()
	{
		db.open();
	}

	QSqlDatabase DbConnection::getDb()
	{
		return db;
	}

	void DbConnection::CloseDatabaseConnection()
	{
		db.close();
	}
