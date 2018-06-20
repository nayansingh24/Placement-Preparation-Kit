#include "prac4.h"
#include "ui_prac4.h"
#include"speech.h"
prac4::prac4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::prac4)
{
    ui->setupUi(this);
}

prac4::~prac4()
{
    delete ui;
}

void prac4::on_pushButton_clicked()
{
    hide();
      speech s;
       s.setModal(true);
       s.exec();
}
