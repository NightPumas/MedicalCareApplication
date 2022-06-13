#pragma once
#include <QWidget>
#include <QRegularExpression>
#include <regex>

class DataValidation
{
public:
	DataValidation();
	virtual ~DataValidation();

	static int CheckName(QString FirstName);

	static int CheckCNP(QString CNP);

	static int CheckHomeAddress(QString HomeAddress);

	static int CheckGender(QString Gender);

	static int CheckPhone(QString HomeAddress);

	static int CheckEmail(QString Email);

	static int CheckUserName(QString UserName);

	static int CheckPassword(QString Password);

	static int CheckbloodType(QString bloodType);

	static int CheckRH(QString RH);

};

