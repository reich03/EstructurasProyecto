#ifndef VIEW_MOVIES_H
#define VIEW_MOVIES_H

#include <QDialog>

namespace Ui {
class view_movies;
}

class view_movies : public QDialog
{
    Q_OBJECT

public:
    explicit view_movies(QWidget *parent = nullptr);
    ~view_movies();

private:
    Ui::view_movies *ui;
};

#endif // VIEW_MOVIES_H
