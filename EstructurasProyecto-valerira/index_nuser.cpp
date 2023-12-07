#include "index_nuser.h"
#include "ui_index_nuser.h"
#include "me_nuser.h"
#include "favs.h"
#include "index_nuser.h"

index_nuser::index_nuser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::index_nuser)
{
    ui->setupUi(this);
}

index_nuser::~index_nuser()
{
    delete ui;
}

void index_nuser::on_likes_clicked()
{
    reject();
    favs favourites;
    favourites.setModal(true);
    favourites.exec();
}

void index_nuser::on_me_clicked()
{
    reject();
    me_nuser me;
    me.setModal(true);
    me.exec();
}


void index_nuser::on_dislike_clicked()
{

}


void index_nuser::on_pushButton_2_clicked()
{

}

