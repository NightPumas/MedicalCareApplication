#include "Patient.h"


//Patient::Patient(int PersonID, QString FirstName, QString LastName, QString CNP, QString Gender, QString DateOfBirth, int PersonType, QString HomeAddress, QString PhoneNumber, QString EmailAddress, QString UserName, QString UserPassword, bool IsDeleted, int DoctorID, QString BloodType, QString RH)
//	: User (PersonID, FirstName, LastName, CNP, Gender, DateOfBirth, PersonType, HomeAddress, PhoneNumber, EmailAddress, UserName, UserPassword, IsDeleted),
//	DoctorID(DoctorID),
//	BloodType(BloodType),
//	RH(RH),
//	ObjectID(ObjectID)
//{
//}
//
//Patient::Patient(int ObjectId, int PersonId, QString FirstName, QString LastName, QString CNP, QString Gender, QString DateOfBirth,
//	QString HomeAddress, QString PhoneNumber, QString EmailAddress,int DoctorID, QString BloodType, QString RH,QString UserName, 
//	QString UserPassword, bool IsDeleted, int PersonType)
//{
//
//}

Patient::Patient(int PersonId, QString FirstName, QString LastName, QString CNP, QString Gender, QString DateOfBirth, int PersonType, QString HomeAddress, QString PhoneNumber, QString EmailAddress, QString UserName, QString UserPassword, int DoctorID, QString BloodType, QString RH, bool IsDeleted)
	: User(PersonId, FirstName, LastName, CNP, Gender, DateOfBirth, PersonType, HomeAddress, PhoneNumber, EmailAddress, UserName, UserPassword, IsDeleted),
		DoctorID(DoctorID),
		BloodType(BloodType),
		RH(RH)
{

}

Patient::Patient(int ObjectId, int PersonId, QString FirstName, QString LastName, QString CNP, QString Gender, QString DateOfBirth, QString HomeAddress, QString PhoneNumber, QString EmailAddress, int DoctorID, QString BloodType, QString RH, QString UserName, QString UserPassword,int PersonType, bool IsDeleted)
	:User(PersonId, FirstName, LastName, CNP, Gender, DateOfBirth, PersonType, HomeAddress, PhoneNumber, EmailAddress, UserName, UserPassword, IsDeleted),
	DoctorID(DoctorID),
	BloodType(BloodType),
	RH(RH),
	ObjectID(ObjectId)
{
}

Patient::Patient()
{
}

int Patient::getPatId()
{
	return this->ObjectID;
}

bool Patient::getIsDeleted()
{
	return this->IsDeleted;
}

Patient::~Patient()
{
}
