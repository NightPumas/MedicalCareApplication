#pragma once
#include <iostream>
#include <QWidget>
#include <QCloseEvent>

using namespace std;

class Person
{
private:
	int ObjectID;
	QString FirstName;
	QString LastName;
	QString CNP;
	QString Gender;
	QString DateOfBirth;
	int PersonType;
	QString HomeAddress;
	QString PhoneNumber;
	QString EmailAddress;
public:
	Person(int ObjectID, QString FirstName, QString LastName, QString CNP, QString Gender, QString DateOfBirth, int PersonType,
		QString HomeAddress,
		QString PhoneNumber,
		QString EmailAddress);
	Person();
	Person(int ObjectId, QString FirstName, QString LastName,
		QString HomeAddress,
		QString PhoneNumber,
		QString EmailAddress);

	int getPersonID();
	QString getFirstName();
	QString getLastName();
	QString getCNP();
	QString getGender();
	QString getDateOfBirth();
	int getPersonType();
	QString getHomeAddress();
	QString getPhoneNumber();
	QString getEmailAddress();


	void setPhoneNumber(QString Phone);
	void setEmailAddress(QString Email);
	void setFirstName(QString FirstName);
	void setLastName(QString LastName);
	void setHomeAddress(QString HomeAddress);

	virtual ~Person();
};

