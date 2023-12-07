#ifndef FAVS_ADMIN_H
#define FAVS_ADMIN_H

#include <QDialog>

namespace Ui {
class favs_admin;
}

class favs_admin : public QDialog
{
    Q_OBJECT

public:
    explicit favs_admin(QWidget *parent = nullptr);
    ~favs_admin();

private slots:
    void on_users_clicked();

    void on_me_clicked();

    void on_movies_clicked();

private:
    Ui::favs_admin *ui;
};

#endif // FAVS_ADMIN_H
