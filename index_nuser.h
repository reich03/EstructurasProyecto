#ifndef INDEX_NUSER_H
#define INDEX_NUSER_H

#include <QDialog>

namespace Ui {
class index_nuser;
}

class index_nuser : public QDialog
{
    Q_OBJECT

public:
    explicit index_nuser(QWidget *parent = nullptr);
    ~index_nuser();

private:
    Ui::index_nuser *ui;
};

#endif // INDEX_NUSER_H
