#include "vocab.h"
#include "ui_vocab.h"
#include "prac3.h"
#include"engone.h"
vocab::vocab(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::vocab)
{
    ui->setupUi(this);
}

vocab::~vocab()
{
    delete ui;
}
void vocab::on_pushButton_clicked()
{
    hide();
    prac3 sp;
    sp.setModal(true);
    sp.exec();
}

void vocab::on_pushButton_2_clicked()
{
    hide();
       engone s;
       s.setModal(true);
       s.exec();
}
