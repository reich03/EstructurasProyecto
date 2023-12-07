#include "favs.h"
#include "ui_favs.h"
#include "index_nuser.h"
#include "me_nuser.h"

favs::favs(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::favs)
{
    ui->setupUi(this);
}

favs::~favs()
{
    delete ui;
}

void favs::on_home_clicked()
{
    reject();
    index_nuser user;
    user.setModal(true);
    user.exec();
}


void favs::on_me_clicked()
{
    reject();
    me_nuser me;
    me.setModal(true);
    me.exec();
}


void favs::on_dislike_clicked()
{

}

