#include "me_nuser.h"
#include "ui_me_nuser.h"

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
