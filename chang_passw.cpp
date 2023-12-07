#include "chang_passw.h"
#include "ui_chang_passw.h"
#include "QMessageBox"
#include "mainwindow.h"

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

void change_password::on_update_clicked()
{
    QMessageBox message;
    message.setText("Updated");
    message.exec();
    accept();
    MainWindow main;
    main.setModal(true);
    main.exec();
}

