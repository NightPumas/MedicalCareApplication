#include "logger.hpp"

void Logger::setUp(QString fileName) {

	if (!fileName.isEmpty()) {
		file = new QFile;
		file->setFileName(fileName);
		file->open(QIODevice::Append | QIODevice::Text);
	}
}

void Logger::logLine(LogLevel loglevel, QString message)
{
	QString dateAndType;

	switch (loglevel)
	{
	case Info:
		dateAndType = "[INFO]";
		break;
	case Error:
		dateAndType = "[ERROR]";
		break;
	default:
		break;
	}

	QString text = dateAndType + "[" + QDateTime::currentDateTime().toString("dd.MM.yyyy hh:mm:ss ") + "]" + message + "\n";
	QTextStream out(file);
	if (file != 0) {
		out << text;
	}
}

Logger * Logger::getInstance()
{
	if (!l_instance)
		l_instance = new Logger;
	return l_instance;
}

Logger::Logger(QObject * parent) : QObject(parent) {
	
}


Logger::~Logger() {

	if (file != 0)
		file->close();
}
