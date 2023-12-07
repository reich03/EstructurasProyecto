#include "categories.h"
#include "ui_categories.h"
#include "index_nuser.h"

categories::categories(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::categories)
{
    ui->setupUi(this);
}

categories::~categories()
{
    delete ui;
}

void categories::on_continue_2_clicked()
{
    QStringList categories;
    if(ui->action->isChecked()){
        categories<<ui->action->text();
    }

    if(ui->comedy ->isChecked()){
        categories<<ui->comedy ->text();
    }
    if(ui->drama->isChecked()){
        categories<<ui->drama->text();
    }
    if(ui->horror->isChecked()){
        categories<<ui->horror->text();
    }
    if(ui->sc_fiction->isChecked()){
        categories<<ui->sc_fiction->text();
    }
    if(ui->documental->isChecked()){
        categories<<ui->documental->text();
    }
    if(ui->animation->isChecked()){
        categories<<ui->animation->text();
    }
    if(ui->war->isChecked()){
        categories<<ui->war->text();
    }
    if(ui->crime->isChecked()){
        categories<<ui->crime->text();
    }
    if(ui->romance->isChecked()){
        categories<<ui->romance->text();
    }
    if(ui->adventure->isChecked()){
        categories<<ui->adventure->text();
    }
    if(ui->thriller->isChecked()){
        categories<<ui->thriller->text();
    }
    if(ui->fantasy->isChecked()){
        categories<<ui->fantasy->text();
    }
    if(ui->bio->isChecked()){
        categories<<ui->bio->text();
    }
    if(ui->musical->isChecked()){
        categories<<ui->musical->text();
    }
    if(ui->mystery->isChecked()){
        categories<<ui->mystery->text();
    }
    reject();
    index_nuser Nuser;
    Nuser.setModal(true);
    Nuser.exec();
}

