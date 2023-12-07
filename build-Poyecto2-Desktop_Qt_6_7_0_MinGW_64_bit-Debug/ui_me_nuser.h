/********************************************************************************
** Form generated from reading UI file 'me_nuser.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ME_NUSER_H
#define UI_ME_NUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_me_nuser
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *likes;
    QPushButton *home;
    QPushButton *me;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *top;
    QLabel *label;
    QPushButton *update;
    QPushButton *delete_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *logout;
    QPushButton *ch_categories;

    void setupUi(QDialog *me_nuser)
    {
        if (me_nuser->objectName().isEmpty())
            me_nuser->setObjectName("me_nuser");
        me_nuser->setWindowModality(Qt::ApplicationModal);
        me_nuser->resize(589, 435);
        me_nuser->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(170, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        horizontalLayoutWidget = new QWidget(me_nuser);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(-10, 360, 601, 81));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        likes = new QPushButton(horizontalLayoutWidget);
        likes->setObjectName("likes");
        likes->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(184, 238, 255, 255));\n"
"font: 600 9pt \"Sitka Small Semibold\";"));

        horizontalLayout->addWidget(likes);

        home = new QPushButton(horizontalLayoutWidget);
        home->setObjectName("home");
        home->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(184, 238, 255, 255));\n"
"font: 600 9pt \"Sitka Small Semibold\";"));

        horizontalLayout->addWidget(home);

        me = new QPushButton(horizontalLayoutWidget);
        me->setObjectName("me");
        me->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(184, 238, 255, 255));\n"
"font: 600 9pt \"Sitka Small Semibold\";"));

        horizontalLayout->addWidget(me);

        verticalLayoutWidget = new QWidget(me_nuser);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 591, 59));
        top = new QVBoxLayout(verticalLayoutWidget);
        top->setObjectName("top");
        top->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("font: 700 40pt \"Tw Cen MT Condensed\";\n"
"color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));"));

        top->addWidget(label, 0, Qt::AlignHCenter);

        update = new QPushButton(me_nuser);
        update->setObjectName("update");
        update->setGeometry(QRect(50, 220, 131, 24));
        update->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(184, 238, 255, 255));\n"
"font: 900 9pt \"Segoe UI\";"));
        delete_2 = new QPushButton(me_nuser);
        delete_2->setObjectName("delete_2");
        delete_2->setGeometry(QRect(230, 220, 121, 24));
        delete_2->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(184, 238, 255, 255));\n"
"font: 900 9pt \"Segoe UI\";"));
        label_3 = new QLabel(me_nuser);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 90, 61, 21));
        label_3->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"font: 700 11pt \"Segoe UI\";"));
        label_4 = new QLabel(me_nuser);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 140, 61, 21));
        label_4->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"font: 700 11pt \"Segoe UI\";"));
        logout = new QPushButton(me_nuser);
        logout->setObjectName("logout");
        logout->setGeometry(QRect(230, 290, 121, 24));
        logout->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(184, 238, 255, 255));\n"
"font: 900 9pt \"Segoe UI\";"));
        ch_categories = new QPushButton(me_nuser);
        ch_categories->setObjectName("ch_categories");
        ch_categories->setGeometry(QRect(430, 220, 121, 24));
        ch_categories->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(184, 238, 255, 255));\n"
"font: 900 9pt \"Segoe UI\";"));
        delete_2->raise();
        horizontalLayoutWidget->raise();
        verticalLayoutWidget->raise();
        update->raise();
        label_3->raise();
        label_4->raise();
        logout->raise();
        ch_categories->raise();

        retranslateUi(me_nuser);

        QMetaObject::connectSlotsByName(me_nuser);
    } // setupUi

    void retranslateUi(QDialog *me_nuser)
    {
        me_nuser->setWindowTitle(QCoreApplication::translate("me_nuser", "Dialog", nullptr));
        likes->setText(QCoreApplication::translate("me_nuser", "Favs", nullptr));
        home->setText(QCoreApplication::translate("me_nuser", "Home", nullptr));
        me->setText(QCoreApplication::translate("me_nuser", "Me", nullptr));
        label->setText(QCoreApplication::translate("me_nuser", "Me", nullptr));
        update->setText(QCoreApplication::translate("me_nuser", "Update Information", nullptr));
        delete_2->setText(QCoreApplication::translate("me_nuser", "Delete Account", nullptr));
        label_3->setText(QCoreApplication::translate("me_nuser", "Email:", nullptr));
        label_4->setText(QCoreApplication::translate("me_nuser", "Name:", nullptr));
        logout->setText(QCoreApplication::translate("me_nuser", "LogOut", nullptr));
        ch_categories->setText(QCoreApplication::translate("me_nuser", "Change categories", nullptr));
    } // retranslateUi

};

namespace Ui {
    class me_nuser: public Ui_me_nuser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ME_NUSER_H
