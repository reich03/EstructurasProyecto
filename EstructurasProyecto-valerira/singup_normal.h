#ifndef SINGUP_NORMAL_H
#define SINGUP_NORMAL_H

#include <QDialog>

namespace Ui {
class singup_normal;
}

class singup_normal : public QDialog
{
    Q_OBJECT

public:
    explicit singup_normal(QWidget *parent = nullptr);
    ~singup_normal();

private slots:
    void on_okandcancel_rejected();

    void on_okandcancel_accepted();

private:
    Ui::singup_normal *ui;
};

#endif // SINGUP_NORMAL_H
