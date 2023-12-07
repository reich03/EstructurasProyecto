#ifndef CATEGORIES_H
#define CATEGORIES_H

#include <QDialog>

namespace Ui {
class categories;
}

class categories : public QDialog
{
    Q_OBJECT

public:
    explicit categories(QWidget *parent = nullptr);
    ~categories();

private slots:
    void on_continue_2_clicked();

private:
    Ui::categories *ui;
};

#endif // CATEGORIES_H
