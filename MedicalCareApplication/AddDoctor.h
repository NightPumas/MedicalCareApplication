#pragma once
#include <QWidget>
#include "ui_AddDoctor.h"
#include "AdminFunctions.h"
#include <QCloseEvent>

class AddDoctor : public QWidget {
	Q_OBJECT

public:
	AddDoctor(QWidget * parent = 0);
	void closeEvent(QCloseEvent * event);
	~AddDoctor();

	QPushButton* getAddBtn();

private:
	Ui::AddDoctor ui;

private slots:
	void AddFunc();
};
