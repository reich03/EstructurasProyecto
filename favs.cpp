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
    index_nuser *user=new index_nuser(0);
    user->show();
}


void favs::on_me_clicked()
{
    me_nuser *me= new me_nuser(0);
    me->show();
}

