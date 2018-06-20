#include "prac1.h"
#include "ui_prac1.h"
#include"voice.h"
prac1::prac1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::prac1)
{
    ui->setupUi(this);
}

prac1::~prac1()
{
    delete ui;
}

void prac1::on_pushButton_clicked()
{
    hide();
       voice s;
       s.setModal(true);
       s.exec();
}
