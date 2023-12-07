/********************************************************************************
** Form generated from reading UI file 'login_admin.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_ADMIN_H
#define UI_LOGIN_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_login_admin
{
public:
    QToolButton *login_adm;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *Passw;
    QLineEdit *email;

    void setupUi(QDialog *login_admin)
    {
        if (login_admin->objectName().isEmpty())
            login_admin->setObjectName("login_admin");
        login_admin->resize(450, 350);
        login_admin->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(85, 170, 255, 255));"));
        login_adm = new QToolButton(login_admin);
        login_adm->setObjectName("login_adm");
        login_adm->setGeometry(QRect(180, 270, 111, 41));
        login_adm->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(180, 231, 255, 255));"));
        label_3 = new QLabel(login_admin);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(90, 150, 71, 21));
        label_3->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"font: 700 11pt \"Segoe UI\";"));
        label_4 = new QLabel(login_admin);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(90, 100, 61, 21));
        label_4->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"font: 700 11pt \"Segoe UI\";"));
        Passw = new QLineEdit(login_admin);
        Passw->setObjectName("Passw");
        Passw->setGeometry(QRect(180, 150, 131, 24));
        Passw->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255));"));
        Passw->setEchoMode(QLineEdit::Password);
        email = new QLineEdit(login_admin);
        email->setObjectName("email");
        email->setGeometry(QRect(180, 100, 131, 24));
        email->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255));"));
        email->setEchoMode(QLineEdit::Normal);

        retranslateUi(login_admin);

        QMetaObject::connectSlotsByName(login_admin);
    } // setupUi

    void retranslateUi(QDialog *login_admin)
    {
        login_admin->setWindowTitle(QCoreApplication::translate("login_admin", "Dialog", nullptr));
        login_adm->setText(QCoreApplication::translate("login_admin", "Login", nullptr));
        label_3->setText(QCoreApplication::translate("login_admin", "Password:", nullptr));
        label_4->setText(QCoreApplication::translate("login_admin", "Email:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login_admin: public Ui_login_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_ADMIN_H
