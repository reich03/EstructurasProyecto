/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QPushButton *Admin;
    QPushButton *SignUp;
    QPushButton *NUser;
    QLabel *label;

    void setupUi(QDialog *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setWindowModality(Qt::WindowModal);
        MainWindow->resize(450, 350);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.312849 rgba(85, 170, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        Admin = new QPushButton(MainWindow);
        Admin->setObjectName("Admin");
        Admin->setGeometry(QRect(50, 170, 131, 61));
        Admin->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(184, 238, 255, 255));\n"
"font: 600 10pt \"Sitka Small Semibold\";"));
        SignUp = new QPushButton(MainWindow);
        SignUp->setObjectName("SignUp");
        SignUp->setGeometry(QRect(50, 240, 131, 61));
        SignUp->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(184, 238, 255, 255));\n"
"font: 600 10pt \"Sitka Small Semibold\";"));
        NUser = new QPushButton(MainWindow);
        NUser->setObjectName("NUser");
        NUser->setGeometry(QRect(50, 100, 131, 61));
        NUser->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(184, 238, 255, 255));\n"
"color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"font: 600 10pt \"Sitka Small Semibold\";"));
        label = new QLabel(MainWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 10, 221, 71));
        label->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(85, 170, 255, 255));\n"
"font: 40pt \"Tw Cen MT Condensed Extra Bold\";"));

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QDialog *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Admin->setText(QCoreApplication::translate("MainWindow", "Admin", nullptr));
        SignUp->setText(QCoreApplication::translate("MainWindow", "Sing Up", nullptr));
        NUser->setText(QCoreApplication::translate("MainWindow", "Normal User", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Welcome...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
