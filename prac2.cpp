#include "prac2.h"
#include "ui_prac2.h"
#include"sentence.h"
prac2::prac2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::prac2)
{
    ui->setupUi(this);
}

prac2::~prac2()
{
    delete ui;
}

void prac2::on_pushButton_clicked()
{
    hide();
       sentence s;
       s.setModal(true);
       s.exec();
}
