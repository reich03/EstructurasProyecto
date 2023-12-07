/********************************************************************************
** Form generated from reading UI file 'me_admin.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ME_ADMIN_H
#define UI_ME_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_me_admin
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *buttom;
    QPushButton *users;
    QPushButton *movies;
    QPushButton *me;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *top;
    QLabel *label;
    QPushButton *logout;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *delete_2;
    QPushButton *update;

    void setupUi(QDialog *me_admin)
    {
        if (me_admin->objectName().isEmpty())
            me_admin->setObjectName("me_admin");
        me_admin->setWindowModality(Qt::ApplicationModal);
        me_admin->resize(570, 439);
        me_admin->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(170, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        horizontalLayoutWidget = new QWidget(me_admin);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(0, 350, 571, 91));
        buttom = new QHBoxLayout(horizontalLayoutWidget);
        buttom->setObjectName("buttom");
        buttom->setContentsMargins(0, 0, 0, 0);
        users = new QPushButton(horizontalLayoutWidget);
        users->setObjectName("users");
        users->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(184, 238, 255, 255));\n"
"font: 600 9pt \"Sitka Small Semibold\";"));

        buttom->addWidget(users);

        movies = new QPushButton(horizontalLayoutWidget);
        movies->setObjectName("movies");
        movies->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(184, 238, 255, 255));\n"
"font: 600 9pt \"Sitka Small Semibold\";"));

        buttom->addWidget(movies);

        me = new QPushButton(horizontalLayoutWidget);
        me->setObjectName("me");
        me->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(184, 238, 255, 255));\n"
"font: 600 9pt \"Sitka Small Semibold\";"));

        buttom->addWidget(me);

        horizontalLayoutWidget_2 = new QWidget(me_admin);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(0, 0, 571, 59));
        top = new QHBoxLayout(horizontalLayoutWidget_2);
        top->setObjectName("top");
        top->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget_2);
        label->setObjectName("label");
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("font: 700 40pt \"Tw Cen MT Condensed\";\n"
"color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));"));

        top->addWidget(label, 0, Qt::AlignHCenter);

        logout = new QPushButton(me_admin);
        logout->setObjectName("logout");
        logout->setGeometry(QRect(220, 290, 121, 24));
        logout->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(184, 238, 255, 255));\n"
"font: 900 9pt \"Segoe UI\";"));
        label_3 = new QLabel(me_admin);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 90, 61, 21));
        label_3->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"font: 700 11pt \"Segoe UI\";"));
        label_4 = new QLabel(me_admin);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 140, 61, 21));
        label_4->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"font: 700 11pt \"Segoe UI\";"));
        delete_2 = new QPushButton(me_admin);
        delete_2->setObjectName("delete_2");
        delete_2->setGeometry(QRect(220, 240, 121, 24));
        delete_2->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(184, 238, 255, 255));\n"
"font: 900 9pt \"Segoe UI\";"));
        update = new QPushButton(me_admin);
        update->setObjectName("update");
        update->setGeometry(QRect(60, 240, 131, 24));
        update->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(184, 238, 255, 255));\n"
"font: 900 9pt \"Segoe UI\";"));

        retranslateUi(me_admin);

        QMetaObject::connectSlotsByName(me_admin);
    } // setupUi

    void retranslateUi(QDialog *me_admin)
    {
        me_admin->setWindowTitle(QCoreApplication::translate("me_admin", "Dialog", nullptr));
        users->setText(QCoreApplication::translate("me_admin", "View Users", nullptr));
        movies->setText(QCoreApplication::translate("me_admin", "View Movies", nullptr));
        me->setText(QCoreApplication::translate("me_admin", "Me", nullptr));
        label->setText(QCoreApplication::translate("me_admin", "Me", nullptr));
        logout->setText(QCoreApplication::translate("me_admin", "LogOut", nullptr));
        label_3->setText(QCoreApplication::translate("me_admin", "Email:", nullptr));
        label_4->setText(QCoreApplication::translate("me_admin", "Name:", nullptr));
        delete_2->setText(QCoreApplication::translate("me_admin", "Delete Account", nullptr));
        update->setText(QCoreApplication::translate("me_admin", "Update Information", nullptr));
    } // retranslateUi

};

namespace Ui {
    class me_admin: public Ui_me_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ME_ADMIN_H
