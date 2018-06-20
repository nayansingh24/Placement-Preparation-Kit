#include "profit.h"
#include "ui_profit.h"
#include<rone.h>
profit::profit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::profit)
{
    ui->setupUi(this);
}

profit::~profit()
{
    delete ui;
}

void profit::on_pushButton_clicked()
{
    hide();
       rone s;
       s.setModal(true);
       s.exec();
}
