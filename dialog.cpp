#include "dialog.h"
#include "ui_dialog.h"
#include "engone.h"
#include "rone.h"
#include "dsone.h"
#include"test.h"
#include "aone.h"
#include"login.h"
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}
void Dialog::on_pushButton_clicked()
{
    hide();
    dsone v;
    v.setModal(true);
    v.exec();
}

void Dialog::on_pushButton_2_clicked()
{
    hide();
    aone v;
    v.setModal(true);
    v.exec();
}

void Dialog::on_pushButton_4_clicked()
{
    hide();
    engone v;
    v.setModal(true);
    v.exec();
}

void Dialog::on_pushButton_3_clicked()
{
    hide();
    rone v;
    v.setModal(true);
    v.exec();
}


void Dialog::on_pushButton_5_clicked()
{
    hide();
    login v;
    v.setModal(true);
    v.exec();
}
