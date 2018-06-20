#ifndef PRAC2_H
#define PRAC2_H

#include <QDialog>

namespace Ui {
class prac2;
}

class prac2 : public QDialog
{
    Q_OBJECT

public:
    explicit prac2(QWidget *parent = 0);
    ~prac2();

private slots:
    void on_pushButton_clicked();

private:
    Ui::prac2 *ui;
};

#endif // PRAC2_H
