#include "view_users.h"
#include "ui_view_users.h"
#include "index_admin.h"
#include "me_admin.h"

view_users::view_users(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::view_users)
{
    ui->setupUi(this);
}

view_users::~view_users()
{
    delete ui;
}

void view_users::on_movies_clicked()
{
    reject();
    index admin;
    admin.setModal(true);
    admin.exec();
}


void view_users::on_me_clicked()
{
    reject();
    me_admin me;
    me.setModal(true);
    me.exec();
}

