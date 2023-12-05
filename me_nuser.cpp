#include "me_nuser.h"
#include "ui_me_nuser.h"
#include "index_nuser.h"
#include "favs.h"
#include "chang_passw.h"
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
    index_nuser *user= new index_nuser(0);
    user->show();
}


void me_nuser::on_likes_clicked()
{
    favs *fav=new favs(0);
    fav->show();
}


void me_nuser::on_ch_password_clicked()
{

    change_password *change= new change_password(0);
    change->show();
}

