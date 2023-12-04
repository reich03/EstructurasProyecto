#ifndef ME_NUSER_H
#define ME_NUSER_H

#include <QDialog>

namespace Ui {
class me_nuser;
}

class me_nuser : public QDialog
{
    Q_OBJECT

public:
    explicit me_nuser(QWidget *parent = nullptr);
    ~me_nuser();

private:
    Ui::me_nuser *ui;
};

#endif // ME_NUSER_H
