#pragma once
#include <QObject>
#include <QPlainTextEdit>
#include <QFile>
#include <QTextStream>
#include <QDateTime>

enum LogLevel
{
	Info = 0,    //!< Info level. Can be used for informational records, which may be interesting for not only developers.
	Error   //!< Error. May be used for a big problems making your application work wrong but not crashing.
};

class Logger : public QObject {
	Q_OBJECT

public:
	~Logger();
	void setUp(QString fileName);
	void logLine(LogLevel loglevel, QString message);
	static Logger *getInstance();
	

private:
	Logger(QObject *parent = Q_NULLPTR);
	static Logger *l_instance;
	QFile *file;
	
};
