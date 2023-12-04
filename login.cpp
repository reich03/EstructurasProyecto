#include "login.h"
#include "ui_login.h"
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

void Login::on_toolButton_clicked()
{
    QString user=ui->User->text();
    QString passw=ui->Passw->text();
    QSqlQuery search;
    QString passw2;
    QString validate;
    validate.append("SELECT * FROM table_nuser where user='"+user+"'");
    validate.append("SELECT * FROM table_admin where user='"+user+"'");
    search.prepare(validate);
    if(search.exec()){
        qDebug()<<"listo";
        while(search.next()){
            passw2=search.value(1).toByteArray().constData();
        }
    }else{
        qDebug()<<"no listo";
        QMessageBox::critical(this, tr("ERROR"), tr("User doesn't exist"));
    }
    if(passw2==passw){
        QMessageBox message;
        message.setText("Welcome");
        message.exec();
    }else{
        QMessageBox::critical(this,tr("ERROR"),tr("Incorrect Password"));
    }
}

