#include "me_admin.h"
#include "ui_me_admin.h"
#include "index_admin.h"
#include "view_users.h"
#include "mainwindow.h"
#include "chang_passw.h"
#include "favs_admin.h"
#include "delete_acc.h"

me_admin::me_admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::me_admin)
{
    ui->setupUi(this);
}

me_admin::~me_admin()
{
    delete ui;
}

void me_admin::on_movies_clicked()
{
    reject();
    index admin;
    admin.setModal(true);
    admin.exec();
}


void me_admin::on_users_clicked()
{
    reject();
    view_users users;
    users.setModal(true);
    users.exec();
}


void me_admin::on_delete_2_clicked()
{
    reject();
    delete_acc del;
    del.setModal(true);
    del.exec();
}


void me_admin::on_logout_clicked()
{
    reject();
    MainWindow main;
    main.setModal(true);
    main.exec();
}


void me_admin::on_update_clicked()
{
    reject();
    change_password passw;
    passw.setModal(true);
    passw.exec();
}


void me_admin::on_likes_clicked()
{
    reject();
    favs_admin fav;
    fav.setModal(true);
    fav.exec();
}

