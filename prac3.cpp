#include "prac3.h"
#include "ui_prac3.h"
#include"vocab.h"
prac3::prac3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::prac3)
{
    ui->setupUi(this);
}

prac3::~prac3()
{
    delete ui;
}

void prac3::on_pushButton_clicked()
{
    hide();
       vocab s;
       s.setModal(true);
       s.exec();
}
