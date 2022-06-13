#include "DataValidation.h"



DataValidation::DataValidation()
{
}


DataValidation::~DataValidation()
{
}

int DataValidation::CheckName(QString Name)
{

	QRegularExpression NameCheck("^^[a-z A-Z]{1,25}$"); // Any Letters / not numbers or special characters 
	QRegularExpressionMatch matchFirstName = NameCheck.match(Name);

	//check is empty	 
	if (Name.isEmpty())
	{
		return 0;
	}

	//check is valid
	if (!matchFirstName.hasMatch())
	{
		return  -1;
	};

	return 1;
}

int DataValidation::CheckCNP(QString CNP)
{
	QRegularExpression CNPcheck("^[0-9]{13}$"); //13 numbers CNP
	QRegularExpressionMatch matchCNP = CNPcheck.match(CNP);

	//check is empty	 
	if (CNP.isEmpty())
	{
		return 0;
	}
	//check is valid
	if (!matchCNP.hasMatch())
	{
		return -1;
	};

	return 1;
}

int DataValidation::CheckHomeAddress(QString HomeAddress)
{
	QRegularExpression HomeAddressCheck("^(?=.{0,100}$)[^!?#@%]+$"); //anyleters,numbers and some characters
	QRegularExpressionMatch matchHomeAddress = HomeAddressCheck.match(HomeAddress);
	//
	//check is empty	 
	if (HomeAddress.isEmpty())
	{
		return 0;
	}
	//check is valid
	if (!matchHomeAddress.hasMatch()) // max lenght 100
	{
		return -1;
	}

	return 1;
}

int DataValidation::CheckGender(QString Gender)
{
	//check is empty	 
	if (Gender.isEmpty())
	{
		return 0;
	}

	return 1;
}

int DataValidation::CheckPhone(QString Phone)
{
	QStringList P = Phone.split(" ");
	int i = 1;
	Phone = nullptr;
	Phone = P[0];
	while (i<P.size())
	{
		Phone.append(P[i++]);
	}	
	QRegularExpression PhoneCheck("^[+]{1}[0-9]{11}$"); // +  11 numbers in a phone number
	QRegularExpressionMatch matchPhone = PhoneCheck.match(Phone);

	//check is empty	 
	if (Phone.isEmpty())
	{
		return 0;
	}
	//check is valid
	if (!matchPhone.hasMatch())
	{
		return -1;
	};

	return 1;
}

int DataValidation::CheckEmail(QString Email)
{
	QRegularExpression EmailCheck("^(?=.{5,40}$)[0-9A-Za-z.,_-]{1,64}[\\@][0-9a-zA-Z\\-\\_]{1,64}[\\.][0-9A-Za-z\\-]{2,64}$");
	QRegularExpressionMatch matchEmail = EmailCheck.match(Email);

	//check is empty	 
	if (Email.isEmpty())
	{
		return 0;
	}
	//check is valid
	if (!matchEmail.hasMatch())
	{
		return -1;
	};

	return 1;
}

int DataValidation::CheckUserName(QString UserName)
{
	QRegularExpression UserNameCheck("^(?=.{2,15}$)[0-9A-Za-z.,-_][^=?]+$"); //anyleters,numbers and some characters
	QRegularExpressionMatch matchUserName = UserNameCheck.match(UserName);

	//check is empty	 
	if (UserName.isEmpty())
	{
		return 0;
	}
	//check is valid
	if (!matchUserName.hasMatch())
	{
		return -1;
	};

	return 1;
}

int DataValidation::CheckPassword(QString Password)
{
	QRegularExpression PasswordCheck("^(?=.{6,40}$)[0-9A-Za-z.,-_]+$"); //any leters,numbers and some characters
	QRegularExpressionMatch matchPassword = PasswordCheck.match(Password);

	//check is empty	 
	if (Password.isEmpty())
	{
		return 0;
	}
	//check is valid
	if (!matchPassword.hasMatch())
	{
		return -1;
	};

	return 1;
}

int DataValidation::CheckbloodType(QString bloodType)
{
	//check is empty	 
	if (bloodType.isEmpty())
	{
		return 0;
	}

	return 1;
}

int DataValidation::CheckRH(QString RH)
{
	//check is empty	 
	if (RH.isEmpty())
	{
		return 0;
	}

	return 1;
}