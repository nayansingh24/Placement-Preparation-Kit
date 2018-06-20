#include "speech.h"
#include "ui_speech.h"
#include "prac4.h"
#include"engone.h"
speech::speech(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::speech)
{
    ui->setupUi(this);
    QPixmap pix("C:\\Users\\nayan\\Desktop\\image4.jpg");
    ui->label_2->setPixmap(pix);
}

speech::~speech()
{
    delete ui;
}
void speech::on_pushButton_clicked()
{
    hide();
    prac4 sp;
    sp.setModal(true);
    sp.exec();
}

void speech::on_pushButton_2_clicked()
{
    hide();
       engone s;
       s.setModal(true);
       s.exec();
}
