#include "favs.h"
#include "ui_favs.h"

favs::favs(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::favs)
{
    ui->setupUi(this);
}

favs::~favs()
{
    delete ui;
}
