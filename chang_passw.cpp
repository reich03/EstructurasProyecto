#include "chang_passw.h"
#include "ui_chang_passw.h"

change_password::change_password(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::change_password)
{
    ui->setupUi(this);
}

change_password::~change_password()
{
    delete ui;
}
