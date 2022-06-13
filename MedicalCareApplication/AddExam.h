#ifndef ADDEXAM_H
#define ADDEXAM_H


#include "bitalino.h"
#include <QWidget>
#include "ui_AddExam.h"
#include <QCloseEvent>
#include <qmessagebox.h>

class AddExam : public QWidget
{
	Q_OBJECT

public:
	AddExam(QWidget *parent = 0);
	void closeEvent(QCloseEvent * event);
	~AddExam();

private:
	Ui::AddExam ui;
};

#endif // ADDEXAM_H
