/********************************************************************************
** Form generated from reading UI file 'AdminWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINWINDOW_H
#define UI_ADMINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminWindow
{
public:
    QAction *actionTest_2;
    QAction *actionTest_3;
    QWidget *centralwidget;
    QLabel *addressUpdateLbl;
    QLabel *emailUpdateLbl;
    QLineEdit *phoneUpdateTxtBox;
    QPushButton *addDoctorBtn;
    QLineEdit *firstNameUpdateTxtBox;
    QLineEdit *addressUpdateTxtBox;
    QPushButton *updateBtn;
    QLineEdit *lastNameUpdateTxtBox;
    QLabel *title;
    QLabel *firstNameUpdateLbl;
    QTableWidget *table;
    QPushButton *deleteDoctorBtn;
    QLineEdit *emailUpdateTxtBox;
    QLabel *lastNameUpdateLbl;
    QLabel *phoneUpdateLbl;
    QPushButton *logOutBtn;
    QMenuBar *menubar;
    QMenu *menuTest;
    QMenu *menuTest_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AdminWindow)
    {
        if (AdminWindow->objectName().isEmpty())
            AdminWindow->setObjectName(QStringLiteral("AdminWindow"));
        AdminWindow->setWindowModality(Qt::ApplicationModal);
        AdminWindow->resize(896, 675);
        actionTest_2 = new QAction(AdminWindow);
        actionTest_2->setObjectName(QStringLiteral("actionTest_2"));
        actionTest_3 = new QAction(AdminWindow);
        actionTest_3->setObjectName(QStringLiteral("actionTest_3"));
        centralwidget = new QWidget(AdminWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        addressUpdateLbl = new QLabel(centralwidget);
        addressUpdateLbl->setObjectName(QStringLiteral("addressUpdateLbl"));
        addressUpdateLbl->setGeometry(QRect(710, 270, 100, 30));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        addressUpdateLbl->setFont(font);
        emailUpdateLbl = new QLabel(centralwidget);
        emailUpdateLbl->setObjectName(QStringLiteral("emailUpdateLbl"));
        emailUpdateLbl->setGeometry(QRect(710, 450, 100, 30));
        emailUpdateLbl->setFont(font);
        phoneUpdateTxtBox = new QLineEdit(centralwidget);
        phoneUpdateTxtBox->setObjectName(QStringLiteral("phoneUpdateTxtBox"));
        phoneUpdateTxtBox->setGeometry(QRect(710, 395, 150, 30));
        QFont font1;
        font1.setFamily(QStringLiteral("Times New Roman"));
        font1.setPointSize(10);
        phoneUpdateTxtBox->setFont(font1);
        phoneUpdateTxtBox->setFocusPolicy(Qt::ClickFocus);
        phoneUpdateTxtBox->setMaxLength(15);
        phoneUpdateTxtBox->setAlignment(Qt::AlignCenter);
        addDoctorBtn = new QPushButton(centralwidget);
        addDoctorBtn->setObjectName(QStringLiteral("addDoctorBtn"));
        addDoctorBtn->setGeometry(QRect(80, 570, 100, 30));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        addDoctorBtn->setFont(font2);
        firstNameUpdateTxtBox = new QLineEdit(centralwidget);
        firstNameUpdateTxtBox->setObjectName(QStringLiteral("firstNameUpdateTxtBox"));
        firstNameUpdateTxtBox->setGeometry(QRect(710, 125, 150, 30));
        firstNameUpdateTxtBox->setFont(font1);
        firstNameUpdateTxtBox->setFocusPolicy(Qt::ClickFocus);
        firstNameUpdateTxtBox->setMaxLength(25);
        firstNameUpdateTxtBox->setFrame(true);
        firstNameUpdateTxtBox->setAlignment(Qt::AlignCenter);
        firstNameUpdateTxtBox->setClearButtonEnabled(false);
        addressUpdateTxtBox = new QLineEdit(centralwidget);
        addressUpdateTxtBox->setObjectName(QStringLiteral("addressUpdateTxtBox"));
        addressUpdateTxtBox->setGeometry(QRect(710, 305, 150, 30));
        addressUpdateTxtBox->setFont(font1);
        addressUpdateTxtBox->setFocusPolicy(Qt::ClickFocus);
        addressUpdateTxtBox->setMaxLength(100);
        addressUpdateTxtBox->setCursorPosition(0);
        addressUpdateTxtBox->setAlignment(Qt::AlignCenter);
        updateBtn = new QPushButton(centralwidget);
        updateBtn->setObjectName(QStringLiteral("updateBtn"));
        updateBtn->setGeometry(QRect(650, 570, 100, 30));
        updateBtn->setFont(font2);
        lastNameUpdateTxtBox = new QLineEdit(centralwidget);
        lastNameUpdateTxtBox->setObjectName(QStringLiteral("lastNameUpdateTxtBox"));
        lastNameUpdateTxtBox->setGeometry(QRect(710, 215, 150, 30));
        lastNameUpdateTxtBox->setFont(font1);
        lastNameUpdateTxtBox->setFocusPolicy(Qt::ClickFocus);
        lastNameUpdateTxtBox->setMaxLength(25);
        lastNameUpdateTxtBox->setAlignment(Qt::AlignCenter);
        title = new QLabel(centralwidget);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(200, 50, 141, 30));
        QFont font3;
        font3.setFamily(QStringLiteral("Times New Roman"));
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setWeight(75);
        title->setFont(font3);
        firstNameUpdateLbl = new QLabel(centralwidget);
        firstNameUpdateLbl->setObjectName(QStringLiteral("firstNameUpdateLbl"));
        firstNameUpdateLbl->setGeometry(QRect(710, 90, 100, 30));
        firstNameUpdateLbl->setFont(font);
        table = new QTableWidget(centralwidget);
        table->setObjectName(QStringLiteral("table"));
        table->setEnabled(true);
        table->setGeometry(QRect(50, 100, 621, 450));
        table->setMinimumSize(QSize(550, 450));
        table->setFont(font);
        table->setFrameShape(QFrame::Box);
        table->setFrameShadow(QFrame::Sunken);
        table->setLineWidth(1);
        table->setMidLineWidth(1);
        table->setEditTriggers(QAbstractItemView::NoEditTriggers);
        table->setDragDropOverwriteMode(false);
        table->setAlternatingRowColors(true);
        table->setSelectionBehavior(QAbstractItemView::SelectRows);
        table->setGridStyle(Qt::SolidLine);
        table->setSortingEnabled(true);
        deleteDoctorBtn = new QPushButton(centralwidget);
        deleteDoctorBtn->setObjectName(QStringLiteral("deleteDoctorBtn"));
        deleteDoctorBtn->setGeometry(QRect(210, 570, 100, 30));
        deleteDoctorBtn->setFont(font2);
        emailUpdateTxtBox = new QLineEdit(centralwidget);
        emailUpdateTxtBox->setObjectName(QStringLiteral("emailUpdateTxtBox"));
        emailUpdateTxtBox->setGeometry(QRect(710, 485, 150, 30));
        emailUpdateTxtBox->setFont(font1);
        emailUpdateTxtBox->setFocusPolicy(Qt::ClickFocus);
        emailUpdateTxtBox->setInputMethodHints(Qt::ImhEmailCharactersOnly);
        emailUpdateTxtBox->setMaxLength(40);
        emailUpdateTxtBox->setAlignment(Qt::AlignCenter);
        lastNameUpdateLbl = new QLabel(centralwidget);
        lastNameUpdateLbl->setObjectName(QStringLiteral("lastNameUpdateLbl"));
        lastNameUpdateLbl->setGeometry(QRect(710, 180, 100, 30));
        lastNameUpdateLbl->setFont(font);
        phoneUpdateLbl = new QLabel(centralwidget);
        phoneUpdateLbl->setObjectName(QStringLiteral("phoneUpdateLbl"));
        phoneUpdateLbl->setGeometry(QRect(710, 360, 100, 30));
        phoneUpdateLbl->setFont(font);
        logOutBtn = new QPushButton(centralwidget);
        logOutBtn->setObjectName(QStringLiteral("logOutBtn"));
        logOutBtn->setGeometry(QRect(340, 570, 100, 30));
        logOutBtn->setFont(font2);
        AdminWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AdminWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 896, 21));
        menuTest = new QMenu(menubar);
        menuTest->setObjectName(QStringLiteral("menuTest"));
        menuTest_2 = new QMenu(menuTest);
        menuTest_2->setObjectName(QStringLiteral("menuTest_2"));
        AdminWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(AdminWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        AdminWindow->setStatusBar(statusbar);

        menubar->addAction(menuTest->menuAction());
        menuTest->addAction(menuTest_2->menuAction());
        menuTest_2->addAction(actionTest_2);
        menuTest_2->addAction(actionTest_3);

        retranslateUi(AdminWindow);

        QMetaObject::connectSlotsByName(AdminWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AdminWindow)
    {
        AdminWindow->setWindowTitle(QApplication::translate("AdminWindow", "MCA Admin", 0));
        actionTest_2->setText(QApplication::translate("AdminWindow", "Test", 0));
        actionTest_3->setText(QApplication::translate("AdminWindow", "Test", 0));
        addressUpdateLbl->setText(QApplication::translate("AdminWindow", "<html><head/><body><p><span style=\" color:#4b0082;\">Address: </span></p></body></html>", 0));
        emailUpdateLbl->setText(QApplication::translate("AdminWindow", "<html><head/><body><p><span style=\" color:#4b0082;\">Email Address: </span></p></body></html>", 0));
        phoneUpdateTxtBox->setInputMask(QApplication::translate("AdminWindow", "+00 000 000 000", 0));
        phoneUpdateTxtBox->setText(QApplication::translate("AdminWindow", "+   ", 0));
        phoneUpdateTxtBox->setPlaceholderText(QApplication::translate("AdminWindow", "Phone", 0));
        addDoctorBtn->setText(QApplication::translate("AdminWindow", "Add Doctor", 0));
        firstNameUpdateTxtBox->setText(QString());
        firstNameUpdateTxtBox->setPlaceholderText(QApplication::translate("AdminWindow", "First Name", 0));
        addressUpdateTxtBox->setInputMask(QString());
        addressUpdateTxtBox->setText(QString());
        addressUpdateTxtBox->setPlaceholderText(QApplication::translate("AdminWindow", "Address", 0));
        updateBtn->setText(QApplication::translate("AdminWindow", "Update Doctor", 0));
        lastNameUpdateTxtBox->setText(QString());
        lastNameUpdateTxtBox->setPlaceholderText(QApplication::translate("AdminWindow", "Last Name", 0));
        title->setText(QApplication::translate("AdminWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#4b0082;\">Hello, Admin!</span></p></body></html>", 0));
        firstNameUpdateLbl->setText(QApplication::translate("AdminWindow", "<html><head/><body><p><span style=\" color:#4b0082;\">First Name:  </span></p></body></html>", 0));
        deleteDoctorBtn->setText(QApplication::translate("AdminWindow", "Delete Doctor", 0));
        emailUpdateTxtBox->setInputMask(QString());
        emailUpdateTxtBox->setText(QString());
        emailUpdateTxtBox->setPlaceholderText(QApplication::translate("AdminWindow", "Email Adress", 0));
        lastNameUpdateLbl->setText(QApplication::translate("AdminWindow", "<html><head/><body><p><span style=\" color:#4b0082;\">Last Name:  </span></p></body></html>", 0));
        phoneUpdateLbl->setText(QApplication::translate("AdminWindow", "<html><head/><body><p><span style=\" color:#4b0082;\">Phone:  </span></p></body></html>", 0));
        logOutBtn->setText(QApplication::translate("AdminWindow", "Log Out", 0));
        menuTest->setTitle(QApplication::translate("AdminWindow", "Test", 0));
        menuTest_2->setTitle(QApplication::translate("AdminWindow", "Test", 0));
    } // retranslateUi

};

namespace Ui {
    class AdminWindow: public Ui_AdminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
