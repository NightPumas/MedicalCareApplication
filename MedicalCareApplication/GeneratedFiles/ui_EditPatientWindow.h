/********************************************************************************
** Form generated from reading UI file 'EditPatientWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPATIENTWINDOW_H
#define UI_EDITPATIENTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditPatientWindow
{
public:
    QLineEdit *emailUpdateTxtBox;
    QLabel *emailUpdateLbl;
    QLabel *addressUpdateLbl;
    QLineEdit *phoneUpdateTxtBox;
    QLineEdit *firstNameUpdateTxtBox;
    QLineEdit *addressUpdateTxtBox;
    QLineEdit *lastNameUpdateTxtBox;
    QLabel *phoneUpdateLbl;
    QLabel *lastNameUpdateLbl;
    QLabel *firstNameUpdateLbl;
    QLabel *label;
    QPushButton *updateBtn;
    QPushButton *cancelBtn;

    void setupUi(QWidget *EditPatientWindow)
    {
        if (EditPatientWindow->objectName().isEmpty())
            EditPatientWindow->setObjectName(QStringLiteral("EditPatientWindow"));
        EditPatientWindow->setWindowModality(Qt::ApplicationModal);
        EditPatientWindow->resize(284, 643);
        emailUpdateTxtBox = new QLineEdit(EditPatientWindow);
        emailUpdateTxtBox->setObjectName(QStringLiteral("emailUpdateTxtBox"));
        emailUpdateTxtBox->setGeometry(QRect(60, 485, 150, 30));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(10);
        emailUpdateTxtBox->setFont(font);
        emailUpdateTxtBox->setFocusPolicy(Qt::ClickFocus);
        emailUpdateTxtBox->setInputMethodHints(Qt::ImhEmailCharactersOnly);
        emailUpdateTxtBox->setMaxLength(40);
        emailUpdateTxtBox->setAlignment(Qt::AlignCenter);
        emailUpdateLbl = new QLabel(EditPatientWindow);
        emailUpdateLbl->setObjectName(QStringLiteral("emailUpdateLbl"));
        emailUpdateLbl->setGeometry(QRect(60, 450, 100, 30));
        QFont font1;
        font1.setFamily(QStringLiteral("Times New Roman"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        emailUpdateLbl->setFont(font1);
        addressUpdateLbl = new QLabel(EditPatientWindow);
        addressUpdateLbl->setObjectName(QStringLiteral("addressUpdateLbl"));
        addressUpdateLbl->setGeometry(QRect(60, 270, 100, 30));
        addressUpdateLbl->setFont(font1);
        phoneUpdateTxtBox = new QLineEdit(EditPatientWindow);
        phoneUpdateTxtBox->setObjectName(QStringLiteral("phoneUpdateTxtBox"));
        phoneUpdateTxtBox->setGeometry(QRect(60, 395, 150, 30));
        phoneUpdateTxtBox->setFont(font);
        phoneUpdateTxtBox->setFocusPolicy(Qt::ClickFocus);
        phoneUpdateTxtBox->setMaxLength(15);
        firstNameUpdateTxtBox = new QLineEdit(EditPatientWindow);
        firstNameUpdateTxtBox->setObjectName(QStringLiteral("firstNameUpdateTxtBox"));
        firstNameUpdateTxtBox->setGeometry(QRect(60, 125, 150, 30));
        firstNameUpdateTxtBox->setFont(font);
        firstNameUpdateTxtBox->setFocusPolicy(Qt::ClickFocus);
        firstNameUpdateTxtBox->setMaxLength(25);
        firstNameUpdateTxtBox->setFrame(true);
        firstNameUpdateTxtBox->setAlignment(Qt::AlignCenter);
        firstNameUpdateTxtBox->setClearButtonEnabled(false);
        addressUpdateTxtBox = new QLineEdit(EditPatientWindow);
        addressUpdateTxtBox->setObjectName(QStringLiteral("addressUpdateTxtBox"));
        addressUpdateTxtBox->setGeometry(QRect(60, 305, 150, 30));
        addressUpdateTxtBox->setFont(font);
        addressUpdateTxtBox->setFocusPolicy(Qt::ClickFocus);
        addressUpdateTxtBox->setMaxLength(100);
        addressUpdateTxtBox->setCursorPosition(0);
        addressUpdateTxtBox->setAlignment(Qt::AlignCenter);
        lastNameUpdateTxtBox = new QLineEdit(EditPatientWindow);
        lastNameUpdateTxtBox->setObjectName(QStringLiteral("lastNameUpdateTxtBox"));
        lastNameUpdateTxtBox->setGeometry(QRect(60, 215, 150, 30));
        lastNameUpdateTxtBox->setFont(font);
        lastNameUpdateTxtBox->setFocusPolicy(Qt::ClickFocus);
        lastNameUpdateTxtBox->setMaxLength(25);
        lastNameUpdateTxtBox->setAlignment(Qt::AlignCenter);
        phoneUpdateLbl = new QLabel(EditPatientWindow);
        phoneUpdateLbl->setObjectName(QStringLiteral("phoneUpdateLbl"));
        phoneUpdateLbl->setGeometry(QRect(60, 360, 100, 30));
        phoneUpdateLbl->setFont(font1);
        lastNameUpdateLbl = new QLabel(EditPatientWindow);
        lastNameUpdateLbl->setObjectName(QStringLiteral("lastNameUpdateLbl"));
        lastNameUpdateLbl->setGeometry(QRect(60, 180, 100, 30));
        lastNameUpdateLbl->setFont(font1);
        firstNameUpdateLbl = new QLabel(EditPatientWindow);
        firstNameUpdateLbl->setObjectName(QStringLiteral("firstNameUpdateLbl"));
        firstNameUpdateLbl->setGeometry(QRect(60, 90, 100, 30));
        firstNameUpdateLbl->setFont(font1);
        label = new QLabel(EditPatientWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(6, 9, 271, 41));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);
        updateBtn = new QPushButton(EditPatientWindow);
        updateBtn->setObjectName(QStringLiteral("updateBtn"));
        updateBtn->setGeometry(QRect(20, 560, 100, 30));
        cancelBtn = new QPushButton(EditPatientWindow);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        cancelBtn->setGeometry(QRect(160, 560, 100, 30));

        retranslateUi(EditPatientWindow);

        QMetaObject::connectSlotsByName(EditPatientWindow);
    } // setupUi

    void retranslateUi(QWidget *EditPatientWindow)
    {
        EditPatientWindow->setWindowTitle(QApplication::translate("EditPatientWindow", "EditPatientWindow", 0));
        emailUpdateTxtBox->setInputMask(QString());
        emailUpdateTxtBox->setText(QString());
        emailUpdateTxtBox->setPlaceholderText(QApplication::translate("EditPatientWindow", "Email Adress", 0));
        emailUpdateLbl->setText(QApplication::translate("EditPatientWindow", "<html><head/><body><p><span style=\" color:#4b0082;\">Email Address: </span></p></body></html>", 0));
        addressUpdateLbl->setText(QApplication::translate("EditPatientWindow", "<html><head/><body><p><span style=\" color:#4b0082;\">Address: </span></p></body></html>", 0));
        phoneUpdateTxtBox->setInputMask(QApplication::translate("EditPatientWindow", "+00 000 000 000", 0));
        phoneUpdateTxtBox->setText(QApplication::translate("EditPatientWindow", "+   ", 0));
        phoneUpdateTxtBox->setPlaceholderText(QApplication::translate("EditPatientWindow", "Phone", 0));
        firstNameUpdateTxtBox->setText(QString());
        firstNameUpdateTxtBox->setPlaceholderText(QApplication::translate("EditPatientWindow", "First Name", 0));
        addressUpdateTxtBox->setInputMask(QString());
        addressUpdateTxtBox->setText(QString());
        addressUpdateTxtBox->setPlaceholderText(QApplication::translate("EditPatientWindow", "Address", 0));
        lastNameUpdateTxtBox->setText(QString());
        lastNameUpdateTxtBox->setPlaceholderText(QApplication::translate("EditPatientWindow", "Last Name", 0));
        phoneUpdateLbl->setText(QApplication::translate("EditPatientWindow", "<html><head/><body><p><span style=\" color:#4b0082;\">Phone:  </span></p></body></html>", 0));
        lastNameUpdateLbl->setText(QApplication::translate("EditPatientWindow", "<html><head/><body><p><span style=\" color:#4b0082;\">Last Name:  </span></p></body></html>", 0));
        firstNameUpdateLbl->setText(QApplication::translate("EditPatientWindow", "<html><head/><body><p><span style=\" color:#4b0082;\">First Name:  </span></p></body></html>", 0));
        label->setText(QApplication::translate("EditPatientWindow", "<html><head/><body><p><span style=\" color:#4b0082;\">Edit Patient</span></p></body></html>", 0));
        updateBtn->setText(QApplication::translate("EditPatientWindow", "Update", 0));
        cancelBtn->setText(QApplication::translate("EditPatientWindow", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class EditPatientWindow: public Ui_EditPatientWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPATIENTWINDOW_H
