/********************************************************************************
** Form generated from reading UI file 'chang_passw_admin.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANG_PASSW_ADMIN_H
#define UI_CHANG_PASSW_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_chang_passw_admin
{
public:

    void setupUi(QDialog *chang_passw_admin)
    {
        if (chang_passw_admin->objectName().isEmpty())
            chang_passw_admin->setObjectName("chang_passw_admin");
        chang_passw_admin->setWindowModality(Qt::ApplicationModal);
        chang_passw_admin->resize(474, 351);
        chang_passw_admin->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(184, 238, 255, 255));"));

        retranslateUi(chang_passw_admin);

        QMetaObject::connectSlotsByName(chang_passw_admin);
    } // setupUi

    void retranslateUi(QDialog *chang_passw_admin)
    {
        chang_passw_admin->setWindowTitle(QCoreApplication::translate("chang_passw_admin", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chang_passw_admin: public Ui_chang_passw_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANG_PASSW_ADMIN_H
