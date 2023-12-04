#ifndef SIGNUP_H
#define SIGNUP_H
#include "QtSql/QSqlDatabase"
#include "QtSql/qsqlquery.h"
#include "QtSql/QSqlError"
#include "QtSql/QSqlQuery"
#include <QDialog>

namespace Ui {
class SignUp;
}

class SignUp : public QDialog
{
    Q_OBJECT

public:
    explicit SignUp(QWidget *parent = nullptr);
    ~SignUp();
    void table_nuser();
    void table_admin();

private slots:

    void on_okandcancel_accepted();

    void on_okandcancel_rejected();

private:
    Ui::SignUp *ui;
};

#endif // SIGNUP_H
