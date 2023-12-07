/********************************************************************************
** Form generated from reading UI file 'index_nuser.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INDEX_NUSER_H
#define UI_INDEX_NUSER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_index_nuser
{
public:
    QAction *actionLike;
    QAction *actionX;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *likes;
    QPushButton *home;
    QPushButton *me;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QScrollBar *verticalScrollBar;
    QPushButton *dislike;
    QPushButton *pushButton_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *top;
    QLabel *label;

    void setupUi(QDialog *index_nuser)
    {
        if (index_nuser->objectName().isEmpty())
            index_nuser->setObjectName("index_nuser");
        index_nuser->setWindowModality(Qt::ApplicationModal);
        index_nuser->resize(610, 425);
        index_nuser->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(170, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        actionLike = new QAction(index_nuser);
        actionLike->setObjectName("actionLike");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ic/icons/heart.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLike->setIcon(icon);
        actionLike->setMenuRole(QAction::TextHeuristicRole);
        actionLike->setIconVisibleInMenu(true);
        actionX = new QAction(index_nuser);
        actionX->setObjectName("actionX");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/ic/icons/x.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionX->setIcon(icon1);
        horizontalLayoutWidget = new QWidget(index_nuser);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(0, 369, 611, 71));
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

        scrollArea = new QScrollArea(index_nuser);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(0, 60, 611, 311));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 609, 309));
        verticalScrollBar = new QScrollBar(scrollAreaWidgetContents);
        verticalScrollBar->setObjectName("verticalScrollBar");
        verticalScrollBar->setGeometry(QRect(590, 0, 16, 311));
        verticalScrollBar->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(184, 238, 255, 255));\n"
"border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));"));
        verticalScrollBar->setOrientation(Qt::Vertical);
        dislike = new QPushButton(scrollAreaWidgetContents);
        dislike->setObjectName("dislike");
        dislike->setGeometry(QRect(130, 200, 81, 24));
        dislike->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
""));
        dislike->setIcon(icon1);
        pushButton_2 = new QPushButton(scrollAreaWidgetContents);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(240, 200, 61, 24));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));"));
        pushButton_2->setIcon(icon);
        scrollArea->setWidget(scrollAreaWidgetContents);
        verticalLayoutWidget = new QWidget(index_nuser);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 611, 59));
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


        retranslateUi(index_nuser);

        QMetaObject::connectSlotsByName(index_nuser);
    } // setupUi

    void retranslateUi(QDialog *index_nuser)
    {
        index_nuser->setWindowTitle(QCoreApplication::translate("index_nuser", "Dialog", nullptr));
        actionLike->setText(QCoreApplication::translate("index_nuser", "Like", nullptr));
        actionX->setText(QCoreApplication::translate("index_nuser", "X", nullptr));
        likes->setText(QCoreApplication::translate("index_nuser", "Favs", nullptr));
        home->setText(QCoreApplication::translate("index_nuser", "Home", nullptr));
        me->setText(QCoreApplication::translate("index_nuser", "Me", nullptr));
        dislike->setText(QCoreApplication::translate("index_nuser", "Dislike", nullptr));
        pushButton_2->setText(QCoreApplication::translate("index_nuser", "Like", nullptr));
        label->setText(QCoreApplication::translate("index_nuser", "Home", nullptr));
    } // retranslateUi

};

namespace Ui {
    class index_nuser: public Ui_index_nuser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INDEX_NUSER_H
