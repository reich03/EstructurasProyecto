/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLabel *label_2;
    QLineEdit *email;
    QLabel *label_3;
    QLineEdit *Passw;
    QToolButton *login;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->setWindowModality(Qt::ApplicationModal);
        Login->resize(450, 350);
        Login->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(161, 199, 255, 255));"));
        label_2 = new QLabel(Login);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 150, 81, 21));
        label_2->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"font: 700 11pt \"Segoe UI\";"));
        email = new QLineEdit(Login);
        email->setObjectName("email");
        email->setGeometry(QRect(160, 90, 131, 24));
        email->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255));"));
        label_3 = new QLabel(Login);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 90, 61, 21));
        label_3->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"font: 700 11pt \"Segoe UI\";"));
        Passw = new QLineEdit(Login);
        Passw->setObjectName("Passw");
        Passw->setGeometry(QRect(160, 150, 131, 24));
        Passw->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255));"));
        Passw->setEchoMode(QLineEdit::Password);
        login = new QToolButton(Login);
        login->setObjectName("login");
        login->setGeometry(QRect(170, 220, 111, 41));
        login->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(180, 231, 255, 255));"));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("Login", "Password:", nullptr));
        label_3->setText(QCoreApplication::translate("Login", "Email:", nullptr));
        login->setText(QCoreApplication::translate("Login", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
