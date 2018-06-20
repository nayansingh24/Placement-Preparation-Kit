#include "percentage.h"
#include "ui_percentage.h"
#include<rone.h>
percentage::percentage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::percentage)
{
    ui->setupUi(this);
}

percentage::~percentage()
{
    delete ui;
}

void percentage::on_pushButton_clicked()
{
    hide();
       rone s;
       s.setModal(true);
       s.exec();
}
