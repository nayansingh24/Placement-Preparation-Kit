#ifndef RONE_H
#define RONE_H
#include<trains.h>
#include <QDialog>

#include <time.h>
#include <percentage.h>
#include<simpleintrest.h>
#include<profit.h>
#include<timeanddistance.h>
//#include <QDialog>

namespace Ui {
class rone;
}

class rone : public QDialog
{
    Q_OBJECT

public:
    explicit rone(QWidget *parent = 0);
    ~rone();
private slots:
    void on_pushButton_clicked();



    void on_comboBox_currentTextChanged(const QString &arg1);
    void on_pushButton_2_clicked();

private:
    Ui::rone *ui;

    trains *t;
    timeanddistance *t1;
    percentage *p;
    profit *pr;
    simpleintrest *s1;
};

#endif // RONE_H
