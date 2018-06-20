#include "simpleintrest.h"
#include "ui_simpleintrest.h"
#include<rone.h>
simpleintrest::simpleintrest(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::simpleintrest)
{
    ui->setupUi(this);
}

simpleintrest::~simpleintrest()
{
    delete ui;
}

void simpleintrest::on_pushButton_clicked()
{
    hide();
       rone s;
       s.setModal(true);
       s.exec();
}
