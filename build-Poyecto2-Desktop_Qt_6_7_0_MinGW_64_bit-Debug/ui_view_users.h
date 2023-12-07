/********************************************************************************
** Form generated from reading UI file 'view_users.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_USERS_H
#define UI_VIEW_USERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_view_users
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *buttom;
    QPushButton *users;
    QPushButton *movies;
    QPushButton *me;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *top;
    QLabel *label;
    QPushButton *create;

    void setupUi(QDialog *view_users)
    {
        if (view_users->objectName().isEmpty())
            view_users->setObjectName("view_users");
        view_users->setWindowModality(Qt::ApplicationModal);
        view_users->resize(591, 431);
        view_users->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(170, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        horizontalLayoutWidget = new QWidget(view_users);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(0, 340, 591, 91));
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

        verticalLayoutWidget = new QWidget(view_users);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 591, 89));
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

        create = new QPushButton(view_users);
        create->setObjectName("create");
        create->setGeometry(QRect(230, 310, 121, 24));
        create->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(184, 238, 255, 255));\n"
"font: 900 9pt \"Segoe UI\";"));

        retranslateUi(view_users);

        QMetaObject::connectSlotsByName(view_users);
    } // setupUi

    void retranslateUi(QDialog *view_users)
    {
        view_users->setWindowTitle(QCoreApplication::translate("view_users", "Dialog", nullptr));
        users->setText(QCoreApplication::translate("view_users", "View Users", nullptr));
        movies->setText(QCoreApplication::translate("view_users", "View Movies", nullptr));
        me->setText(QCoreApplication::translate("view_users", "Me", nullptr));
        label->setText(QCoreApplication::translate("view_users", "Users", nullptr));
        create->setText(QCoreApplication::translate("view_users", "Create User", nullptr));
    } // retranslateUi

};

namespace Ui {
    class view_users: public Ui_view_users {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_USERS_H
