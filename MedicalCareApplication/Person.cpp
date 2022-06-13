#include "Person.h"



Person::Person(int ObjectID, QString FirstName, QString LastName, QString CNP, QString Gender, QString DateOfBirth, int PersonType, QString HomeAddress, QString PhoneNumber, QString EmailAddress)
{
	this->ObjectID = ObjectID;
	this->FirstName = FirstName;
	this->LastName = LastName;
	this->CNP = CNP;
	this->Gender = Gender;
	this->DateOfBirth = DateOfBirth;
	this->PersonType = PersonType;
	this->HomeAddress = HomeAddress;
	this->PhoneNumber = PhoneNumber;
	this->EmailAddress = EmailAddress;
}

Person::Person()
{
}

Person::Person(int ObjectId, QString FirstName, QString LastName, QString HomeAddress, QString PhoneNumber, QString EmailAddress)
{
	this->ObjectID = ObjectId;
	this->FirstName = FirstName;
	this->LastName = LastName;
	this->HomeAddress = HomeAddress;
	this->PhoneNumber = PhoneNumber;
	this->EmailAddress = EmailAddress;
}

QString Person::getFirstName()
{
	return this->FirstName;
}

QString Person::getLastName()
{
	return this->LastName;
}

QString Person::getCNP()
{
	return this->CNP;
}

QString Person::getGender()
{
	return this->Gender;
}

QString Person::getDateOfBirth()
{
	return this->DateOfBirth;
}

int Person::getPersonType()
{
	return this->PersonType;
}

QString Person::getHomeAddress()
{
	return this->HomeAddress;
}

QString Person::getPhoneNumber()
{
	return this->PhoneNumber;
}

QString Person::getEmailAddress()
{
	return this->EmailAddress;
}

int Person::getPersonID()
{
	return this->ObjectID;
}

void Person::setPhoneNumber(QString Phone)
{
	this->PhoneNumber = Phone;
}

void Person::setEmailAddress(QString Email)
{
	this->EmailAddress = Email;
}

void Person::setFirstName(QString FirstName)
{
	this->FirstName = FirstName;
}

void Person::setLastName(QString LastName)
{
	this->LastName = LastName;
}

void Person::setHomeAddress(QString HomeAddress)
{
	this->HomeAddress = HomeAddress;
}


Person::~Person()
{
}
