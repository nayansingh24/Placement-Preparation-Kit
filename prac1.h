#ifndef PRAC1_H
#define PRAC1_H

#include <QDialog>

namespace Ui {
class prac1;
}

class prac1 : public QDialog
{
    Q_OBJECT

public:
    explicit prac1(QWidget *parent = 0);
    ~prac1();

private slots:
    void on_pushButton_clicked();

private:
    Ui::prac1 *ui;
};

#endif // PRAC1_H
