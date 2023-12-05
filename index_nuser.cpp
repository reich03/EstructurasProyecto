#include "index_nuser.h"
#include "ui_index_nuser.h"
#include "me_nuser.h"
#include "favs.h"

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
    favs *fav = new favs(0);
    fav->show();
}

void index_nuser::on_me_clicked()
{
    me_nuser *me= new me_nuser(0);
    me->show();
}

