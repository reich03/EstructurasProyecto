#include "index_admin.h"
#include "ui_index_admin.h"
#include "me_admin.h"
#include "view_users.h"
#include "favs.h"
#include <QDebug>

index::index(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::index)
{
    ui->setupUi(this);
}

index::~index()
{
    delete ui;
}

void index::on_me_clicked()
{
    me_admin *me= new me_admin(0);
    me->show();
}


void index::on_users_clicked()
{
    view_users *users=new view_users(0);
    users->show();
}


void index::on_likes_clicked()
{
    favs *favourites = new favs(0);
    favourites->show();
}

