#include "delete_acc.h"
#include "ui_delete_acc.h"

delete_acc::delete_acc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::delete_acc)
{
    ui->setupUi(this);
}

delete_acc::~delete_acc()
{
    delete_acc ui;
}
