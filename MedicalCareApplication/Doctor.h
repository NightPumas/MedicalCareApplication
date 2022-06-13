#pragma once
#include "User.h"
#include<QtWidgets\qtablewidget.h>
#include <qsqlrecord.h>

class Doctor : public User
{
private:
	int ObjectID;
	QString Specialty;
	bool IsDeleted = false;
	int type = 2;

public:
	Doctor(int PersonID, QString FirstName, QString LastName, QString CNP, QString Gender, QString DateOfBirth, int PersonType,
		QString HomeAddress, QString PhoneNumber, QString EmailAddress, QString UserName, QString UserPassword,
		QString Specialty, bool IsDeleted);

	Doctor(int ObjectId, int PersonId, QString FirstName, QString LastName, QString CNP, QString Gender, QString DateOfBirth, 
		QString HomeAddress, QString PhoneNumber, QString EmailAddress, QString Specialty, QString UserName, QString UserPassword, 
		bool IsDeleted);

	int getDocId();
	bool getIsDeleted();

	Doctor();
	~Doctor();
};

