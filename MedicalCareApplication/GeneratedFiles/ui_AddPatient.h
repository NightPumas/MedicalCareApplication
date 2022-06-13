/********************************************************************************
** Form generated from reading UI file 'AddPatient.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPATIENT_H
#define UI_ADDPATIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddPatient
{
public:
    QLabel *Title;
    QLabel *firstNameLbl;
    QLabel *lastNameLbl;
    QLabel *cnpLbl;
    QLabel *genderLbl;
    QLabel *dateOfBirthLbl;
    QLabel *homeAddressLbl;
    QLabel *phoneLbl;
    QLabel *emailAddressLbl;
    QLabel *bloodTypeLbl;
    QLabel *rhLbl;
    QLineEdit *firstNameTxtBox;
    QLineEdit *lastNameTxtBox;
    QLineEdit *cnpTxtBox;
    QComboBox *gender;
    QDateEdit *BirthDate;
    QLineEdit *addressTxtBox;
    QLineEdit *phoneTxtBox;
    QLineEdit *emailTxtBox;
    QComboBox *bloodType;
    QComboBox *RH;
    QPushButton *addBtn;
    QPushButton *cancelBtn;
    QGroupBox *AccountGroup;
    QLabel *usernameLbl;
    QLabel *passwordLbl;
    QLineEdit *usernameTxtBox;
    QLineEdit *passwordTxtBox;
    QLabel *CreateAccountLbl;
    QCheckBox *AccountCheckBoxYes;
    QCheckBox *AccountCheckBoxNo;
    QButtonGroup *YesNoGroup;

    void setupUi(QWidget *AddPatient)
    {
        if (AddPatient->objectName().isEmpty())
            AddPatient->setObjectName(QStringLiteral("AddPatient"));
        AddPatient->setWindowModality(Qt::ApplicationModal);
        AddPatient->resize(345, 664);
        AddPatient->setMinimumSize(QSize(345, 664));
        AddPatient->setMaximumSize(QSize(345, 664));
        AddPatient->setLayoutDirection(Qt::RightToLeft);
        Title = new QLabel(AddPatient);
        Title->setObjectName(QStringLiteral("Title"));
        Title->setGeometry(QRect(0, 20, 341, 41));
        QFont font;
        font.setPointSize(14);
        Title->setFont(font);
        firstNameLbl = new QLabel(AddPatient);
        firstNameLbl->setObjectName(QStringLiteral("firstNameLbl"));
        firstNameLbl->setGeometry(QRect(50, 100, 71, 16));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        firstNameLbl->setFont(font1);
        lastNameLbl = new QLabel(AddPatient);
        lastNameLbl->setObjectName(QStringLiteral("lastNameLbl"));
        lastNameLbl->setGeometry(QRect(50, 140, 71, 16));
        QFont font2;
        font2.setPointSize(10);
        lastNameLbl->setFont(font2);
        cnpLbl = new QLabel(AddPatient);
        cnpLbl->setObjectName(QStringLiteral("cnpLbl"));
        cnpLbl->setGeometry(QRect(50, 180, 71, 16));
        cnpLbl->setFont(font2);
        genderLbl = new QLabel(AddPatient);
        genderLbl->setObjectName(QStringLiteral("genderLbl"));
        genderLbl->setGeometry(QRect(50, 220, 71, 16));
        genderLbl->setFont(font2);
        dateOfBirthLbl = new QLabel(AddPatient);
        dateOfBirthLbl->setObjectName(QStringLiteral("dateOfBirthLbl"));
        dateOfBirthLbl->setGeometry(QRect(50, 260, 91, 16));
        dateOfBirthLbl->setFont(font2);
        homeAddressLbl = new QLabel(AddPatient);
        homeAddressLbl->setObjectName(QStringLiteral("homeAddressLbl"));
        homeAddressLbl->setGeometry(QRect(50, 300, 101, 16));
        homeAddressLbl->setFont(font2);
        phoneLbl = new QLabel(AddPatient);
        phoneLbl->setObjectName(QStringLiteral("phoneLbl"));
        phoneLbl->setGeometry(QRect(50, 340, 71, 16));
        phoneLbl->setFont(font2);
        emailAddressLbl = new QLabel(AddPatient);
        emailAddressLbl->setObjectName(QStringLiteral("emailAddressLbl"));
        emailAddressLbl->setGeometry(QRect(50, 380, 101, 16));
        emailAddressLbl->setFont(font2);
        bloodTypeLbl = new QLabel(AddPatient);
        bloodTypeLbl->setObjectName(QStringLiteral("bloodTypeLbl"));
        bloodTypeLbl->setGeometry(QRect(50, 420, 81, 16));
        bloodTypeLbl->setFont(font2);
        rhLbl = new QLabel(AddPatient);
        rhLbl->setObjectName(QStringLiteral("rhLbl"));
        rhLbl->setGeometry(QRect(50, 460, 71, 16));
        rhLbl->setFont(font2);
        firstNameTxtBox = new QLineEdit(AddPatient);
        firstNameTxtBox->setObjectName(QStringLiteral("firstNameTxtBox"));
        firstNameTxtBox->setGeometry(QRect(170, 100, 113, 20));
        firstNameTxtBox->setLayoutDirection(Qt::LeftToRight);
        firstNameTxtBox->setMaxLength(25);
        firstNameTxtBox->setAlignment(Qt::AlignCenter);
        lastNameTxtBox = new QLineEdit(AddPatient);
        lastNameTxtBox->setObjectName(QStringLiteral("lastNameTxtBox"));
        lastNameTxtBox->setGeometry(QRect(170, 140, 113, 20));
        lastNameTxtBox->setLayoutDirection(Qt::LeftToRight);
        lastNameTxtBox->setMaxLength(25);
        lastNameTxtBox->setAlignment(Qt::AlignCenter);
        cnpTxtBox = new QLineEdit(AddPatient);
        cnpTxtBox->setObjectName(QStringLiteral("cnpTxtBox"));
        cnpTxtBox->setGeometry(QRect(170, 180, 113, 20));
        cnpTxtBox->setLayoutDirection(Qt::LeftToRight);
        cnpTxtBox->setAlignment(Qt::AlignCenter);
        gender = new QComboBox(AddPatient);
        gender->setObjectName(QStringLiteral("gender"));
        gender->setGeometry(QRect(170, 220, 69, 20));
        gender->setLayoutDirection(Qt::LeftToRight);
        BirthDate = new QDateEdit(AddPatient);
        BirthDate->setObjectName(QStringLiteral("BirthDate"));
        BirthDate->setGeometry(QRect(170, 260, 110, 22));
        BirthDate->setLayoutDirection(Qt::LeftToRight);
        BirthDate->setCalendarPopup(true);
        addressTxtBox = new QLineEdit(AddPatient);
        addressTxtBox->setObjectName(QStringLiteral("addressTxtBox"));
        addressTxtBox->setGeometry(QRect(170, 300, 113, 20));
        addressTxtBox->setLayoutDirection(Qt::LeftToRight);
        addressTxtBox->setMaxLength(100);
        addressTxtBox->setAlignment(Qt::AlignCenter);
        phoneTxtBox = new QLineEdit(AddPatient);
        phoneTxtBox->setObjectName(QStringLiteral("phoneTxtBox"));
        phoneTxtBox->setGeometry(QRect(170, 340, 113, 20));
        phoneTxtBox->setLayoutDirection(Qt::LeftToRight);
        emailTxtBox = new QLineEdit(AddPatient);
        emailTxtBox->setObjectName(QStringLiteral("emailTxtBox"));
        emailTxtBox->setGeometry(QRect(170, 380, 113, 20));
        emailTxtBox->setLayoutDirection(Qt::LeftToRight);
        emailTxtBox->setMaxLength(40);
        emailTxtBox->setAlignment(Qt::AlignCenter);
        bloodType = new QComboBox(AddPatient);
        bloodType->setObjectName(QStringLiteral("bloodType"));
        bloodType->setGeometry(QRect(170, 420, 69, 22));
        bloodType->setLayoutDirection(Qt::LeftToRight);
        RH = new QComboBox(AddPatient);
        RH->setObjectName(QStringLiteral("RH"));
        RH->setGeometry(QRect(170, 460, 69, 22));
        RH->setLayoutDirection(Qt::LeftToRight);
        addBtn = new QPushButton(AddPatient);
        addBtn->setObjectName(QStringLiteral("addBtn"));
        addBtn->setGeometry(QRect(50, 600, 100, 30));
        QFont font3;
        font3.setFamily(QStringLiteral("Times New Roman"));
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        addBtn->setFont(font3);
        cancelBtn = new QPushButton(AddPatient);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        cancelBtn->setGeometry(QRect(190, 600, 100, 30));
        cancelBtn->setFont(font3);
        AccountGroup = new QGroupBox(AddPatient);
        AccountGroup->setObjectName(QStringLiteral("AccountGroup"));
        AccountGroup->setEnabled(true);
        AccountGroup->setGeometry(QRect(40, 520, 281, 81));
        AccountGroup->setFlat(false);
        usernameLbl = new QLabel(AccountGroup);
        usernameLbl->setObjectName(QStringLiteral("usernameLbl"));
        usernameLbl->setGeometry(QRect(10, 10, 71, 16));
        usernameLbl->setFont(font2);
        passwordLbl = new QLabel(AccountGroup);
        passwordLbl->setObjectName(QStringLiteral("passwordLbl"));
        passwordLbl->setGeometry(QRect(10, 40, 71, 16));
        passwordLbl->setFont(font2);
        usernameTxtBox = new QLineEdit(AccountGroup);
        usernameTxtBox->setObjectName(QStringLiteral("usernameTxtBox"));
        usernameTxtBox->setGeometry(QRect(130, 10, 113, 20));
        usernameTxtBox->setLayoutDirection(Qt::LeftToRight);
        usernameTxtBox->setMaxLength(15);
        usernameTxtBox->setAlignment(Qt::AlignCenter);
        passwordTxtBox = new QLineEdit(AccountGroup);
        passwordTxtBox->setObjectName(QStringLiteral("passwordTxtBox"));
        passwordTxtBox->setGeometry(QRect(130, 40, 113, 20));
        passwordTxtBox->setLayoutDirection(Qt::LeftToRight);
        passwordTxtBox->setMaxLength(40);
        passwordTxtBox->setEchoMode(QLineEdit::Password);
        passwordTxtBox->setAlignment(Qt::AlignCenter);
        CreateAccountLbl = new QLabel(AddPatient);
        CreateAccountLbl->setObjectName(QStringLiteral("CreateAccountLbl"));
        CreateAccountLbl->setGeometry(QRect(50, 490, 111, 16));
        CreateAccountLbl->setFont(font2);
        AccountCheckBoxYes = new QCheckBox(AddPatient);
        YesNoGroup = new QButtonGroup(AddPatient);
        YesNoGroup->setObjectName(QStringLiteral("YesNoGroup"));
        YesNoGroup->addButton(AccountCheckBoxYes);
        AccountCheckBoxYes->setObjectName(QStringLiteral("AccountCheckBoxYes"));
        AccountCheckBoxYes->setGeometry(QRect(160, 490, 41, 20));
        AccountCheckBoxYes->setLayoutDirection(Qt::RightToLeft);
        AccountCheckBoxNo = new QCheckBox(AddPatient);
        YesNoGroup->addButton(AccountCheckBoxNo);
        AccountCheckBoxNo->setObjectName(QStringLiteral("AccountCheckBoxNo"));
        AccountCheckBoxNo->setEnabled(true);
        AccountCheckBoxNo->setGeometry(QRect(210, 490, 41, 20));
        AccountCheckBoxNo->setLayoutDirection(Qt::RightToLeft);
        AccountCheckBoxNo->setChecked(true);

        retranslateUi(AddPatient);
        QObject::connect(AccountCheckBoxYes, SIGNAL(stateChanged(int)), AccountGroup, SLOT(show()));
        QObject::connect(AccountCheckBoxNo, SIGNAL(stateChanged(int)), AccountGroup, SLOT(hide()));

        QMetaObject::connectSlotsByName(AddPatient);
    } // setupUi

    void retranslateUi(QWidget *AddPatient)
    {
        AddPatient->setWindowTitle(QApplication::translate("AddPatient", "Add Patient", 0));
        Title->setText(QApplication::translate("AddPatient", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600; color:#4b0082;\">Add Patient</span></p></body></html>", 0));
        firstNameLbl->setText(QApplication::translate("AddPatient", "<html><head/><body><p><span style=\" color:#4b0082;\">First Name:</span></p></body></html>", 0));
        lastNameLbl->setText(QApplication::translate("AddPatient", "<html><head/><body><p><span style=\" font-weight:600; color:#4b0082;\">Last Name:</span></p></body></html>", 0));
        cnpLbl->setText(QApplication::translate("AddPatient", "<html><head/><body><p><span style=\" font-weight:600; color:#4b0082;\">CNP:</span></p></body></html>", 0));
        genderLbl->setText(QApplication::translate("AddPatient", "<html><head/><body><p><span style=\" font-weight:600; color:#4b0082;\">Gender:</span></p></body></html>", 0));
        dateOfBirthLbl->setText(QApplication::translate("AddPatient", "<html><head/><body><p><span style=\" font-weight:600; color:#4b0082;\">Date of Birth:</span></p></body></html>", 0));
        homeAddressLbl->setText(QApplication::translate("AddPatient", "<html><head/><body><p><span style=\" font-weight:600; color:#4b0082;\">Home Address:</span></p></body></html>", 0));
        phoneLbl->setText(QApplication::translate("AddPatient", "<html><head/><body><p><span style=\" font-weight:600; color:#4b0082;\">Phone:</span></p></body></html>", 0));
        emailAddressLbl->setText(QApplication::translate("AddPatient", "<html><head/><body><p><span style=\" font-weight:600; color:#4b0082;\">Email Address:</span></p></body></html>", 0));
        bloodTypeLbl->setText(QApplication::translate("AddPatient", "<html><head/><body><p><span style=\" font-weight:600; color:#4b0082;\">Blood Type:</span></p></body></html>", 0));
        rhLbl->setText(QApplication::translate("AddPatient", "<html><head/><body><p><span style=\" font-weight:600; color:#4b0082;\">RH:</span></p></body></html>", 0));
        firstNameTxtBox->setPlaceholderText(QApplication::translate("AddPatient", "First Name", 0));
        lastNameTxtBox->setPlaceholderText(QApplication::translate("AddPatient", "Last Name", 0));
        cnpTxtBox->setInputMask(QApplication::translate("AddPatient", "0000000000000", 0));
        cnpTxtBox->setPlaceholderText(QApplication::translate("AddPatient", "CNP", 0));
        gender->clear();
        gender->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("AddPatient", "M", 0)
         << QApplication::translate("AddPatient", "F", 0)
        );
        addressTxtBox->setPlaceholderText(QApplication::translate("AddPatient", "Home Address", 0));
        phoneTxtBox->setInputMask(QApplication::translate("AddPatient", "+00 000 000 000", 0));
        emailTxtBox->setPlaceholderText(QApplication::translate("AddPatient", "Email Address", 0));
        bloodType->clear();
        bloodType->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("AddPatient", "0 I", 0)
         << QApplication::translate("AddPatient", "A II", 0)
         << QApplication::translate("AddPatient", "B III", 0)
         << QApplication::translate("AddPatient", "AB IV", 0)
        );
        RH->clear();
        RH->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("AddPatient", "Positive", 0)
         << QApplication::translate("AddPatient", "Negative", 0)
        );
        addBtn->setText(QApplication::translate("AddPatient", "Add", 0));
        cancelBtn->setText(QApplication::translate("AddPatient", "Cancel", 0));
        AccountGroup->setTitle(QString());
        usernameLbl->setText(QApplication::translate("AddPatient", "<html><head/><body><p><span style=\" font-weight:600; color:#4b0082;\">Username:</span></p></body></html>", 0));
        passwordLbl->setText(QApplication::translate("AddPatient", "<html><head/><body><p><span style=\" font-weight:600; color:#4b0082;\">Password:</span></p></body></html>", 0));
        usernameTxtBox->setPlaceholderText(QApplication::translate("AddPatient", "UserName", 0));
        passwordTxtBox->setPlaceholderText(QApplication::translate("AddPatient", "Password", 0));
        CreateAccountLbl->setText(QApplication::translate("AddPatient", "<html><head/><body><p><span style=\" font-weight:600; color:#4b0082;\">Create Acount?</span></p></body></html>", 0));
        AccountCheckBoxYes->setText(QApplication::translate("AddPatient", "Yes", 0));
        AccountCheckBoxNo->setText(QApplication::translate("AddPatient", "No", 0));
    } // retranslateUi

};

namespace Ui {
    class AddPatient: public Ui_AddPatient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPATIENT_H
