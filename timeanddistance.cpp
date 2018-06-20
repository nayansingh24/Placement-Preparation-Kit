#include "timeanddistance.h"
#include "ui_timeanddistance.h"
#include<rone.h>
timeanddistance::timeanddistance(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::timeanddistance)
{
    ui->setupUi(this);
}

timeanddistance::~timeanddistance()
{
    delete ui;
}

void timeanddistance::on_pushButton_clicked()
{
    this->hide();
    rone t;
    t.setModal(true);
    t.exec();
}

void timeanddistance::on_pushButton_2_clicked()
{
    hide();
       rone s;
       s.setModal(true);
       s.exec();
}
