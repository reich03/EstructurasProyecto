#ifndef CHANG_PASSW_ADMIN_H
#define CHANG_PASSW_ADMIN_H

#include <QDialog>

namespace Ui {
class chang_passw_admin;
}

class chang_passw_admin : public QDialog
{
    Q_OBJECT

public:
    explicit chang_passw_admin(QWidget *parent = nullptr);
    ~chang_passw_admin();

private:
    Ui::chang_passw_admin *ui;
};

#endif // CHANG_PASSW_ADMIN_H
