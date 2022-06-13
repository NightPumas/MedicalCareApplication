#ifndef MEDICALHISTORYWINDOW_H
#define MEDICALHISTORYWINDOW_H

#include <QWidget>
#include "AddExam.h"
#include "ExamInfoWindow.h"
#include "ui_MedicalHistoryWindow.h"

class MedicalHistoryWindow : public QWidget
{
	Q_OBJECT

public:
	MedicalHistoryWindow(QWidget *parent = 0);
	~MedicalHistoryWindow();

	void setDoctorInfoLbl(QString info);
	void setPatientInfoLbl(QString info);
	void setPacientData(QString cnp, QString age, QString bloodType, QString rh, QString address);

private:
	Ui::MedicalHistoryWindow ui;

	AddExam *addExamWin;
	ExamInfoWindow * examInfoWin;

private slots:
	void AddExamWin();
	void ExamInfoWin();
};

#endif // MEDICALHISTORYWINDOW_H
