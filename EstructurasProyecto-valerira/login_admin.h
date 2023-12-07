#ifndef LOGIN_ADMIN_H
#define LOGIN_ADMIN_H
#include "QtSql/QSqlDatabase"
#include "QtSql/qsqlquery.h"
#include "QtSql/QSqlError"
#include "QtSql/QSqlQuery"
#include <QDialog>

namespace Ui {
class login_admin;
}

class login_admin : public QDialog
{
    Q_OBJECT

public:
    explicit login_admin(QWidget *parent = nullptr);
    ~login_admin();

private slots:
    void on_login_adm_clicked();

private:
    Ui::login_admin *ui;
};

#endif // LOGIN_ADMIN_H
