#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "login.h"
#include "signup.h"
#include "login_admin.h"
#include <QFileDialog>
#include <QTextStream>
#include <QFile>
#include "QDebug"

MainWindow::MainWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString nombre;
    nombre="proyecto.sqlite";
    db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(nombre);
    if(db.open()){
        qDebug()<<"melo";
    }else{
        qDebug()<<"no melo";
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_SignUp_clicked()
{
    reject();
    SignUp registro;
    registro.setModal(true);
    registro.exec();
}


void MainWindow::on_NUser_clicked()
{
    reject();
    Login Nuser;
    Nuser.setModal(true);
    Nuser.exec();
}



void MainWindow::on_Admin_clicked()
{
    reject();
    login_admin admin;
    admin.setModal(true);
    admin.exec();
}







