/********************************************************************************
** Form generated from reading UI file 'DoctorWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCTORWINDOW_H
#define UI_DOCTORWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DoctorWindow
{
public:
    QAction *actionEdit_Personal_Info;
    QWidget *centralwidget;
    QTableWidget *patientsTable;
    QLabel *titleLbl;
    QPushButton *LogOut;
    QPushButton *addPatientBtn;
    QPushButton *viewPatientBtn;
    QPushButton *editPatientBtn;
    QPushButton *deletePatientbtn;
    QCommandLinkButton *commandEditPersonalInfo;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DoctorWindow)
    {
        if (DoctorWindow->objectName().isEmpty())
            DoctorWindow->setObjectName(QStringLiteral("DoctorWindow"));
        DoctorWindow->setWindowModality(Qt::ApplicationModal);
        DoctorWindow->resize(797, 600);
        actionEdit_Personal_Info = new QAction(DoctorWindow);
        actionEdit_Personal_Info->setObjectName(QStringLiteral("actionEdit_Personal_Info"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        actionEdit_Personal_Info->setFont(font);
        centralwidget = new QWidget(DoctorWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        patientsTable = new QTableWidget(centralwidget);
        patientsTable->setObjectName(QStringLiteral("patientsTable"));
        patientsTable->setGeometry(QRect(30, 90, 519, 399));
        patientsTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        patientsTable->setDragDropOverwriteMode(false);
        patientsTable->setAlternatingRowColors(true);
        patientsTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        titleLbl = new QLabel(centralwidget);
        titleLbl->setObjectName(QStringLiteral("titleLbl"));
        titleLbl->setGeometry(QRect(70, 10, 281, 81));
        QFont font1;
        font1.setPointSize(14);
        titleLbl->setFont(font1);
        titleLbl->setLayoutDirection(Qt::LeftToRight);
        LogOut = new QPushButton(centralwidget);
        LogOut->setObjectName(QStringLiteral("LogOut"));
        LogOut->setGeometry(QRect(640, 520, 100, 30));
        LogOut->setFont(font);
        addPatientBtn = new QPushButton(centralwidget);
        addPatientBtn->setObjectName(QStringLiteral("addPatientBtn"));
        addPatientBtn->setGeometry(QRect(621, 150, 100, 30));
        addPatientBtn->setFont(font);
        viewPatientBtn = new QPushButton(centralwidget);
        viewPatientBtn->setObjectName(QStringLiteral("viewPatientBtn"));
        viewPatientBtn->setGeometry(QRect(621, 194, 100, 30));
        viewPatientBtn->setFont(font);
        editPatientBtn = new QPushButton(centralwidget);
        editPatientBtn->setObjectName(QStringLiteral("editPatientBtn"));
        editPatientBtn->setGeometry(QRect(621, 106, 100, 30));
        editPatientBtn->setFont(font);
        deletePatientbtn = new QPushButton(centralwidget);
        deletePatientbtn->setObjectName(QStringLiteral("deletePatientbtn"));
        deletePatientbtn->setGeometry(QRect(621, 238, 100, 30));
        deletePatientbtn->setFont(font);
        commandEditPersonalInfo = new QCommandLinkButton(centralwidget);
        commandEditPersonalInfo->setObjectName(QStringLiteral("commandEditPersonalInfo"));
        commandEditPersonalInfo->setGeometry(QRect(610, 0, 185, 41));
        DoctorWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DoctorWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 797, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        DoctorWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(DoctorWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        DoctorWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionEdit_Personal_Info);

        retranslateUi(DoctorWindow);
        QObject::connect(actionEdit_Personal_Info, SIGNAL(changed()), DoctorWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(DoctorWindow);
    } // setupUi

    void retranslateUi(QMainWindow *DoctorWindow)
    {
        DoctorWindow->setWindowTitle(QApplication::translate("DoctorWindow", "MCA Doctor", 0));
        actionEdit_Personal_Info->setText(QApplication::translate("DoctorWindow", "Edit Personal Info", 0));
        titleLbl->setText(QApplication::translate("DoctorWindow", "<html><head/><body><p><span style=\" font-weight:600; color:#4b0082;\">Hello </span></p></body></html>", 0));
        LogOut->setText(QApplication::translate("DoctorWindow", "Log Out", 0));
        addPatientBtn->setText(QApplication::translate("DoctorWindow", "Add Patient", 0));
        viewPatientBtn->setText(QApplication::translate("DoctorWindow", "View Patient", 0));
        editPatientBtn->setText(QApplication::translate("DoctorWindow", "Edit Patient", 0));
        deletePatientbtn->setText(QApplication::translate("DoctorWindow", "Delete Patient", 0));
        commandEditPersonalInfo->setText(QApplication::translate("DoctorWindow", "Edit Pesonal Info", 0));
        menuFile->setTitle(QApplication::translate("DoctorWindow", "File", 0));
    } // retranslateUi

};

namespace Ui {
    class DoctorWindow: public Ui_DoctorWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCTORWINDOW_H
