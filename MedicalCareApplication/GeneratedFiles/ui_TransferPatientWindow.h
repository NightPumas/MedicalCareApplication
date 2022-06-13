/********************************************************************************
** Form generated from reading UI file 'TransferPatientWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSFERPATIENTWINDOW_H
#define UI_TRANSFERPATIENTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TransferPatientWindow
{
public:
    QLabel *noOfPatientsLbl;
    QPushButton *transferBtn;
    QPushButton *cancelBtn;
    QLabel *transferLbl;
    QFrame *line;
    QComboBox *doctorComboBox;
    QFrame *line_2;
    QLabel *titleLbl;

    void setupUi(QWidget *TransferPatientWindow)
    {
        if (TransferPatientWindow->objectName().isEmpty())
            TransferPatientWindow->setObjectName(QStringLiteral("TransferPatientWindow"));
        TransferPatientWindow->setWindowModality(Qt::ApplicationModal);
        TransferPatientWindow->resize(616, 411);
        noOfPatientsLbl = new QLabel(TransferPatientWindow);
        noOfPatientsLbl->setObjectName(QStringLiteral("noOfPatientsLbl"));
        noOfPatientsLbl->setGeometry(QRect(70, 120, 521, 41));
        transferBtn = new QPushButton(TransferPatientWindow);
        transferBtn->setObjectName(QStringLiteral("transferBtn"));
        transferBtn->setGeometry(QRect(100, 340, 100, 30));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        transferBtn->setFont(font);
        cancelBtn = new QPushButton(TransferPatientWindow);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        cancelBtn->setGeometry(QRect(416, 340, 100, 30));
        cancelBtn->setFont(font);
        transferLbl = new QLabel(TransferPatientWindow);
        transferLbl->setObjectName(QStringLiteral("transferLbl"));
        transferLbl->setGeometry(QRect(70, 230, 161, 31));
        line = new QFrame(TransferPatientWindow);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 180, 591, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        doctorComboBox = new QComboBox(TransferPatientWindow);
        doctorComboBox->setObjectName(QStringLiteral("doctorComboBox"));
        doctorComboBox->setGeometry(QRect(250, 230, 150, 30));
        line_2 = new QFrame(TransferPatientWindow);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(10, 80, 591, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        titleLbl = new QLabel(TransferPatientWindow);
        titleLbl->setObjectName(QStringLiteral("titleLbl"));
        titleLbl->setGeometry(QRect(0, 12, 611, 61));
        titleLbl->setAlignment(Qt::AlignCenter);

        retranslateUi(TransferPatientWindow);

        QMetaObject::connectSlotsByName(TransferPatientWindow);
    } // setupUi

    void retranslateUi(QWidget *TransferPatientWindow)
    {
        TransferPatientWindow->setWindowTitle(QApplication::translate("TransferPatientWindow", "Transfer Patients", 0));
        noOfPatientsLbl->setText(QApplication::translate("TransferPatientWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:600; color:#4b0082;\">No patients</span></p></body></html>", 0));
        transferBtn->setText(QApplication::translate("TransferPatientWindow", "Transfer", 0));
        cancelBtn->setText(QApplication::translate("TransferPatientWindow", "Cancel", 0));
        transferLbl->setText(QApplication::translate("TransferPatientWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:600; color:#4b0082;\">Transfer patients to: </span></p></body></html>", 0));
        titleLbl->setText(QApplication::translate("TransferPatientWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#4b0082;\">Transfer Patients to Another Doctor</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class TransferPatientWindow: public Ui_TransferPatientWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSFERPATIENTWINDOW_H
