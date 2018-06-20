#ifndef PRAC4_H
#define PRAC4_H

#include <QDialog>

namespace Ui {
class prac4;
}

class prac4 : public QDialog
{
    Q_OBJECT

public:
    explicit prac4(QWidget *parent = 0);
    ~prac4();

private slots:
    void on_pushButton_clicked();

private:
    Ui::prac4 *ui;
};

#endif // PRAC4_H
