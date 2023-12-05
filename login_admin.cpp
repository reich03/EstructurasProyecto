#include "login_admin.h"
#include "ui_login_admin.h"
#include "QMessageBox"
#include <QFileDialog>
#include <QTextStream>
#include <QFile>
#include "QDebug"
#include "index_admin.h"

login_admin::login_admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login_admin)
{
    ui->setupUi(this);
}

login_admin::~login_admin()
{
    delete ui;
}

void login_admin::on_login_adm_clicked()
{
    QString user=ui->email->text();
    QString passw=ui->Passw->text();
    QSqlQuery search;
    QString passw2;
    QString consult;
    QString name;
    consult.append("SELECT * FROM admin where user='"+user+"'");
    search.prepare(consult);
    if(search.exec()){
        qDebug()<<"consulta";
        while(search.next()){
            passw2=search.value(1).toByteArray().constData();
            name=search.value(0).toByteArray().constData();
            qDebug()<<passw2;
            qDebug()<<name;
        }
    }else{
        qDebug()<<"no consulta";
        QMessageBox::critical(this, tr("ERROR"),tr("User doesn't exist"));
    }
    if(passw2==passw){
        QMessageBox message;
        message.setText("Welcome");
        message.exec();
        accept();
        index *admin=new index(0);
        admin->show();
    }else{
        QMessageBox::critical(this,tr("ERROR"),tr("Incorrect Password"));
    }
}

