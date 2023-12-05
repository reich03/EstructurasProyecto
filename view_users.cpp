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
    index *admin=new index(0);
    admin->show();
}


void view_users::on_me_clicked()
{
    me_admin *me= new me_admin(0);
    me->show();
}

