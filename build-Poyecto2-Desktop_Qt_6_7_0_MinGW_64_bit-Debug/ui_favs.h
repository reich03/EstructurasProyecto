/********************************************************************************
** Form generated from reading UI file 'favs.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FAVS_H
#define UI_FAVS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_favs
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
    QPushButton *dislike;

    void setupUi(QDialog *favs)
    {
        if (favs->objectName().isEmpty())
            favs->setObjectName("favs");
        favs->setWindowModality(Qt::ApplicationModal);
        favs->resize(580, 439);
        favs->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(170, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        horizontalLayoutWidget = new QWidget(favs);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(0, 370, 581, 71));
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

        verticalLayoutWidget = new QWidget(favs);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 581, 59));
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

        dislike = new QPushButton(favs);
        dislike->setObjectName("dislike");
        dislike->setGeometry(QRect(180, 220, 81, 24));
        dislike->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ic/icons/x.png"), QSize(), QIcon::Normal, QIcon::Off);
        dislike->setIcon(icon);

        retranslateUi(favs);

        QMetaObject::connectSlotsByName(favs);
    } // setupUi

    void retranslateUi(QDialog *favs)
    {
        favs->setWindowTitle(QCoreApplication::translate("favs", "Dialog", nullptr));
        likes->setText(QCoreApplication::translate("favs", "Favs", nullptr));
        home->setText(QCoreApplication::translate("favs", "Home", nullptr));
        me->setText(QCoreApplication::translate("favs", "Me", nullptr));
        label->setText(QCoreApplication::translate("favs", "My Favs", nullptr));
        dislike->setText(QCoreApplication::translate("favs", "Dislike", nullptr));
    } // retranslateUi

};

namespace Ui {
    class favs: public Ui_favs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FAVS_H
