/********************************************************************************
** Form generated from reading UI file 'medicalcareapplication.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEDICALCAREAPPLICATION_H
#define UI_MEDICALCAREAPPLICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MedicalCareApplicationClass
{
public:
    QWidget *centralWidget;
    QPushButton *logInBtn;
    QLabel *logInTitleLbl;
    QLabel *usernameLbl;
    QLineEdit *userTxtBox;
    QLineEdit *passwordTxtBox;
    QLabel *passwordLbl;
    QPushButton *cancelBtn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MedicalCareApplicationClass)
    {
        if (MedicalCareApplicationClass->objectName().isEmpty())
            MedicalCareApplicationClass->setObjectName(QStringLiteral("MedicalCareApplicationClass"));
        MedicalCareApplicationClass->setWindowModality(Qt::WindowModal);
        MedicalCareApplicationClass->resize(381, 418);
        centralWidget = new QWidget(MedicalCareApplicationClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        logInBtn = new QPushButton(centralWidget);
        logInBtn->setObjectName(QStringLiteral("logInBtn"));
        logInBtn->setGeometry(QRect(60, 240, 100, 30));
        logInBtn->setAutoDefault(false);
        logInBtn->setFlat(false);
        logInTitleLbl = new QLabel(centralWidget);
        logInTitleLbl->setObjectName(QStringLiteral("logInTitleLbl"));
        logInTitleLbl->setGeometry(QRect(90, 35, 220, 40));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        logInTitleLbl->setFont(font);
        usernameLbl = new QLabel(centralWidget);
        usernameLbl->setObjectName(QStringLiteral("usernameLbl"));
        usernameLbl->setGeometry(QRect(70, 120, 100, 20));
        QFont font1;
        font1.setFamily(QStringLiteral("Times New Roman"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        usernameLbl->setFont(font1);
        userTxtBox = new QLineEdit(centralWidget);
        userTxtBox->setObjectName(QStringLiteral("userTxtBox"));
        userTxtBox->setGeometry(QRect(170, 120, 150, 20));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(userTxtBox->sizePolicy().hasHeightForWidth());
        userTxtBox->setSizePolicy(sizePolicy);
        userTxtBox->setFocusPolicy(Qt::StrongFocus);
        userTxtBox->setInputMethodHints(Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData|Qt::ImhUrlCharactersOnly);
        userTxtBox->setMaxLength(15);
        userTxtBox->setAlignment(Qt::AlignCenter);
        userTxtBox->setClearButtonEnabled(true);
        passwordTxtBox = new QLineEdit(centralWidget);
        passwordTxtBox->setObjectName(QStringLiteral("passwordTxtBox"));
        passwordTxtBox->setGeometry(QRect(170, 160, 150, 20));
        passwordTxtBox->setFocusPolicy(Qt::StrongFocus);
        passwordTxtBox->setStyleSheet(QStringLiteral(""));
        passwordTxtBox->setMaxLength(50);
        passwordTxtBox->setEchoMode(QLineEdit::Password);
        passwordTxtBox->setAlignment(Qt::AlignCenter);
        passwordTxtBox->setDragEnabled(false);
        passwordTxtBox->setReadOnly(false);
        passwordTxtBox->setClearButtonEnabled(true);
        passwordLbl = new QLabel(centralWidget);
        passwordLbl->setObjectName(QStringLiteral("passwordLbl"));
        passwordLbl->setGeometry(QRect(70, 160, 100, 20));
        passwordLbl->setFont(font1);
        cancelBtn = new QPushButton(centralWidget);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        cancelBtn->setGeometry(QRect(210, 240, 100, 30));
        MedicalCareApplicationClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MedicalCareApplicationClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 381, 21));
        MedicalCareApplicationClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MedicalCareApplicationClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MedicalCareApplicationClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MedicalCareApplicationClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MedicalCareApplicationClass->setStatusBar(statusBar);
#ifndef QT_NO_SHORTCUT
        usernameLbl->setBuddy(userTxtBox);
        passwordLbl->setBuddy(passwordTxtBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(userTxtBox, passwordTxtBox);
        QWidget::setTabOrder(passwordTxtBox, logInBtn);
        QWidget::setTabOrder(logInBtn, cancelBtn);

        retranslateUi(MedicalCareApplicationClass);

        logInBtn->setDefault(true);


        QMetaObject::connectSlotsByName(MedicalCareApplicationClass);
    } // setupUi

    void retranslateUi(QMainWindow *MedicalCareApplicationClass)
    {
        MedicalCareApplicationClass->setWindowTitle(QApplication::translate("MedicalCareApplicationClass", "MedicalCareApplication", 0));
        logInBtn->setText(QApplication::translate("MedicalCareApplicationClass", "Login", 0));
        logInTitleLbl->setText(QApplication::translate("MedicalCareApplicationClass", "<html><head/><body><p><span style=\" color:#4b0082;\"> Medical Care</span></p></body></html>", 0));
        usernameLbl->setText(QApplication::translate("MedicalCareApplicationClass", "<html><head/><body><p><span style=\" color:#4b0082;\">Username:</span></p></body></html>", 0));
#ifndef QT_NO_TOOLTIP
        userTxtBox->setToolTip(QApplication::translate("MedicalCareApplicationClass", "<html><head/><body><p align=\"center\"><br/></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        userTxtBox->setPlaceholderText(QApplication::translate("MedicalCareApplicationClass", "username", 0));
#ifndef QT_NO_TOOLTIP
        passwordTxtBox->setToolTip(QApplication::translate("MedicalCareApplicationClass", "<html><head/><body><p align=\"center\"><br/></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        passwordTxtBox->setText(QString());
        passwordTxtBox->setPlaceholderText(QApplication::translate("MedicalCareApplicationClass", "password", 0));
        passwordLbl->setText(QApplication::translate("MedicalCareApplicationClass", "<html><head/><body><p><span style=\" color:#4b0082;\">Password: </span></p></body></html>", 0));
        cancelBtn->setText(QApplication::translate("MedicalCareApplicationClass", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class MedicalCareApplicationClass: public Ui_MedicalCareApplicationClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEDICALCAREAPPLICATION_H
