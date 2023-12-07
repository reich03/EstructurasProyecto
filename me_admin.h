#ifndef ME_ADMIN_H
#define ME_ADMIN_H
#include "QtSql/QSqlDatabase"
#include "QtSql/qsqlquery.h"
#include "QtSql/QSqlError"
#include "QtSql/QSqlQuery"
#include <QDialog>

namespace Ui {
class me_admin;
}

class me_admin : public QDialog
{
    Q_OBJECT

public:
    explicit me_admin(QWidget *parent = nullptr);
    ~me_admin();

private slots:
    void on_movies_clicked();

    void on_users_clicked();

    void on_delete_2_clicked();

    void on_logout_clicked();

    void on_ch_password_clicked();

    void on_update_clicked();

private:
    Ui::me_admin *ui;
};

#endif // ME_ADMIN_H
