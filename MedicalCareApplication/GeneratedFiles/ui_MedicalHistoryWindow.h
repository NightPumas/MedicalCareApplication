/********************************************************************************
** Form generated from reading UI file 'MedicalHistoryWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEDICALHISTORYWINDOW_H
#define UI_MEDICALHISTORYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MedicalHistoryWindow
{
public:
    QLabel *doctorInfoLbl;
    QFrame *line;
    QLabel *patientInfoLbl;
    QFrame *line_2;
    QTableWidget *tableViwMedical;
    QPushButton *addExamBtn;
    QPushButton *viewExamBtn;
    QPushButton *cancelBtn;
    QLabel *medicalHistoryLbl;
    QGroupBox *groupBox;
    QLabel *cnpLbl;
    QLabel *cnpValueLbl;
    QLabel *ageLbl;
    QLabel *ageValueLbl;
    QLabel *bloodTypeLbl;
    QLabel *bloodTypeValueLbl;
    QLabel *label_3;
    QLabel *rhValueLbl;
    QFrame *line_3;
    QFrame *line_4;
    QLabel *label_5;
    QLabel *addressValueLbl;

    void setupUi(QWidget *MedicalHistoryWindow)
    {
        if (MedicalHistoryWindow->objectName().isEmpty())
            MedicalHistoryWindow->setObjectName(QStringLiteral("MedicalHistoryWindow"));
        MedicalHistoryWindow->setWindowModality(Qt::ApplicationModal);
        MedicalHistoryWindow->resize(807, 672);
        doctorInfoLbl = new QLabel(MedicalHistoryWindow);
        doctorInfoLbl->setObjectName(QStringLiteral("doctorInfoLbl"));
        doctorInfoLbl->setGeometry(QRect(40, 10, 731, 41));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        doctorInfoLbl->setFont(font);
        line = new QFrame(MedicalHistoryWindow);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 50, 791, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        patientInfoLbl = new QLabel(MedicalHistoryWindow);
        patientInfoLbl->setObjectName(QStringLiteral("patientInfoLbl"));
        patientInfoLbl->setGeometry(QRect(40, 70, 741, 41));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        patientInfoLbl->setFont(font1);
        line_2 = new QFrame(MedicalHistoryWindow);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(10, 180, 791, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        tableViwMedical = new QTableWidget(MedicalHistoryWindow);
        tableViwMedical->setObjectName(QStringLiteral("tableViwMedical"));
        tableViwMedical->setGeometry(QRect(30, 260, 581, 371));
        addExamBtn = new QPushButton(MedicalHistoryWindow);
        addExamBtn->setObjectName(QStringLiteral("addExamBtn"));
        addExamBtn->setGeometry(QRect(670, 360, 100, 30));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        addExamBtn->setFont(font2);
        viewExamBtn = new QPushButton(MedicalHistoryWindow);
        viewExamBtn->setObjectName(QStringLiteral("viewExamBtn"));
        viewExamBtn->setGeometry(QRect(670, 430, 100, 30));
        viewExamBtn->setFont(font2);
        cancelBtn = new QPushButton(MedicalHistoryWindow);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        cancelBtn->setGeometry(QRect(670, 590, 100, 30));
        cancelBtn->setFont(font2);
        medicalHistoryLbl = new QLabel(MedicalHistoryWindow);
        medicalHistoryLbl->setObjectName(QStringLiteral("medicalHistoryLbl"));
        medicalHistoryLbl->setGeometry(QRect(30, 200, 581, 31));
        medicalHistoryLbl->setFont(font);
        medicalHistoryLbl->setAlignment(Qt::AlignCenter);
        groupBox = new QGroupBox(MedicalHistoryWindow);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(40, 110, 741, 71));
        groupBox->setFlat(true);
        groupBox->setCheckable(false);
        cnpLbl = new QLabel(groupBox);
        cnpLbl->setObjectName(QStringLiteral("cnpLbl"));
        cnpLbl->setGeometry(QRect(30, 10, 41, 21));
        cnpValueLbl = new QLabel(groupBox);
        cnpValueLbl->setObjectName(QStringLiteral("cnpValueLbl"));
        cnpValueLbl->setGeometry(QRect(70, 10, 111, 21));
        cnpValueLbl->setFont(font1);
        ageLbl = new QLabel(groupBox);
        ageLbl->setObjectName(QStringLiteral("ageLbl"));
        ageLbl->setGeometry(QRect(30, 40, 31, 21));
        ageValueLbl = new QLabel(groupBox);
        ageValueLbl->setObjectName(QStringLiteral("ageValueLbl"));
        ageValueLbl->setGeometry(QRect(70, 40, 101, 21));
        ageValueLbl->setFont(font1);
        bloodTypeLbl = new QLabel(groupBox);
        bloodTypeLbl->setObjectName(QStringLiteral("bloodTypeLbl"));
        bloodTypeLbl->setGeometry(QRect(220, 10, 81, 21));
        bloodTypeValueLbl = new QLabel(groupBox);
        bloodTypeValueLbl->setObjectName(QStringLiteral("bloodTypeValueLbl"));
        bloodTypeValueLbl->setGeometry(QRect(300, 10, 41, 21));
        bloodTypeValueLbl->setFont(font1);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(220, 40, 47, 21));
        rhValueLbl = new QLabel(groupBox);
        rhValueLbl->setObjectName(QStringLiteral("rhValueLbl"));
        rhValueLbl->setGeometry(QRect(260, 40, 71, 21));
        rhValueLbl->setFont(font1);
        line_3 = new QFrame(groupBox);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(350, 10, 20, 51));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(groupBox);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(190, 10, 20, 51));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(380, 20, 71, 21));
        addressValueLbl = new QLabel(groupBox);
        addressValueLbl->setObjectName(QStringLiteral("addressValueLbl"));
        addressValueLbl->setGeometry(QRect(450, 10, 281, 41));
        addressValueLbl->setFont(font1);

        retranslateUi(MedicalHistoryWindow);

        QMetaObject::connectSlotsByName(MedicalHistoryWindow);
    } // setupUi

    void retranslateUi(QWidget *MedicalHistoryWindow)
    {
        MedicalHistoryWindow->setWindowTitle(QApplication::translate("MedicalHistoryWindow", "MedicalHistoryWindow", 0));
        doctorInfoLbl->setText(QApplication::translate("MedicalHistoryWindow", "<html><head/><body><p><span style=\" color:#4b0082;\">User Info</span></p></body></html>", 0));
        patientInfoLbl->setText(QApplication::translate("MedicalHistoryWindow", "<html><head/><body><p><span style=\" font-size:14pt; color:#4b0082;\">Patient Info</span></p></body></html>", 0));
        addExamBtn->setText(QApplication::translate("MedicalHistoryWindow", "Add\n"
" Examination", 0));
        viewExamBtn->setText(QApplication::translate("MedicalHistoryWindow", "View\n"
" Examination", 0));
        cancelBtn->setText(QApplication::translate("MedicalHistoryWindow", "Cancel", 0));
        medicalHistoryLbl->setText(QApplication::translate("MedicalHistoryWindow", "<html><head/><body><p><span style=\" color:#4b0082;\">Medical History</span></p></body></html>", 0));
        groupBox->setTitle(QString());
        cnpLbl->setText(QApplication::translate("MedicalHistoryWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600; color:#623882;\">CNP:</span></p></body></html>", 0));
        cnpValueLbl->setText(QApplication::translate("MedicalHistoryWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600; color:#5555ff;\">1234567890123</span></p></body></html>", 0));
        ageLbl->setText(QApplication::translate("MedicalHistoryWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600; color:#623882;\">Age:</span></p></body></html>", 0));
        ageValueLbl->setText(QApplication::translate("MedicalHistoryWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600; color:#5555ff;\">100 years</span></p></body></html>", 0));
        bloodTypeLbl->setText(QApplication::translate("MedicalHistoryWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600; color:#623882;\">Blood Type:</span></p></body></html>", 0));
        bloodTypeValueLbl->setText(QApplication::translate("MedicalHistoryWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600; color:#5555ff;\">AB IV</span></p></body></html>", 0));
        label_3->setText(QApplication::translate("MedicalHistoryWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600; color:#623882;\">RH:</span></p></body></html>", 0));
        rhValueLbl->setText(QApplication::translate("MedicalHistoryWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600; color:#5555ff;\">Positive</span></p></body></html>", 0));
        label_5->setText(QApplication::translate("MedicalHistoryWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600; color:#623882;\">Address:</span></p></body></html>", 0));
        addressValueLbl->setText(QApplication::translate("MedicalHistoryWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600; color:#5555ff;\">Str. Agriselor nr 100, Brasov, Romania</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class MedicalHistoryWindow: public Ui_MedicalHistoryWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEDICALHISTORYWINDOW_H
