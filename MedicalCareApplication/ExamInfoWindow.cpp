#include "ExamInfoWindow.h"

ExamInfoWindow::ExamInfoWindow(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

void ExamInfoWindow::closeEvent(QCloseEvent *event)
{
	QMessageBox::StandardButton xBtn;

	xBtn = QMessageBox::question(this, "Close Window", "Are you sure?\n",
		QMessageBox::Yes | QMessageBox::No);
	if (xBtn != QMessageBox::Yes) {
		event->ignore();
	}
	else {
		event->ignore();
		this->hide();
	}
}

ExamInfoWindow::~ExamInfoWindow()
{

}
