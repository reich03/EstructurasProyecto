#ifndef DELETE_ACC_H
#define DELETE_ACC_H

#include <QDialog>

namespace Ui {
class delete_acc;
}

class delete_acc : public QDialog
{
    Q_OBJECT

public:
    explicit delete_acc(QWidget *parent = nullptr);
    ~delete_acc();

private slots:
    void on_cancel_clicked();

    void on_delete_2_clicked();

private:
    Ui::delete_acc *ui;
};

#endif // DELETE_ACC_H
