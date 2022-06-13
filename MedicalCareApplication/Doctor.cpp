#include "Doctor.h"



Doctor::Doctor(int PersonID, QString FirstName, QString LastName, QString CNP, QString Gender, QString DateOfBirth, int PersonType, QString HomeAddress, QString PhoneNumber, QString EmailAddress, QString UserName, QString UserPassword, QString Specialty, bool IsDeleted)
	: User(PersonID, FirstName, LastName, CNP, Gender, DateOfBirth, PersonType, HomeAddress, PhoneNumber, EmailAddress, UserName, UserPassword, IsDeleted),
	Specialty(Specialty)
{

}

Doctor::Doctor(int ObjectId, int PersonId, QString FirstName, QString LastName, QString CNP, QString Gender, QString DateOfBirth,
	QString HomeAddress, QString PhoneNumber, QString EmailAddress, QString Specialty, QString UserName, QString UserPassword, 
	bool IsDeleted) :User(PersonId, FirstName, LastName, CNP, Gender, DateOfBirth, type, HomeAddress, PhoneNumber, EmailAddress,
		UserName, UserPassword, IsDeleted),
	Specialty(Specialty),
	ObjectID(ObjectId)
{
}

int Doctor::getDocId()
{
	return this->ObjectID;
}

bool Doctor::getIsDeleted()
{
	return this->IsDeleted;
}

Doctor::Doctor()
{
}

Doctor::~Doctor()
{
}
