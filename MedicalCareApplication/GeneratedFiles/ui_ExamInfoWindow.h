/********************************************************************************
** Form generated from reading UI file 'ExamInfoWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXAMINFOWINDOW_H
#define UI_EXAMINFOWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExamInfoWindow
{
public:
    QLabel *examInfoLbl;
    QFrame *line;
    QLabel *analisisListLbl;
    QTableWidget *analisisListTable;
    QPushButton *pushButton;
    QFrame *line_2;
    QLabel *examCommentsLbl;
    QTextEdit *examCommTxtBox;
    QLabel *diagnosticLbl;
    QTextEdit *diagnosticTxtBox;
    QPushButton *saveBtn;
    QPushButton *pushButton_2;

    void setupUi(QWidget *ExamInfoWindow)
    {
        if (ExamInfoWindow->objectName().isEmpty())
            ExamInfoWindow->setObjectName(QStringLiteral("ExamInfoWindow"));
        ExamInfoWindow->setWindowModality(Qt::ApplicationModal);
        ExamInfoWindow->resize(789, 720);
        examInfoLbl = new QLabel(ExamInfoWindow);
        examInfoLbl->setObjectName(QStringLiteral("examInfoLbl"));
        examInfoLbl->setGeometry(QRect(50, 20, 731, 31));
        line = new QFrame(ExamInfoWindow);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 100, 771, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        analisisListLbl = new QLabel(ExamInfoWindow);
        analisisListLbl->setObjectName(QStringLiteral("analisisListLbl"));
        analisisListLbl->setGeometry(QRect(50, 130, 101, 21));
        analisisListTable = new QTableWidget(ExamInfoWindow);
        analisisListTable->setObjectName(QStringLiteral("analisisListTable"));
        analisisListTable->setGeometry(QRect(20, 160, 541, 221));
        pushButton = new QPushButton(ExamInfoWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(620, 250, 100, 30));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);
        line_2 = new QFrame(ExamInfoWindow);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(10, 420, 761, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        examCommentsLbl = new QLabel(ExamInfoWindow);
        examCommentsLbl->setObjectName(QStringLiteral("examCommentsLbl"));
        examCommentsLbl->setGeometry(QRect(40, 450, 201, 21));
        examCommTxtBox = new QTextEdit(ExamInfoWindow);
        examCommTxtBox->setObjectName(QStringLiteral("examCommTxtBox"));
        examCommTxtBox->setGeometry(QRect(70, 480, 431, 101));
        diagnosticLbl = new QLabel(ExamInfoWindow);
        diagnosticLbl->setObjectName(QStringLiteral("diagnosticLbl"));
        diagnosticLbl->setGeometry(QRect(40, 600, 91, 21));
        diagnosticTxtBox = new QTextEdit(ExamInfoWindow);
        diagnosticTxtBox->setObjectName(QStringLiteral("diagnosticTxtBox"));
        diagnosticTxtBox->setGeometry(QRect(140, 600, 361, 71));
        saveBtn = new QPushButton(ExamInfoWindow);
        saveBtn->setObjectName(QStringLiteral("saveBtn"));
        saveBtn->setGeometry(QRect(620, 530, 100, 30));
        saveBtn->setFont(font);
        pushButton_2 = new QPushButton(ExamInfoWindow);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(620, 610, 100, 30));
        pushButton_2->setFont(font);

        retranslateUi(ExamInfoWindow);

        QMetaObject::connectSlotsByName(ExamInfoWindow);
    } // setupUi

    void retranslateUi(QWidget *ExamInfoWindow)
    {
        ExamInfoWindow->setWindowTitle(QApplication::translate("ExamInfoWindow", "Examination Information", 0));
        examInfoLbl->setText(QApplication::translate("ExamInfoWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#4b0082;\">Exam Info (comm)</span></p></body></html>", 0));
        analisisListLbl->setText(QApplication::translate("ExamInfoWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:600; color:#4b0082;\">Analisis List</span></p></body></html>", 0));
        pushButton->setText(QApplication::translate("ExamInfoWindow", "View", 0));
        examCommentsLbl->setText(QApplication::translate("ExamInfoWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:600; color:#4b0082;\">Examination comments: </span></p></body></html>", 0));
        diagnosticLbl->setText(QApplication::translate("ExamInfoWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:600; color:#4b0082;\">Diagnostic: </span></p></body></html>", 0));
        saveBtn->setText(QApplication::translate("ExamInfoWindow", "Save", 0));
        pushButton_2->setText(QApplication::translate("ExamInfoWindow", "Discard", 0));
    } // retranslateUi

};

namespace Ui {
    class ExamInfoWindow: public Ui_ExamInfoWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAMINFOWINDOW_H
