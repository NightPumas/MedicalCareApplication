#pragma once
#include "Person.h"
class User :
	public Person
{
private:
	int ObjectID;
	int PersonID;
	QString UserName;
	QString UserPassword;
	bool IsDeleted;
public:
	User(int PersonID, QString FirstName, QString LastName, QString CNP, QString Gender, QString DateOfBirth, int PersonType,
		QString HomeAddress, QString PhoneNumber, QString EmailAddress, QString UserName, QString UserPassword,
		bool IsDeleted);

	User();
	~User();
};

