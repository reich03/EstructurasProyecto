#include "index_admin.h"
#include "ui_index_admin.h"
#include "me_admin.h"
#include "view_users.h"
#include "favs_admin.h"
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
    reject();
    me_admin me;
    me.setModal(true);
    me.exec();
}


void index::on_users_clicked()
{
    reject();
    view_users users;
    users.setModal(true);
    users.exec();
}


void index::on_likes_clicked()
{
    reject();
    favs_admin favourites;
    favourites.setModal(true);
    favourites.exec();
}

