#ifndef VIEW_USERS_H
#define VIEW_USERS_H
#include "QtSql/QSqlDatabase"
#include "QtSql/qsqlquery.h"
#include "QtSql/QSqlError"
#include "QtSql/QSqlQuery"
#include <QDialog>

namespace Ui {
class view_users;
}

class view_users : public QDialog
{
    Q_OBJECT

public:
    explicit view_users(QWidget *parent = nullptr);
    ~view_users();

private slots:
    void on_movies_clicked();

    void on_me_clicked();

private:
    Ui::view_users *ui;
};

#endif // VIEW_USERS_H
