#include "login.h"
#include "ui_login.h"
#include "index_nuser.h"
#include "QMessageBox"
#include "QDebug"

Login::Login(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}


void Login::on_login_clicked()
{
    QString user=ui->user->text();
    QString passw=ui->Passw->text();
    QSqlQuery search;
    QString passw2;
    QString validate;
    QString name;
    validate.append("SELECT * FROM normal_users where user='"+user+"'");
    search.prepare(validate);
    if(search.exec()){
        qDebug()<<"listo";
        while(search.next()){
            passw2=search.value(1).toByteArray().constData();
            name=search.value(0).toByteArray().constData();
            qDebug()<<passw2;
            qDebug()<<name;
        }
    }else{
        qDebug()<<"no listo";
        QMessageBox::critical(this, tr("ERROR"), tr("User doesn't exist"));
    }
    if(passw2==passw){
        QMessageBox message;
        message.setText("Welcome");
        message.exec();
        accept();
        index_nuser *normal=new index_nuser(0);
        normal->show();
    }else{
        QMessageBox::critical(this,tr("ERROR"),tr("Incorrect Password"));
    }
}

