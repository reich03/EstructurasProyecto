#include "index_admin.h"
#include "ui_index_admin.h"
#include "me_admin.h"
#include "view_movies.h"
#include "view_users.h"

index::index(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::index)
{
    ui->setupUi(this);
}

index::~index()
{
    delete ui;
}
