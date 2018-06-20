#include "sentence.h"
#include "ui_sentence.h"
#include "prac2.h"
#include"engone.h"
sentence::sentence(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sentence)
{
    ui->setupUi(this);
}

sentence::~sentence()
{
    delete ui;
}
void sentence::on_listView_activated(const QModelIndex &index)
{

}
void sentence::on_pushButton_clicked()
{
    hide();
    prac2 sp;
    sp.setModal(true);
    sp.exec();
}

void sentence::on_pushButton_2_clicked()
{
    hide();
       engone s;
       s.setModal(true);
       s.exec();
}
