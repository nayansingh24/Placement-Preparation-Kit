#include "voice.h"
#include "ui_voice.h"
#include "prac1.h"
#include"engone.h"
voice::voice(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::voice)
{
    ui->setupUi(this);
}

voice::~voice()
{
    delete ui;
}

void voice::on_pushButton_clicked()
{
    hide();
    prac1 sp;
    sp.setModal(true);
    sp.exec();
}

void voice::on_pushButton_2_clicked()
{
    hide();
       engone s;
       s.setModal(true);
       s.exec();
}
