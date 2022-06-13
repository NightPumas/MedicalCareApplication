#pragma once
#include "User.h"

class Patient :
	public User
{
private:
	int ObjectID;
	int DoctorID;
	QString BloodType;
	QString RH;
	bool IsDeleted = false;
public:


	//Patient(int PersonID, QString FirstName, QString LastName, QString CNP, QString Gender, QString DateOfBirth, int PersonType,
	//	QString HomeAddress, QString PhoneNumber, QString EmailAddress, QString UserName, QString UserPassword,
	//	bool IsDeleted, int DoctorID, QString BloodType, QString RH);

	//Patient(int ObjectId, int PersonId, QString FirstName, QString LastName, QString CNP, QString Gender, QString DateOfBirth, QString HomeAddress, QString PhoneNumber, QString EmailAddress, int DoctorID, QString BloodType, QString RH, QString UserName, QString UserPassword, bool IsDeleted, int PersonType);

	Patient(int PersonID, QString FirstName, QString LastName, QString CNP, QString Gender, QString DateOfBirth, int PersonType, QString HomeAddress, QString PhoneNumber, QString EmailAddress, QString UserName, QString UserPassword, int DoctorID, QString BloodType, QString RH, bool IsDeleted);

	Patient(int ObjectId, int PersonId, QString FirstName, QString LastName, QString CNP, QString Gender, QString DateOfBirth, QString HomeAddress, QString PhoneNumber, QString EmailAddress, int DoctorID, QString BloodType, QString RH, QString UserName, QString UserPassword, int type, bool IsDeleted);


	Patient();
	int getPatId();
	bool getIsDeleted();
	~Patient();
};

