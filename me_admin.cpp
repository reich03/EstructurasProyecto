#include "me_admin.h"
#include "ui_me_admin.h"
#include "index_admin.h"
#include "view_users.h"

me_admin::me_admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::me_admin)
{
    ui->setupUi(this);
}

me_admin::~me_admin()
{
    delete ui;
}

void me_admin::on_movies_clicked()
{
    index *admin=new index(0);
    admin->show();
}


void me_admin::on_users_clicked()
{
    view_users *users=new view_users(0);
    users->show();
}

