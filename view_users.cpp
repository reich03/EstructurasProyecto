#include "view_users.h"
#include "ui_view_users.h"

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
