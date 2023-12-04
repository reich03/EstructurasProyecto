#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "login.h"
#include "signup.h"
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
    SignUp *registro = new SignUp(0);
    registro->show();
}


void MainWindow::on_NUser_clicked()
{
    Login *Nuser = new Login(0);
    Nuser->show();
}



void MainWindow::on_Admin_clicked()
{
    Login *admin = new Login(0);
    admin->show();
}







