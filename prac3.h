#ifndef PRAC3_H
#define PRAC3_H

#include <QDialog>

namespace Ui {
class prac3;
}

class prac3 : public QDialog
{
    Q_OBJECT

public:
    explicit prac3(QWidget *parent = 0);
    ~prac3();

private slots:
    void on_pushButton_clicked();

private:
    Ui::prac3 *ui;
};

#endif // PRAC3_H
