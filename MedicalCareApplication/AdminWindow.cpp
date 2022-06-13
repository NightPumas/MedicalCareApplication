#include "AdminWindow.h"

AdminWindow::AdminWindow(QMainWindow * parent) : QMainWindow(parent)
{
	ui.setupUi(this);
	this->setWindowFlags(Qt::Window);

	adminFunc = new AdminFunctions();
	adminFunc->PopulateTable(ui);

	//Set Buttons
	 connect(ui.addDoctorBtn, SIGNAL(clicked()), this, SLOT(AddDoctorFunc())); 
	 connect(ui.updateBtn, SIGNAL(clicked()), this, SLOT(UpdateDoctorFunction()));
	 connect(ui.deleteDoctorBtn, SIGNAL(clicked()), this, SLOT(DeleteFunc()));
	 connect(ui.table, SIGNAL(clicked(QModelIndex)), this, SLOT(ShowText()));
	 connect(ui.logOutBtn, SIGNAL(clicked()), this, SLOT(LogoutFunc()));
}

AdminWindow::~AdminWindow() 
{
	
}

void AdminWindow::closeEvent(QCloseEvent *event)
{
	QMessageBox::StandardButton xBtn;

	xBtn = QMessageBox::question(this, "Close Window", "Are you sure?\n",
		QMessageBox::Yes | QMessageBox::No);
	if (xBtn != QMessageBox::Yes)
	{
		event->ignore();
	}
	else
	{
		event->ignore();
		this->deleteLater();
		QMainWindow *LoginScreen = (QMainWindow*)(this->parent());
		LoginScreen->show();
	}

}

void AdminWindow::ShowText()
{
	adminFunc->ShowText(ui);
}

void AdminWindow::LogoutFunc()
{
	QMainWindow *LoginScreen = (QMainWindow*)(this->parent());
	LoginScreen->show();
	this->deleteLater();
}

void AdminWindow::DeleteFunc()
{
	adminFunc->transferWin = new TransferPatientWindow(this);
	adminFunc->DeleteDoctor(ui, this, adminFunc->CurrentSelectedDoc(), adminFunc->CurrentDocId());
	connect(adminFunc->transferWin->getTransferBtn(), SIGNAL(clicked()), this, SLOT(PopulateT()));
}

void AdminWindow::UpdateDoctorFunction()
{
	adminFunc->UpdateFunc(ui, this);
}

void AdminWindow::AddDoctorFunc()
{
	addDoctorWin = new AddDoctor(this);
	addDoctorWin->show();
	connect(addDoctorWin->getAddBtn(), SIGNAL(clicked()), this, SLOT(PopulateT()));
}


void AdminWindow::PopulateT()
{
	adminFunc->PopulateTable(ui);
}
