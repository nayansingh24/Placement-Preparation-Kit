#ifndef TIME_H
#define TIME_H

#include <QDialog>

namespace Ui {
class time;
}

class time : public QDialog
{
    Q_OBJECT

public:
    explicit time(QWidget *parent = 0);
    ~time();

private:
    Ui::time *ui;
};

#endif // TIME_H
