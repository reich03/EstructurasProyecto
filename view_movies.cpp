#include "view_movies.h"
#include "ui_view_movies.h"

view_movies::view_movies(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::view_movies)
{
    ui->setupUi(this);
}

view_movies::~view_movies()
{
    delete ui;
}
