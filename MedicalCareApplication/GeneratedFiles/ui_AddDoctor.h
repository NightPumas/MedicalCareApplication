/********************************************************************************
** Form generated from reading UI file 'AddDoctor.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDOCTOR_H
#define UI_ADDDOCTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddDoctor
{
public:
    QLabel *TitleLbl;
    QLineEdit *phoneNumnberTxtBox;
    QLineEdit *passwordTxtBox;
    QComboBox *specialtyComboBox;
    QDateEdit *BirthDate;
    QComboBox *gender;
    QLineEdit *usernameTxtBox;
    QLineEdit *lastNameTxtBox;
    QLineEdit *homeAddressTxtBox;
    QLineEdit *emailAddressTxtBox;
    QLineEdit *cnpTxtBox;
    QLineEdit *firstNameTxtBox;
    QLabel *genderLbl;
    QLabel *firstNameLbl;
    QLabel *lastNameLbl;
    QLabel *userNameLbl;
    QLabel *cnpLbl;
    QLabel *userPasswordLbl;
    QLabel *homeAddressLbl;
    QLabel *dateOfBirthLbl;
    QLabel *phoneNumnberLbl;
    QLabel *specialtyLbl;
    QLabel *emailAddressLbl;
    QPushButton *addBtn;
    QPushButton *cancelBtn;

    void setupUi(QWidget *AddDoctor)
    {
        if (AddDoctor->objectName().isEmpty())
            AddDoctor->setObjectName(QStringLiteral("AddDoctor"));
        AddDoctor->setWindowModality(Qt::ApplicationModal);
        AddDoctor->resize(375, 575);
        TitleLbl = new QLabel(AddDoctor);
        TitleLbl->setObjectName(QStringLiteral("TitleLbl"));
        TitleLbl->setGeometry(QRect(10, 10, 361, 41));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        TitleLbl->setFont(font);
        TitleLbl->setAlignment(Qt::AlignCenter);
        phoneNumnberTxtBox = new QLineEdit(AddDoctor);
        phoneNumnberTxtBox->setObjectName(QStringLiteral("phoneNumnberTxtBox"));
        phoneNumnberTxtBox->setGeometry(QRect(190, 390, 133, 20));
        QFont font1;
        font1.setFamily(QStringLiteral("Times New Roman"));
        font1.setPointSize(10);
        phoneNumnberTxtBox->setFont(font1);
        phoneNumnberTxtBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        passwordTxtBox = new QLineEdit(AddDoctor);
        passwordTxtBox->setObjectName(QStringLiteral("passwordTxtBox"));
        passwordTxtBox->setGeometry(QRect(190, 190, 133, 20));
        passwordTxtBox->setFont(font1);
        passwordTxtBox->setMaxLength(40);
        passwordTxtBox->setEchoMode(QLineEdit::Password);
        passwordTxtBox->setAlignment(Qt::AlignCenter);
        specialtyComboBox = new QComboBox(AddDoctor);
        specialtyComboBox->setObjectName(QStringLiteral("specialtyComboBox"));
        specialtyComboBox->setGeometry(QRect(190, 470, 131, 20));
        QFont font2;
        font2.setPointSize(10);
        specialtyComboBox->setFont(font2);
        specialtyComboBox->setEditable(false);
        BirthDate = new QDateEdit(AddDoctor);
        BirthDate->setObjectName(QStringLiteral("BirthDate"));
        BirthDate->setGeometry(QRect(190, 310, 81, 20));
        BirthDate->setProperty("showGroupSeparator", QVariant(false));
        BirthDate->setCalendarPopup(true);
        BirthDate->setTimeSpec(Qt::LocalTime);
        gender = new QComboBox(AddDoctor);
        gender->setObjectName(QStringLiteral("gender"));
        gender->setGeometry(QRect(190, 270, 69, 20));
        gender->setFont(font1);
        gender->setInsertPolicy(QComboBox::InsertAlphabetically);
        usernameTxtBox = new QLineEdit(AddDoctor);
        usernameTxtBox->setObjectName(QStringLiteral("usernameTxtBox"));
        usernameTxtBox->setGeometry(QRect(190, 150, 133, 20));
        usernameTxtBox->setFont(font1);
        usernameTxtBox->setMaxLength(15);
        usernameTxtBox->setAlignment(Qt::AlignCenter);
        lastNameTxtBox = new QLineEdit(AddDoctor);
        lastNameTxtBox->setObjectName(QStringLiteral("lastNameTxtBox"));
        lastNameTxtBox->setGeometry(QRect(190, 110, 133, 20));
        lastNameTxtBox->setFont(font1);
        lastNameTxtBox->setMaxLength(25);
        lastNameTxtBox->setAlignment(Qt::AlignCenter);
        homeAddressTxtBox = new QLineEdit(AddDoctor);
        homeAddressTxtBox->setObjectName(QStringLiteral("homeAddressTxtBox"));
        homeAddressTxtBox->setGeometry(QRect(190, 350, 133, 20));
        homeAddressTxtBox->setFont(font1);
        homeAddressTxtBox->setMaxLength(100);
        homeAddressTxtBox->setAlignment(Qt::AlignCenter);
        emailAddressTxtBox = new QLineEdit(AddDoctor);
        emailAddressTxtBox->setObjectName(QStringLiteral("emailAddressTxtBox"));
        emailAddressTxtBox->setGeometry(QRect(190, 430, 133, 20));
        emailAddressTxtBox->setFont(font1);
        emailAddressTxtBox->setMaxLength(40);
        emailAddressTxtBox->setAlignment(Qt::AlignCenter);
        cnpTxtBox = new QLineEdit(AddDoctor);
        cnpTxtBox->setObjectName(QStringLiteral("cnpTxtBox"));
        cnpTxtBox->setGeometry(QRect(190, 230, 133, 20));
        cnpTxtBox->setFont(font1);
        cnpTxtBox->setMaxLength(13);
        cnpTxtBox->setAlignment(Qt::AlignCenter);
        firstNameTxtBox = new QLineEdit(AddDoctor);
        firstNameTxtBox->setObjectName(QStringLiteral("firstNameTxtBox"));
        firstNameTxtBox->setGeometry(QRect(190, 70, 133, 20));
        firstNameTxtBox->setFont(font1);
        firstNameTxtBox->setMaxLength(25);
        firstNameTxtBox->setAlignment(Qt::AlignCenter);
        genderLbl = new QLabel(AddDoctor);
        genderLbl->setObjectName(QStringLiteral("genderLbl"));
        genderLbl->setGeometry(QRect(51, 273, 47, 16));
        genderLbl->setFont(font);
        firstNameLbl = new QLabel(AddDoctor);
        firstNameLbl->setObjectName(QStringLiteral("firstNameLbl"));
        firstNameLbl->setGeometry(QRect(51, 71, 68, 16));
        firstNameLbl->setFont(font);
        lastNameLbl = new QLabel(AddDoctor);
        lastNameLbl->setObjectName(QStringLiteral("lastNameLbl"));
        lastNameLbl->setGeometry(QRect(51, 111, 65, 16));
        lastNameLbl->setFont(font);
        userNameLbl = new QLabel(AddDoctor);
        userNameLbl->setObjectName(QStringLiteral("userNameLbl"));
        userNameLbl->setGeometry(QRect(51, 152, 62, 16));
        userNameLbl->setFont(font);
        cnpLbl = new QLabel(AddDoctor);
        cnpLbl->setObjectName(QStringLiteral("cnpLbl"));
        cnpLbl->setGeometry(QRect(51, 233, 33, 16));
        cnpLbl->setFont(font);
        userPasswordLbl = new QLabel(AddDoctor);
        userPasswordLbl->setObjectName(QStringLiteral("userPasswordLbl"));
        userPasswordLbl->setGeometry(QRect(51, 192, 59, 16));
        userPasswordLbl->setFont(font);
        homeAddressLbl = new QLabel(AddDoctor);
        homeAddressLbl->setObjectName(QStringLiteral("homeAddressLbl"));
        homeAddressLbl->setGeometry(QRect(51, 354, 85, 16));
        homeAddressLbl->setFont(font);
        dateOfBirthLbl = new QLabel(AddDoctor);
        dateOfBirthLbl->setObjectName(QStringLiteral("dateOfBirthLbl"));
        dateOfBirthLbl->setGeometry(QRect(51, 314, 82, 16));
        dateOfBirthLbl->setFont(font);
        phoneNumnberLbl = new QLabel(AddDoctor);
        phoneNumnberLbl->setObjectName(QStringLiteral("phoneNumnberLbl"));
        phoneNumnberLbl->setGeometry(QRect(51, 395, 41, 16));
        phoneNumnberLbl->setFont(font);
        specialtyLbl = new QLabel(AddDoctor);
        specialtyLbl->setObjectName(QStringLiteral("specialtyLbl"));
        specialtyLbl->setGeometry(QRect(51, 476, 57, 16));
        specialtyLbl->setFont(font);
        emailAddressLbl = new QLabel(AddDoctor);
        emailAddressLbl->setObjectName(QStringLiteral("emailAddressLbl"));
        emailAddressLbl->setGeometry(QRect(51, 435, 85, 16));
        emailAddressLbl->setFont(font);
        addBtn = new QPushButton(AddDoctor);
        addBtn->setObjectName(QStringLiteral("addBtn"));
        addBtn->setGeometry(QRect(40, 520, 100, 30));
        addBtn->setFont(font);
        cancelBtn = new QPushButton(AddDoctor);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        cancelBtn->setGeometry(QRect(210, 520, 100, 30));
        cancelBtn->setFont(font);
        QWidget::setTabOrder(firstNameTxtBox, lastNameTxtBox);
        QWidget::setTabOrder(lastNameTxtBox, usernameTxtBox);
        QWidget::setTabOrder(usernameTxtBox, passwordTxtBox);
        QWidget::setTabOrder(passwordTxtBox, cnpTxtBox);
        QWidget::setTabOrder(cnpTxtBox, BirthDate);
        QWidget::setTabOrder(BirthDate, homeAddressTxtBox);
        QWidget::setTabOrder(homeAddressTxtBox, phoneNumnberTxtBox);
        QWidget::setTabOrder(phoneNumnberTxtBox, emailAddressTxtBox);
        QWidget::setTabOrder(emailAddressTxtBox, specialtyComboBox);

        retranslateUi(AddDoctor);

        QMetaObject::connectSlotsByName(AddDoctor);
    } // setupUi

    void retranslateUi(QWidget *AddDoctor)
    {
        AddDoctor->setWindowTitle(QApplication::translate("AddDoctor", "Add Doctor", 0));
        TitleLbl->setText(QApplication::translate("AddDoctor", "<html><head/><body><p><span style=\" font-size:16pt; color:#4b0082;\">Add Doctor</span></p></body></html>", 0));
        phoneNumnberTxtBox->setInputMask(QApplication::translate("AddDoctor", "+00 000 000 000", 0));
        passwordTxtBox->setPlaceholderText(QApplication::translate("AddDoctor", "Password", 0));
        specialtyComboBox->clear();
        specialtyComboBox->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("AddDoctor", "Allergy and immunology", 0)
         << QApplication::translate("AddDoctor", "Adolescent medicine", 0)
         << QApplication::translate("AddDoctor", "Anaesthesiology", 0)
         << QApplication::translate("AddDoctor", "Pathology", 0)
         << QApplication::translate("AddDoctor", "Cardiology", 0)
         << QApplication::translate("AddDoctor", "Paediatric cardiology", 0)
         << QApplication::translate("AddDoctor", "Cardiothoracic surgery", 0)
         << QApplication::translate("AddDoctor", "Child and adolescent psychiatry and psychotherapy", 0)
         << QApplication::translate("AddDoctor", "Clinical neurophysiology", 0)
         << QApplication::translate("AddDoctor", "Dermatology-Venereology", 0)
         << QApplication::translate("AddDoctor", "Emergency medicine", 0)
         << QApplication::translate("AddDoctor", "Endocrinology", 0)
         << QApplication::translate("AddDoctor", "Gastroenterology", 0)
         << QApplication::translate("AddDoctor", "General practice", 0)
         << QApplication::translate("AddDoctor", "Geriatrics", 0)
         << QApplication::translate("AddDoctor", "Obstetrics and gynaecology", 0)
         << QApplication::translate("AddDoctor", "Health informatics", 0)
         << QApplication::translate("AddDoctor", "Hospice and palliative medicine", 0)
         << QApplication::translate("AddDoctor", "Infectious disease", 0)
         << QApplication::translate("AddDoctor", "Internal medicine", 0)
         << QApplication::translate("AddDoctor", "Interventional radiology", 0)
         << QApplication::translate("AddDoctor", "Vascular medicine", 0)
         << QApplication::translate("AddDoctor", "Microbiology", 0)
         << QApplication::translate("AddDoctor", "Nephrology", 0)
         << QApplication::translate("AddDoctor", "Neurology", 0)
         << QApplication::translate("AddDoctor", "Neurosurgery", 0)
         << QApplication::translate("AddDoctor", "Nuclear medicine", 0)
         << QApplication::translate("AddDoctor", "Occupational medicine", 0)
         << QApplication::translate("AddDoctor", "Ophthalmology", 0)
         << QApplication::translate("AddDoctor", "Orthopaedics", 0)
         << QApplication::translate("AddDoctor", "Oral and maxillofacial surgery", 0)
         << QApplication::translate("AddDoctor", "Otorhinolaryngology", 0)
         << QApplication::translate("AddDoctor", "Paediatrics", 0)
         << QApplication::translate("AddDoctor", "Neonatology", 0)
         << QApplication::translate("AddDoctor", "Paediatric surgery", 0)
         << QApplication::translate("AddDoctor", "Physical medicine and rehabilitation", 0)
         << QApplication::translate("AddDoctor", "Plastic, reconstructive and aesthetic surgery", 0)
         << QApplication::translate("AddDoctor", "Podiatric medicine", 0)
         << QApplication::translate("AddDoctor", "Pulmonology", 0)
         << QApplication::translate("AddDoctor", "Psychiatry", 0)
         << QApplication::translate("AddDoctor", "Public Health", 0)
         << QApplication::translate("AddDoctor", "Radiology", 0)
         << QApplication::translate("AddDoctor", "Sports medicine", 0)
         << QApplication::translate("AddDoctor", "Neuroradiology", 0)
         << QApplication::translate("AddDoctor", "Radiotherapy", 0)
         << QApplication::translate("AddDoctor", "General surgery", 0)
         << QApplication::translate("AddDoctor", "Urology", 0)
         << QApplication::translate("AddDoctor", "Vascular surgery", 0)
        );
        gender->clear();
        gender->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("AddDoctor", "M", 0)
         << QApplication::translate("AddDoctor", "F", 0)
        );
        usernameTxtBox->setText(QString());
        usernameTxtBox->setPlaceholderText(QApplication::translate("AddDoctor", "Username", 0));
        lastNameTxtBox->setPlaceholderText(QApplication::translate("AddDoctor", "Last Name", 0));
        homeAddressTxtBox->setPlaceholderText(QApplication::translate("AddDoctor", "Home Address", 0));
        emailAddressTxtBox->setPlaceholderText(QApplication::translate("AddDoctor", "Email Address", 0));
        cnpTxtBox->setInputMask(QString());
        cnpTxtBox->setPlaceholderText(QApplication::translate("AddDoctor", "CNP", 0));
        firstNameTxtBox->setPlaceholderText(QApplication::translate("AddDoctor", "First Name", 0));
        genderLbl->setText(QApplication::translate("AddDoctor", "<html><head/><body><p><span style=\" color:#4b0082;\">Gender: </span></p></body></html>", 0));
        firstNameLbl->setText(QApplication::translate("AddDoctor", "<html><head/><body><p><span style=\" color:#4b0082;\">First Name: </span></p></body></html>", 0));
        lastNameLbl->setText(QApplication::translate("AddDoctor", "<html><head/><body><p><span style=\" color:#4b0082;\">Last Name: </span></p></body></html>", 0));
        userNameLbl->setText(QApplication::translate("AddDoctor", "<html><head/><body><p><span style=\" color:#4b0082;\">Username: </span></p></body></html>", 0));
        cnpLbl->setText(QApplication::translate("AddDoctor", "<html><head/><body><p><span style=\" color:#4b0082;\">CNP: </span></p></body></html>", 0));
        userPasswordLbl->setText(QApplication::translate("AddDoctor", "<html><head/><body><p><span style=\" color:#4b0082;\">Password: </span></p></body></html>", 0));
        homeAddressLbl->setText(QApplication::translate("AddDoctor", "<html><head/><body><p><span style=\" color:#4b0082;\">Home Address: </span></p></body></html>", 0));
        dateOfBirthLbl->setText(QApplication::translate("AddDoctor", "<html><head/><body><p><span style=\" color:#4b0082;\">Date Of Birth: </span></p></body></html>", 0));
        phoneNumnberLbl->setText(QApplication::translate("AddDoctor", "<html><head/><body><p><span style=\" color:#4b0082;\">Phone: </span></p></body></html>", 0));
        specialtyLbl->setText(QApplication::translate("AddDoctor", "<html><head/><body><p><span style=\" color:#4b0082;\">Specialty: </span></p></body></html>", 0));
        emailAddressLbl->setText(QApplication::translate("AddDoctor", "<html><head/><body><p><span style=\" color:#4b0082;\">Email Address: </span></p></body></html>", 0));
        addBtn->setText(QApplication::translate("AddDoctor", "Add", 0));
        cancelBtn->setText(QApplication::translate("AddDoctor", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class AddDoctor: public Ui_AddDoctor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDOCTOR_H
