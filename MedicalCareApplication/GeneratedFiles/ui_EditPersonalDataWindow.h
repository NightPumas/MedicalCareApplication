/********************************************************************************
** Form generated from reading UI file 'EditPersonalDataWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPERSONALDATAWINDOW_H
#define UI_EDITPERSONALDATAWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditPersonalDataWindow
{
public:
    QLabel *titleLbl;
    QLabel *homeAddressLbl;
    QFrame *line;
    QLineEdit *homeAddressTxtBox;
    QLabel *phoneNumberLbl;
    QLineEdit *phoneNumberTxtBox;
    QLabel *emailAddressLbl;
    QLineEdit *emailAddressTxtBox;
    QPushButton *editBtn;
    QPushButton *cancelBtn;

    void setupUi(QWidget *EditPersonalDataWindow)
    {
        if (EditPersonalDataWindow->objectName().isEmpty())
            EditPersonalDataWindow->setObjectName(QStringLiteral("EditPersonalDataWindow"));
        EditPersonalDataWindow->setWindowModality(Qt::ApplicationModal);
        EditPersonalDataWindow->resize(391, 419);
        titleLbl = new QLabel(EditPersonalDataWindow);
        titleLbl->setObjectName(QStringLiteral("titleLbl"));
        titleLbl->setGeometry(QRect(10, 10, 381, 71));
        QFont font;
        font.setPointSize(14);
        titleLbl->setFont(font);
        titleLbl->setAlignment(Qt::AlignCenter);
        homeAddressLbl = new QLabel(EditPersonalDataWindow);
        homeAddressLbl->setObjectName(QStringLiteral("homeAddressLbl"));
        homeAddressLbl->setGeometry(QRect(30, 120, 111, 21));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        homeAddressLbl->setFont(font1);
        line = new QFrame(EditPersonalDataWindow);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 90, 371, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        homeAddressTxtBox = new QLineEdit(EditPersonalDataWindow);
        homeAddressTxtBox->setObjectName(QStringLiteral("homeAddressTxtBox"));
        homeAddressTxtBox->setGeometry(QRect(150, 120, 180, 23));
        homeAddressTxtBox->setMaxLength(100);
        phoneNumberLbl = new QLabel(EditPersonalDataWindow);
        phoneNumberLbl->setObjectName(QStringLiteral("phoneNumberLbl"));
        phoneNumberLbl->setGeometry(QRect(30, 190, 101, 16));
        phoneNumberLbl->setFont(font1);
        phoneNumberTxtBox = new QLineEdit(EditPersonalDataWindow);
        phoneNumberTxtBox->setObjectName(QStringLiteral("phoneNumberTxtBox"));
        phoneNumberTxtBox->setGeometry(QRect(150, 190, 180, 23));
        emailAddressLbl = new QLabel(EditPersonalDataWindow);
        emailAddressLbl->setObjectName(QStringLiteral("emailAddressLbl"));
        emailAddressLbl->setGeometry(QRect(30, 260, 101, 21));
        emailAddressTxtBox = new QLineEdit(EditPersonalDataWindow);
        emailAddressTxtBox->setObjectName(QStringLiteral("emailAddressTxtBox"));
        emailAddressTxtBox->setGeometry(QRect(150, 260, 180, 23));
        emailAddressTxtBox->setMaxLength(40);
        editBtn = new QPushButton(EditPersonalDataWindow);
        editBtn->setObjectName(QStringLiteral("editBtn"));
        editBtn->setGeometry(QRect(60, 350, 100, 30));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        editBtn->setFont(font2);
        cancelBtn = new QPushButton(EditPersonalDataWindow);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        cancelBtn->setGeometry(QRect(200, 350, 100, 30));
        cancelBtn->setFont(font2);

        retranslateUi(EditPersonalDataWindow);

        QMetaObject::connectSlotsByName(EditPersonalDataWindow);
    } // setupUi

    void retranslateUi(QWidget *EditPersonalDataWindow)
    {
        EditPersonalDataWindow->setWindowTitle(QApplication::translate("EditPersonalDataWindow", "Edit", 0));
        titleLbl->setText(QApplication::translate("EditPersonalDataWindow", "<html><head/><body><p><span style=\" font-weight:600; color:#4b0082;\">Edit My Personal </span></p><p><span style=\" font-weight:600; color:#4b0082;\">Information</span></p></body></html>", 0));
        homeAddressLbl->setText(QApplication::translate("EditPersonalDataWindow", "<html><head/><body><p><span style=\" color:#4b0082;\">Home Address:</span></p></body></html>", 0));
        phoneNumberLbl->setText(QApplication::translate("EditPersonalDataWindow", "<html><head/><body><p><span style=\" color:#4b0082;\">Phone Number:</span></p></body></html>", 0));
        phoneNumberTxtBox->setInputMask(QApplication::translate("EditPersonalDataWindow", "+00 000 000 000", 0));
        emailAddressLbl->setText(QApplication::translate("EditPersonalDataWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600; color:#4b0082;\">Email Address:</span></p></body></html>", 0));
        editBtn->setText(QApplication::translate("EditPersonalDataWindow", "Edit", 0));
        cancelBtn->setText(QApplication::translate("EditPersonalDataWindow", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class EditPersonalDataWindow: public Ui_EditPersonalDataWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPERSONALDATAWINDOW_H
