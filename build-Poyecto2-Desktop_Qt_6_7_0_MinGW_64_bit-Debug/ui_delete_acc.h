/********************************************************************************
** Form generated from reading UI file 'delete_acc.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETE_ACC_H
#define UI_DELETE_ACC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_delete_acc
{
public:
    QLabel *label;
    QPushButton *delete_2;
    QPushButton *cancel;

    void setupUi(QDialog *delete_acc)
    {
        if (delete_acc->objectName().isEmpty())
            delete_acc->setObjectName("delete_acc");
        delete_acc->setWindowModality(Qt::ApplicationModal);
        delete_acc->resize(400, 300);
        delete_acc->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(85, 170, 255, 255));"));
        label = new QLabel(delete_acc);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 50, 211, 41));
        label->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"font: 900 20pt \"Segoe UI\";"));
        delete_2 = new QPushButton(delete_acc);
        delete_2->setObjectName("delete_2");
        delete_2->setGeometry(QRect(80, 170, 80, 24));
        delete_2->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"font: 700 9pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(184, 238, 255, 255));"));
        cancel = new QPushButton(delete_acc);
        cancel->setObjectName("cancel");
        cancel->setGeometry(QRect(210, 170, 80, 24));
        cancel->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 255));\n"
"font: 700 9pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(184, 238, 255, 255));"));

        retranslateUi(delete_acc);

        QMetaObject::connectSlotsByName(delete_acc);
    } // setupUi

    void retranslateUi(QDialog *delete_acc)
    {
        delete_acc->setWindowTitle(QCoreApplication::translate("delete_acc", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("delete_acc", "Are you sure?", nullptr));
        delete_2->setText(QCoreApplication::translate("delete_acc", "Yes, delete it", nullptr));
        cancel->setText(QCoreApplication::translate("delete_acc", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class delete_acc: public Ui_delete_acc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETE_ACC_H
