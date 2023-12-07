#ifndef INDEX_H
#define INDEX_H
#include "QtSql/QSqlDatabase"
#include "QtSql/qsqlquery.h"
#include "QtSql/QSqlError"
#include "QtSql/QSqlQuery"
#include <QDialog>

namespace Ui {
class index;
}

class index : public QDialog
{
    Q_OBJECT

public:
    explicit index(QWidget *parent = nullptr);
    ~index();

private slots:
    void on_me_clicked();

    void on_movies_clicked();

    void on_users_clicked();

    void on_likes_clicked();

private:
    Ui::index *ui;
};

#endif // INDEX_H
