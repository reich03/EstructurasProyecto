#ifndef ME_NUSER_H
#define ME_NUSER_H
#include "QtSql/QSqlDatabase"
#include "QtSql/qsqlquery.h"
#include "QtSql/QSqlError"
#include "QtSql/QSqlQuery"
#include <QDialog>

namespace Ui {
class me_nuser;
}

class me_nuser : public QDialog
{
    Q_OBJECT

public:
    explicit me_nuser(QWidget *parent = nullptr);
    ~me_nuser();

private slots:
    void on_home_clicked();

    void on_likes_clicked();

    void on_ch_password_clicked();

    void on_delete_2_clicked();

    void on_logout_clicked();

    void on_ch_categories_clicked();

private:
    Ui::me_nuser *ui;
};

#endif // ME_NUSER_H
