#include "me_admin.h"
#include "ui_me_admin.h"

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
