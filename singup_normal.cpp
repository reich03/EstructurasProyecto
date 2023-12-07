#include "singup_normal.h"
#include "ui_singup_normal.h"

singup_normal::singup_normal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::singup_normal)
{
    ui->setupUi(this);
}

singup_normal::~singup_normal()
{
    delete ui;
}

void singup_normal::on_okandcancel_rejected()
{
    rejected();
}


void singup_normal::on_okandcancel_accepted()
{
    if(ui->Normal->isChecked()){

        QString name=ui->Name ->text();
        QString user=ui->Email ->text();
        QString password=ui->Passw ->text();
        qDebug()<<name;
        qDebug()<<user;
        qDebug()<<password;

        QSqlQuery insertdb;
        insertdb.prepare("INSERT INTO normal_users(name, user, password)"
                         "VALUES(:name, :user, :password)");
        insertdb.bindValue(":name",name);
        insertdb.bindValue(":user",user);
        insertdb.bindValue(":password",password);
        if(insertdb.exec()){
            QMessageBox message;
            message.setText("User created");
            message.exec();
            accept();
        }else{
            qDebug()<<"no melo3"<<insertdb.lastError();
            QMessageBox::critical(this,tr("ERROR"),tr("User already in use"));
        }
}

