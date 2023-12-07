#include "favs_admin.h"
#include "ui_favs_admin.h"
#include "view_users.h"
#include "me_admin.h"
#include "index_admin.h"

favs_admin::favs_admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::favs_admin)
{
    ui->setupUi(this);
}

favs_admin::~favs_admin()
{
    delete ui;
}

void favs_admin::on_users_clicked()
{
    reject();
    view_users users;
    users.setModal(true);
    users.exec();
}

void favs_admin::on_me_clicked()
{
    reject();
    me_admin me;
    me.setModal(true);
    me.exec();
}




void favs_admin::on_movies_clicked()
{
    reject();
    index admin;
    admin.setModal(true);
    admin.exec();
}

