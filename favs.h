#ifndef FAVS_H
#define FAVS_H

#include <QDialog>

namespace Ui {
class favs;
}

class favs : public QDialog
{
    Q_OBJECT

public:
    explicit favs(QWidget *parent = nullptr);
    ~favs();

private:
    Ui::favs *ui;
};

#endif // FAVS_H