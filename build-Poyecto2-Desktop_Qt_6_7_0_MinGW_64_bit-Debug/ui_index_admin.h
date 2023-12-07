/********************************************************************************
** Form generated from reading UI file 'index_admin.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INDEX_ADMIN_H
#define UI_INDEX_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_index
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *buttom;
    QPushButton *likes;
    QPushButton *users;
    QPushButton *movies;
    QPushButton *me;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *top;
    QLabel *label;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QScrollBar *verticalScrollBar;

    void setupUi(QDialog *index)
    {
        if (index->objectName().isEmpty())
            index->setObjectName("index");
        index->setWindowModality(Qt::ApplicationModal);
        index->resize(610, 425);
        index->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(170, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        horizontalLayoutWidget = new QWidget(index);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(-1, 350, 601, 91));
        buttom = new QHBoxLayout(horizontalLayoutWidget);
        buttom->setObjectName("buttom");
        buttom->setContentsMargins(0, 0, 0, 0);
        likes = new QPushButton(horizontalLayoutWidget);
        likes->setObjectName("likes");
        likes->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(184, 238, 255, 255));\n"
"font: 600 9pt \"Sitka Small Semibold\";"));

        buttom->addWidget(likes);

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

        horizontalLayoutWidget_2 = new QWidget(index);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(-1, -1, 601, 59));
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

        scrollArea = new QScrollArea(index);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(-1, 50, 681, 301));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 679, 299));
        verticalScrollBar = new QScrollBar(scrollAreaWidgetContents);
        verticalScrollBar->setObjectName("verticalScrollBar");
        verticalScrollBar->setGeometry(QRect(590, 0, 16, 301));
        verticalScrollBar->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(184, 238, 255, 255));\n"
"border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));"));
        verticalScrollBar->setOrientation(Qt::Vertical);
        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(index);

        QMetaObject::connectSlotsByName(index);
    } // setupUi

    void retranslateUi(QDialog *index)
    {
        index->setWindowTitle(QCoreApplication::translate("index", "Dialog", nullptr));
        likes->setText(QCoreApplication::translate("index", "Favs", nullptr));
        users->setText(QCoreApplication::translate("index", "View Users", nullptr));
        movies->setText(QCoreApplication::translate("index", "View Movies", nullptr));
        me->setText(QCoreApplication::translate("index", "Me", nullptr));
        label->setText(QCoreApplication::translate("index", "Movies", nullptr));
    } // retranslateUi

};

namespace Ui {
    class index: public Ui_index {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INDEX_ADMIN_H
