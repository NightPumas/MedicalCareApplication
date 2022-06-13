/********************************************************************************
** Form generated from reading UI file 'AddExam.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDEXAM_H
#define UI_ADDEXAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddExam
{
public:
    QTextEdit *doctorCommentsTxtBox;
    QPushButton *startBtn;
    QLabel *Analisislbl;
    QGroupBox *bitalinoActions;
    QRadioButton *ACCradiobtn;
    QRadioButton *ECGradiobtn;
    QRadioButton *EDAradiobtn;
    QRadioButton *EEGradiobtn;
    QRadioButton *EMGradiobtn;
    QRadioButton *LUXradiobtn;
    QRadioButton *PLSradiobtn;
    QComboBox *FrequencyComboBox;
    QLabel *titleLbl;
    QLabel *doctorCommentsLbl;
    QPushButton *cancelBtn;
    QLabel *SetFrequencylbl;
    QComboBox *chanelComboBox;
    QLabel *SetChanellbl;
    QPushButton *stoptBtn;
    QPushButton *Savebtn;
    QPushButton *discardbtn;

    void setupUi(QWidget *AddExam)
    {
        if (AddExam->objectName().isEmpty())
            AddExam->setObjectName(QStringLiteral("AddExam"));
        AddExam->setWindowModality(Qt::ApplicationModal);
        AddExam->resize(1300, 656);
        doctorCommentsTxtBox = new QTextEdit(AddExam);
        doctorCommentsTxtBox->setObjectName(QStringLiteral("doctorCommentsTxtBox"));
        doctorCommentsTxtBox->setGeometry(QRect(50, 100, 471, 211));
        startBtn = new QPushButton(AddExam);
        startBtn->setObjectName(QStringLiteral("startBtn"));
        startBtn->setGeometry(QRect(760, 520, 100, 30));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        startBtn->setFont(font);
        Analisislbl = new QLabel(AddExam);
        Analisislbl->setObjectName(QStringLiteral("Analisislbl"));
        Analisislbl->setGeometry(QRect(50, 330, 121, 21));
        bitalinoActions = new QGroupBox(AddExam);
        bitalinoActions->setObjectName(QStringLiteral("bitalinoActions"));
        bitalinoActions->setGeometry(QRect(50, 350, 471, 51));
        ACCradiobtn = new QRadioButton(bitalinoActions);
        ACCradiobtn->setObjectName(QStringLiteral("ACCradiobtn"));
        ACCradiobtn->setGeometry(QRect(355, 15, 47, 20));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        ACCradiobtn->setFont(font1);
        ECGradiobtn = new QRadioButton(bitalinoActions);
        ECGradiobtn->setObjectName(QStringLiteral("ECGradiobtn"));
        ECGradiobtn->setGeometry(QRect(425, 15, 46, 20));
        QFont font2;
        font2.setPointSize(10);
        ECGradiobtn->setFont(font2);
        EDAradiobtn = new QRadioButton(bitalinoActions);
        EDAradiobtn->setObjectName(QStringLiteral("EDAradiobtn"));
        EDAradiobtn->setGeometry(QRect(213, 15, 46, 20));
        EDAradiobtn->setFont(font2);
        EEGradiobtn = new QRadioButton(bitalinoActions);
        EEGradiobtn->setObjectName(QStringLiteral("EEGradiobtn"));
        EEGradiobtn->setGeometry(QRect(1, 15, 45, 20));
        EEGradiobtn->setFont(font2);
        EMGradiobtn = new QRadioButton(bitalinoActions);
        EMGradiobtn->setObjectName(QStringLiteral("EMGradiobtn"));
        EMGradiobtn->setGeometry(QRect(72, 15, 48, 20));
        EMGradiobtn->setFont(font2);
        LUXradiobtn = new QRadioButton(bitalinoActions);
        LUXradiobtn->setObjectName(QStringLiteral("LUXradiobtn"));
        LUXradiobtn->setGeometry(QRect(284, 15, 45, 20));
        LUXradiobtn->setFont(font2);
        PLSradiobtn = new QRadioButton(bitalinoActions);
        PLSradiobtn->setObjectName(QStringLiteral("PLSradiobtn"));
        PLSradiobtn->setGeometry(QRect(142, 15, 44, 20));
        PLSradiobtn->setFont(font2);
        FrequencyComboBox = new QComboBox(AddExam);
        FrequencyComboBox->setObjectName(QStringLiteral("FrequencyComboBox"));
        FrequencyComboBox->setGeometry(QRect(180, 420, 100, 23));
        titleLbl = new QLabel(AddExam);
        titleLbl->setObjectName(QStringLiteral("titleLbl"));
        titleLbl->setGeometry(QRect(0, 20, 401, 31));
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setWeight(75);
        titleLbl->setFont(font3);
        titleLbl->setAlignment(Qt::AlignCenter);
        doctorCommentsLbl = new QLabel(AddExam);
        doctorCommentsLbl->setObjectName(QStringLiteral("doctorCommentsLbl"));
        doctorCommentsLbl->setGeometry(QRect(40, 60, 131, 31));
        QFont font4;
        font4.setFamily(QStringLiteral("Times New Roman"));
        font4.setPointSize(11);
        font4.setBold(true);
        font4.setWeight(75);
        doctorCommentsLbl->setFont(font4);
        cancelBtn = new QPushButton(AddExam);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        cancelBtn->setGeometry(QRect(510, 520, 100, 30));
        cancelBtn->setFont(font);
        SetFrequencylbl = new QLabel(AddExam);
        SetFrequencylbl->setObjectName(QStringLiteral("SetFrequencylbl"));
        SetFrequencylbl->setGeometry(QRect(50, 420, 121, 16));
        QFont font5;
        font5.setPointSize(11);
        SetFrequencylbl->setFont(font5);
        chanelComboBox = new QComboBox(AddExam);
        chanelComboBox->setObjectName(QStringLiteral("chanelComboBox"));
        chanelComboBox->setGeometry(QRect(420, 420, 101, 23));
        SetChanellbl = new QLabel(AddExam);
        SetChanellbl->setObjectName(QStringLiteral("SetChanellbl"));
        SetChanellbl->setGeometry(QRect(310, 420, 81, 20));
        SetChanellbl->setFont(font5);
        stoptBtn = new QPushButton(AddExam);
        stoptBtn->setObjectName(QStringLiteral("stoptBtn"));
        stoptBtn->setGeometry(QRect(1050, 520, 100, 30));
        stoptBtn->setFont(font);
        Savebtn = new QPushButton(AddExam);
        Savebtn->setObjectName(QStringLiteral("Savebtn"));
        Savebtn->setGeometry(QRect(50, 520, 100, 30));
        Savebtn->setFont(font);
        discardbtn = new QPushButton(AddExam);
        discardbtn->setObjectName(QStringLiteral("discardbtn"));
        discardbtn->setGeometry(QRect(300, 520, 100, 30));
        discardbtn->setFont(font);
#ifndef QT_NO_SHORTCUT
        doctorCommentsLbl->setBuddy(doctorCommentsTxtBox);
        SetFrequencylbl->setBuddy(FrequencyComboBox);
        SetChanellbl->setBuddy(FrequencyComboBox);
#endif // QT_NO_SHORTCUT

        retranslateUi(AddExam);

        QMetaObject::connectSlotsByName(AddExam);
    } // setupUi

    void retranslateUi(QWidget *AddExam)
    {
        AddExam->setWindowTitle(QApplication::translate("AddExam", "AddExam", 0));
        startBtn->setText(QApplication::translate("AddExam", "Start", 0));
        Analisislbl->setText(QApplication::translate("AddExam", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#4b0082;\">Analisis:</span></p></body></html>", 0));
        bitalinoActions->setTitle(QString());
        ACCradiobtn->setText(QApplication::translate("AddExam", "ACC", 0));
        ECGradiobtn->setText(QApplication::translate("AddExam", "ECG", 0));
        EDAradiobtn->setText(QApplication::translate("AddExam", "EDA", 0));
        EEGradiobtn->setText(QApplication::translate("AddExam", "EEG", 0));
        EMGradiobtn->setText(QApplication::translate("AddExam", "EMG", 0));
        LUXradiobtn->setText(QApplication::translate("AddExam", "LUX", 0));
        PLSradiobtn->setText(QApplication::translate("AddExam", "PLS", 0));
        FrequencyComboBox->clear();
        FrequencyComboBox->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("AddExam", "1", 0)
         << QApplication::translate("AddExam", "10", 0)
         << QApplication::translate("AddExam", "100", 0)
         << QApplication::translate("AddExam", "1000", 0)
        );
        titleLbl->setText(QApplication::translate("AddExam", "<html><head/><body><p><span style=\" color:#4b0082;\">Add Examination</span></p></body></html>", 0));
        doctorCommentsLbl->setText(QApplication::translate("AddExam", "<html><head/><body><p><span style=\" color:#4b0082;\">Doctor comments:</span></p></body></html>", 0));
        cancelBtn->setText(QApplication::translate("AddExam", "Cancel", 0));
        SetFrequencylbl->setText(QApplication::translate("AddExam", "<html><head/><body><p><span style=\" font-weight:600; color:#4b0082;\">Set Frequency:</span></p></body></html>", 0));
        chanelComboBox->clear();
        chanelComboBox->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("AddExam", "0", 0)
         << QApplication::translate("AddExam", "1", 0)
         << QApplication::translate("AddExam", "2", 0)
         << QApplication::translate("AddExam", "3", 0)
         << QApplication::translate("AddExam", "4", 0)
         << QApplication::translate("AddExam", "5", 0)
        );
        SetChanellbl->setText(QApplication::translate("AddExam", "<html><head/><body><p><span style=\" font-weight:600; color:#4b0082;\">Set Chanel:</span></p></body></html>", 0));
        stoptBtn->setText(QApplication::translate("AddExam", "Stop", 0));
        Savebtn->setText(QApplication::translate("AddExam", "Save", 0));
        discardbtn->setText(QApplication::translate("AddExam", "Discard", 0));
    } // retranslateUi

};

namespace Ui {
    class AddExam: public Ui_AddExam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEXAM_H
