#ifndef EXAMINFOWINDOW_H
#define EXAMINFOWINDOW_H

#include <QWidget>
#include "ui_ExamInfoWindow.h"
#include <QCloseEvent>
#include <qmessagebox.h>

class ExamInfoWindow : public QWidget
{
	Q_OBJECT

public:
	ExamInfoWindow(QWidget *parent = 0);
	void closeEvent(QCloseEvent * event);
	~ExamInfoWindow();

private:
	Ui::ExamInfoWindow ui;
};

#endif // EXAMINFOWINDOW_H
