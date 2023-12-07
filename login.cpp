#include "login.h"
#include "ui_login.h"
#include "QMessageBox"
#include "QDebug"
#include "index_nuser.h"

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
    QString user=ui->email->text();
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
        index_nuser user;
        user.setModal(true);
        user.exec();

    }else{
        QMessageBox::critical(this,tr("ERROR"),tr("Incorrect Password"));
    }
}

