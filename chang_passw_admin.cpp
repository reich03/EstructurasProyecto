#include "chang_passw_admin.h"
#include "ui_chang_passw_admin.h"

chang_passw_admin::chang_passw_admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::chang_passw_admin)
{
    ui->setupUi(this);
}

chang_passw_admin::~chang_passw_admin()
{
    delete ui;
}
