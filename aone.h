#ifndef AONE_H
#define AONE_H

#include <QDialog>

#include<QString>
#include"atwo.h"
namespace Ui {
class aone;
}

class aone : public QDialog
{
    Q_OBJECT

public:
    explicit aone(QWidget *parent = 0);
    ~aone();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::aone *ui;
};

#endif // AONE_H
