/********************************************************************************
** Form generated from reading UI file 'PatientWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENTWINDOW_H
#define UI_PATIENTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PatientWindow
{
public:
    QLabel *titleLbl;
    QTableView *examinationsTable;
    QPushButton *logOutBtn;
    QPushButton *viewExamBtn;
    QCommandLinkButton *commandEditPersonalInfo;

    void setupUi(QWidget *PatientWindow)
    {
        if (PatientWindow->objectName().isEmpty())
            PatientWindow->setObjectName(QStringLiteral("PatientWindow"));
        PatientWindow->setWindowModality(Qt::ApplicationModal);
        PatientWindow->resize(786, 510);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        PatientWindow->setFont(font);
        PatientWindow->setCursor(QCursor(Qt::ArrowCursor));
        PatientWindow->setWindowOpacity(1);
        titleLbl = new QLabel(PatientWindow);
        titleLbl->setObjectName(QStringLiteral("titleLbl"));
        titleLbl->setGeometry(QRect(10, 10, 771, 41));
        titleLbl->setAlignment(Qt::AlignCenter);
        examinationsTable = new QTableView(PatientWindow);
        examinationsTable->setObjectName(QStringLiteral("examinationsTable"));
        examinationsTable->setGeometry(QRect(20, 80, 581, 351));
        examinationsTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        examinationsTable->setDragDropOverwriteMode(false);
        examinationsTable->setAlternatingRowColors(true);
        examinationsTable->setSelectionBehavior(QAbstractItemView::SelectColumns);
        logOutBtn = new QPushButton(PatientWindow);
        logOutBtn->setObjectName(QStringLiteral("logOutBtn"));
        logOutBtn->setGeometry(QRect(640, 450, 100, 30));
        viewExamBtn = new QPushButton(PatientWindow);
        viewExamBtn->setObjectName(QStringLiteral("viewExamBtn"));
        viewExamBtn->setGeometry(QRect(640, 120, 100, 30));
        viewExamBtn->setFont(font);
        commandEditPersonalInfo = new QCommandLinkButton(PatientWindow);
        commandEditPersonalInfo->setObjectName(QStringLiteral("commandEditPersonalInfo"));
        commandEditPersonalInfo->setGeometry(QRect(600, 0, 185, 41));

        retranslateUi(PatientWindow);

        QMetaObject::connectSlotsByName(PatientWindow);
    } // setupUi

    void retranslateUi(QWidget *PatientWindow)
    {
        PatientWindow->setWindowTitle(QApplication::translate("PatientWindow", "MCA Patient", 0));
        titleLbl->setText(QApplication::translate("PatientWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600; color:#4b0082;\">Hello!</span></p></body></html>", 0));
        logOutBtn->setText(QApplication::translate("PatientWindow", "Log Out", 0));
        viewExamBtn->setText(QApplication::translate("PatientWindow", "View", 0));
        commandEditPersonalInfo->setText(QApplication::translate("PatientWindow", "Edit Pesonal Info", 0));
    } // retranslateUi

};

namespace Ui {
    class PatientWindow: public Ui_PatientWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTWINDOW_H
