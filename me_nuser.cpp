#include "me_nuser.h"
#include "ui_me_nuser.h"
#include "index_nuser.h"
#include "favs.h"
#include "chang_passw.h"
#include "mainwindow.h"
#include "QMessageBox"
#include "delete_acc.h"

me_nuser::me_nuser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::me_nuser)
{
    ui->setupUi(this);
}

me_nuser::~me_nuser()
{
    delete ui;
}

void me_nuser::on_home_clicked()
{
    reject();
    index_nuser user;
    user.setModal(true);
    user.exec();
}


void me_nuser::on_likes_clicked()
{
    reject();
    favs favourites;
    favourites.setModal(true);
    favourites.exec();
}


void me_nuser::on_ch_password_clicked()
{
    reject();
    change_password change;
    change.setModal(true);
    change.exec();
}


void me_nuser::on_delete_2_clicked()
{
    reject();
    delete_acc borrar;
    borrar.setModal(true);
    borrar.exec();
}


void me_nuser::on_logout_clicked()
{
    reject();
    MainWindow main;
    main.setModal(true);
    main.exec();
}


void me_nuser::on_ch_categories_clicked()
{

}


void me_nuser::on_update_clicked()
{

}

