/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_SignUp
{
public:
    QLabel *label;
    QLineEdit *Name;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *Email;
    QLineEdit *Passw;
    QGroupBox *groupBox;
    QRadioButton *Admin;
    QRadioButton *Normal;
    QDialogButtonBox *okandcancel;

    void setupUi(QDialog *SignUp)
    {
        if (SignUp->objectName().isEmpty())
            SignUp->setObjectName("SignUp");
        SignUp->setWindowModality(Qt::ApplicationModal);
        SignUp->resize(450, 350);
        SignUp->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(161, 199, 255, 255));"));
        label = new QLabel(SignUp);
        label->setObjectName("label");
        label->setGeometry(QRect(51, 60, 70, 21));
        label->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"font: 700 11pt \"Segoe UI\";"));
        Name = new QLineEdit(SignUp);
        Name->setObjectName("Name");
        Name->setGeometry(QRect(150, 60, 131, 24));
        Name->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255));"));
        label_2 = new QLabel(SignUp);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 110, 61, 21));
        label_2->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"font: 700 11pt \"Segoe UI\";"));
        label_3 = new QLabel(SignUp);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 160, 81, 21));
        label_3->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"font: 700 11pt \"Segoe UI\";"));
        Email = new QLineEdit(SignUp);
        Email->setObjectName("Email");
        Email->setGeometry(QRect(150, 110, 131, 24));
        Email->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255));"));
        Passw = new QLineEdit(SignUp);
        Passw->setObjectName("Passw");
        Passw->setGeometry(QRect(150, 160, 131, 24));
        Passw->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255));"));
        Passw->setEchoMode(QLineEdit::Password);
        groupBox = new QGroupBox(SignUp);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(320, 80, 121, 91));
        groupBox->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(180, 231, 255, 255));"));
        Admin = new QRadioButton(groupBox);
        Admin->setObjectName("Admin");
        Admin->setGeometry(QRect(20, 50, 91, 22));
        Normal = new QRadioButton(groupBox);
        Normal->setObjectName("Normal");
        Normal->setGeometry(QRect(20, 30, 91, 22));
        okandcancel = new QDialogButtonBox(SignUp);
        okandcancel->setObjectName("okandcancel");
        okandcancel->setGeometry(QRect(110, 220, 166, 24));
        okandcancel->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(184, 238, 255, 255));"));
        okandcancel->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(SignUp);

        QMetaObject::connectSlotsByName(SignUp);
    } // setupUi

    void retranslateUi(QDialog *SignUp)
    {
        SignUp->setWindowTitle(QCoreApplication::translate("SignUp", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SignUp", "Name:", nullptr));
        label_2->setText(QCoreApplication::translate("SignUp", "Email:", nullptr));
        label_3->setText(QCoreApplication::translate("SignUp", "Password:", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SignUp", "Type of User", nullptr));
        Admin->setText(QCoreApplication::translate("SignUp", "Admin", nullptr));
        Normal->setText(QCoreApplication::translate("SignUp", "Normal User", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUp: public Ui_SignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
