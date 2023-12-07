/********************************************************************************
** Form generated from reading UI file 'singup_normal.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SINGUP_NORMAL_H
#define UI_SINGUP_NORMAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_singup_normal
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *passw;
    QLineEdit *email;
    QLineEdit *Name_3;
    QDialogButtonBox *okandcancel;

    void setupUi(QDialog *singup_normal)
    {
        if (singup_normal->objectName().isEmpty())
            singup_normal->setObjectName("singup_normal");
        singup_normal->resize(400, 300);
        singup_normal->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(85, 170, 255, 255));"));
        label = new QLabel(singup_normal);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 110, 70, 21));
        label->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"font: 700 11pt \"Segoe UI\";"));
        label_2 = new QLabel(singup_normal);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 60, 70, 21));
        label_2->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"font: 700 11pt \"Segoe UI\";"));
        label_3 = new QLabel(singup_normal);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 160, 81, 21));
        label_3->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"font: 700 11pt \"Segoe UI\";"));
        passw = new QLineEdit(singup_normal);
        passw->setObjectName("passw");
        passw->setGeometry(QRect(150, 160, 131, 24));
        passw->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255));"));
        email = new QLineEdit(singup_normal);
        email->setObjectName("email");
        email->setGeometry(QRect(150, 110, 131, 24));
        email->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255));"));
        Name_3 = new QLineEdit(singup_normal);
        Name_3->setObjectName("Name_3");
        Name_3->setGeometry(QRect(150, 60, 131, 24));
        Name_3->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255));"));
        okandcancel = new QDialogButtonBox(singup_normal);
        okandcancel->setObjectName("okandcancel");
        okandcancel->setGeometry(QRect(100, 220, 166, 24));
        okandcancel->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(184, 238, 255, 255));"));
        okandcancel->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(singup_normal);

        QMetaObject::connectSlotsByName(singup_normal);
    } // setupUi

    void retranslateUi(QDialog *singup_normal)
    {
        singup_normal->setWindowTitle(QCoreApplication::translate("singup_normal", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("singup_normal", "Email:", nullptr));
        label_2->setText(QCoreApplication::translate("singup_normal", "Name:", nullptr));
        label_3->setText(QCoreApplication::translate("singup_normal", "Password:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class singup_normal: public Ui_singup_normal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SINGUP_NORMAL_H
