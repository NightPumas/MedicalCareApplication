#include "User.h"


User::User(int PersonID, QString FirstName, QString LastName, QString CNP, QString Gender, QString DateOfBirth, int PersonType, QString HomeAddress, QString PhoneNumber, QString EmailAddress, QString UserName, QString UserPassword, bool IsDeleted)
	: Person(PersonID, FirstName, LastName, CNP, Gender, DateOfBirth, PersonType, HomeAddress, PhoneNumber, EmailAddress),
	UserName(UserName),
	UserPassword(UserPassword),
	IsDeleted(IsDeleted),
	PersonID(PersonID)
{

}

User::User()
{
}


User::~User()
{
}