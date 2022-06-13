#include "AddDoctor.h"

AddDoctor::AddDoctor(QWidget * parent) : QWidget(parent) 
{
	ui.setupUi(this);
	this->setWindowFlags(Qt::Window);

	ui.BirthDate->setDate(QDate::currentDate());
	ui.BirthDate->setMaximumDate(QDate::currentDate());

	connect(ui.addBtn, SIGNAL(clicked()), this, SLOT(AddFunc()));
	connect(ui.cancelBtn, SIGNAL(clicked()), this, SLOT(close()));
}

void AddDoctor::closeEvent(QCloseEvent *event)
{
	QMessageBox::StandardButton xBtn;

	xBtn = QMessageBox::question(this, "Close Window", "Are you sure?\n",
		QMessageBox::Yes | QMessageBox::No);
	if (xBtn != QMessageBox::Yes) {
		event->ignore();
	}
	else {
		event->ignore();
		this->deleteLater();
	}
}

AddDoctor::~AddDoctor() 
{
	
}

QPushButton * AddDoctor::getAddBtn()
{
	return ui.addBtn;
}

void AddDoctor::AddFunc()
{
	AdminFunctions *adminFunctions;
	adminFunctions = new AdminFunctions();
	adminFunctions->AddDoctor(ui, this);
}