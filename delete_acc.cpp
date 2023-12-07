#include "delete_acc.h"
#include "ui_delete_acc.h"
#include "me_nuser.h"
#include "QMessageBox"
#include "mainwindow.h"

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

void delete_acc::on_cancel_clicked()
{
    reject();
    me_nuser me;
    me.setModal(true);
    me.exec();
}


void delete_acc::on_delete_2_clicked()
{
    QMessageBox message;
    message.setText("Deleted");
    message.exec();
    accept();
    MainWindow main;
    main.setModal(true);
    main.exec();
}

