#ifndef ME_ADMIN_H
#define ME_ADMIN_H

#include <QDialog>

namespace Ui {
class me_admin;
}

class me_admin : public QDialog
{
    Q_OBJECT

public:
    explicit me_admin(QWidget *parent = nullptr);
    ~me_admin();

private:
    Ui::me_admin *ui;
};

#endif // ME_ADMIN_H
