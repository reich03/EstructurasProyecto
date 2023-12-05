#include "signup.h"
#include "ui_signup.h"
#include <QDebug>
#include <QMessageBox>

SignUp::SignUp(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SignUp)
{
    ui->setupUi(this);
    ui->Normal->setChecked(true);
    table_nuser();
    table_admin();
}

SignUp::~SignUp()
{
    delete ui;
}

void SignUp::table_nuser(){

    QString table_nuser;
    table_nuser.append("CREATE TABLE IF NOT EXISTS normal_users("
                     "name VARCHAR(25),"
                     "password VARCHAR(25),"
                     "user VARCHAR(25) PRIMARY KEY"
                     ");");

    QSqlQuery create;
    create.prepare(table_nuser);
    if(create.exec()){
        qDebug()<<"melo2";
    }else{
        qDebug()<<"no melo2"<<create.lastError();}
    }

void SignUp::table_admin(){

    QString table_ad;
    table_ad.append("CREATE TABLE IF NOT EXISTS admin("
                 "name VARCHAR(25),"
                 "password VARCHAR(25),"
                 "user VARCHAR(25) PRIMARY KEY"
                 ");");

    QSqlQuery create;
    create.prepare(table_ad);
    if(create.exec()){
        qDebug()<<"melo2";
    }else{
        qDebug()<<"no melo2admin"<<create.lastError();}
}

void SignUp::on_okandcancel_accepted()
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

    else{
        QString name=ui->Name ->text();
        QString user=ui->Email ->text();
        QString password=ui->Passw ->text();
        qDebug()<<name;
        qDebug()<<user;
        qDebug()<<password;

        QSqlQuery insertdb;
        insertdb.prepare("INSERT INTO admin(name, user, password)"
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
            qDebug()<<"no melo4"<<insertdb.lastError();
            QMessageBox::critical(this,tr("ERROR"),tr("User already in use"));
        }
    }

}

void SignUp::on_okandcancel_rejected()
{
    reject();
}


