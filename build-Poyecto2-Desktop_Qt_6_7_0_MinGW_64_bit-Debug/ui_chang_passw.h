/********************************************************************************
** Form generated from reading UI file 'chang_passw.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANG_PASSW_H
#define UI_CHANG_PASSW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_change_password
{
public:

    void setupUi(QDialog *change_password)
    {
        if (change_password->objectName().isEmpty())
            change_password->setObjectName("change_password");
        change_password->setWindowModality(Qt::ApplicationModal);
        change_password->resize(450, 350);
        change_password->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(184, 238, 255, 255));"));

        retranslateUi(change_password);

        QMetaObject::connectSlotsByName(change_password);
    } // setupUi

    void retranslateUi(QDialog *change_password)
    {
        change_password->setWindowTitle(QCoreApplication::translate("change_password", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class change_password: public Ui_change_password {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANG_PASSW_H
