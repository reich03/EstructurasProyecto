#ifndef CHANG_PASSW_H
#define CHANG_PASSW_H

#include <QDialog>

namespace Ui {
class change_password;
}

class change_password : public QDialog
{
    Q_OBJECT

public:
    explicit change_password(QWidget *parent = nullptr);
    ~change_password();

private slots:
    void on_update_clicked();

private:
    Ui::change_password *ui;
};

#endif // CHANG_PASSW_H
