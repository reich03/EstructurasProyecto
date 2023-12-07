/********************************************************************************
** Form generated from reading UI file 'categories.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CATEGORIES_H
#define UI_CATEGORIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_categories
{
public:
    QLabel *label;
    QLabel *label_2;
    QCheckBox *action;
    QCheckBox *documental;
    QCheckBox *bio;
    QCheckBox *war;
    QCheckBox *mystery;
    QCheckBox *adventure;
    QCheckBox *thriller;
    QCheckBox *musical;
    QCheckBox *fantasy;
    QCheckBox *romance;
    QCheckBox *crime;
    QCheckBox *animation;
    QCheckBox *drama;
    QCheckBox *comedy;
    QCheckBox *sc_fiction;
    QCheckBox *horror;
    QPushButton *continue_2;

    void setupUi(QDialog *categories)
    {
        if (categories->objectName().isEmpty())
            categories->setObjectName("categories");
        categories->setWindowModality(Qt::ApplicationModal);
        categories->resize(450, 350);
        categories->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(85, 170, 255, 255));"));
        label = new QLabel(categories);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 20, 211, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));"));
        label_2 = new QLabel(categories);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(180, 50, 101, 31));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));"));
        action = new QCheckBox(categories);
        action->setObjectName("action");
        action->setGeometry(QRect(40, 110, 78, 22));
        action->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"font: 700 9pt \"Segoe UI\";"));
        documental = new QCheckBox(categories);
        documental->setObjectName("documental");
        documental->setGeometry(QRect(170, 110, 101, 22));
        documental->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"font: 700 9pt \"Segoe UI\";"));
        bio = new QCheckBox(categories);
        bio->setObjectName("bio");
        bio->setGeometry(QRect(320, 150, 101, 22));
        bio->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"font: 700 9pt \"Segoe UI\";"));
        war = new QCheckBox(categories);
        war->setObjectName("war");
        war->setGeometry(QRect(170, 150, 78, 22));
        war->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"font: 700 9pt \"Segoe UI\";"));
        mystery = new QCheckBox(categories);
        mystery->setObjectName("mystery");
        mystery->setGeometry(QRect(320, 230, 78, 22));
        mystery->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"font: 700 9pt \"Segoe UI\";"));
        adventure = new QCheckBox(categories);
        adventure->setObjectName("adventure");
        adventure->setGeometry(QRect(170, 270, 81, 22));
        adventure->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"font: 700 9pt \"Segoe UI\";"));
        thriller = new QCheckBox(categories);
        thriller->setObjectName("thriller");
        thriller->setGeometry(QRect(170, 310, 78, 22));
        thriller->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"font: 700 9pt \"Segoe UI\";"));
        musical = new QCheckBox(categories);
        musical->setObjectName("musical");
        musical->setGeometry(QRect(320, 190, 78, 22));
        musical->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"font: 700 9pt \"Segoe UI\";"));
        fantasy = new QCheckBox(categories);
        fantasy->setObjectName("fantasy");
        fantasy->setGeometry(QRect(320, 110, 78, 22));
        fantasy->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"font: 700 9pt \"Segoe UI\";"));
        romance = new QCheckBox(categories);
        romance->setObjectName("romance");
        romance->setGeometry(QRect(170, 230, 78, 22));
        romance->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"font: 700 9pt \"Segoe UI\";"));
        crime = new QCheckBox(categories);
        crime->setObjectName("crime");
        crime->setGeometry(QRect(170, 190, 78, 22));
        crime->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"font: 700 9pt \"Segoe UI\";"));
        animation = new QCheckBox(categories);
        animation->setObjectName("animation");
        animation->setGeometry(QRect(40, 310, 101, 22));
        animation->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"font: 700 9pt \"Segoe UI\";"));
        drama = new QCheckBox(categories);
        drama->setObjectName("drama");
        drama->setGeometry(QRect(40, 190, 78, 22));
        drama->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"font: 700 9pt \"Segoe UI\";"));
        comedy = new QCheckBox(categories);
        comedy->setObjectName("comedy");
        comedy->setGeometry(QRect(40, 150, 78, 22));
        comedy->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"font: 700 9pt \"Segoe UI\";"));
        sc_fiction = new QCheckBox(categories);
        sc_fiction->setObjectName("sc_fiction");
        sc_fiction->setGeometry(QRect(40, 270, 101, 22));
        sc_fiction->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"font: 700 9pt \"Segoe UI\";"));
        horror = new QCheckBox(categories);
        horror->setObjectName("horror");
        horror->setGeometry(QRect(40, 230, 78, 22));
        horror->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"font: 700 9pt \"Segoe UI\";"));
        continue_2 = new QPushButton(categories);
        continue_2->setObjectName("continue_2");
        continue_2->setGeometry(QRect(300, 290, 121, 24));
        continue_2->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(184, 238, 255, 255));\n"
"font: 900 9pt \"Segoe UI\";"));

        retranslateUi(categories);

        QMetaObject::connectSlotsByName(categories);
    } // setupUi

    void retranslateUi(QDialog *categories)
    {
        categories->setWindowTitle(QCoreApplication::translate("categories", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("categories", "Choose your favourites", nullptr));
        label_2->setText(QCoreApplication::translate("categories", "categories", nullptr));
        action->setText(QCoreApplication::translate("categories", "Action", nullptr));
        documental->setText(QCoreApplication::translate("categories", "Documental", nullptr));
        bio->setText(QCoreApplication::translate("categories", "Biographical", nullptr));
        war->setText(QCoreApplication::translate("categories", "War", nullptr));
        mystery->setText(QCoreApplication::translate("categories", "Mystery", nullptr));
        adventure->setText(QCoreApplication::translate("categories", "Adventure", nullptr));
        thriller->setText(QCoreApplication::translate("categories", "Thriller", nullptr));
        musical->setText(QCoreApplication::translate("categories", "Musical", nullptr));
        fantasy->setText(QCoreApplication::translate("categories", "Fantasy", nullptr));
        romance->setText(QCoreApplication::translate("categories", "Romance", nullptr));
        crime->setText(QCoreApplication::translate("categories", "Crime", nullptr));
        animation->setText(QCoreApplication::translate("categories", "Animation", nullptr));
        drama->setText(QCoreApplication::translate("categories", "Drama", nullptr));
        comedy->setText(QCoreApplication::translate("categories", "Comedy", nullptr));
        sc_fiction->setText(QCoreApplication::translate("categories", "Science Fiction", nullptr));
        horror->setText(QCoreApplication::translate("categories", "Horror", nullptr));
        continue_2->setText(QCoreApplication::translate("categories", "Continue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class categories: public Ui_categories {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATEGORIES_H
