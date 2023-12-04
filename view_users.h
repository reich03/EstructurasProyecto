#ifndef VIEW_USERS_H
#define VIEW_USERS_H

#include <QDialog>

namespace Ui {
class view_users;
}

class view_users : public QDialog
{
    Q_OBJECT

public:
    explicit view_users(QWidget *parent = nullptr);
    ~view_users();

private:
    Ui::view_users *ui;
};

#endif // VIEW_USERS_H
