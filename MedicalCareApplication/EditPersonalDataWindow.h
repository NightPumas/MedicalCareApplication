#ifndef EditPersonalDataWindow_H
#define EditPersonalDataWindow_H

#include <QWidget>
#include "ui_EditPersonalDataWindow.h"
#include <QCloseEvent>
#include <qmessagebox.h>
#include "DataValidation.h"
#include "DbConnection.h"

class EditPersonalDataWindow : public QWidget
{
	Q_OBJECT

public:
	EditPersonalDataWindow(QWidget *parent = 0);
	Ui::EditPersonalDataWindow getUI();
	QPushButton* getEditbtn();
	void setPesonID(int personID);
	QString getEmail();
	void closeEvent(QCloseEvent * event);
	~EditPersonalDataWindow();


private:
	Ui::EditPersonalDataWindow ui;
	QMessageBox * msg;
	int id = -1;
	QStringList ErrorMessage;
	QString DisplayError;
	bool error = false;
	QString currentHomeAddress;
	QString currentPhoneNo;
	QString currentEmail ;
	int PersonID;

	private slots:
	void UpdateFunc();


};

#endif // EditPersonalDataWindow_H
