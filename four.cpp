#include "two.h"
#include "four.h"
#include "ui_four.h"
#include<iostream>
#include<QFile>
#include"QDebug"
#include"test.h"
#define Path_to_DB "C:/Users/nayan/Desktop/sql/project.sqlite"
#include<QTextStream>
#include<QMessageBox>
#include<QDesktopServices>
#include <QRadioButton>
#include<QGridLayout>
#include<QGroupBox>
#include<QVBoxLayout>
using namespace std;

four::four(QWidget *parent) :
    QDialog(parent),

    ui(new Ui::four)
    {
    ui->setupUi(this);

    ui->comboBox->addItem("Q1");
    ui->comboBox->addItem("Q2");
    ui->comboBox->addItem("Q3");
    ui->comboBox->addItem("Q4");
    ui->comboBox->addItem("Q5");
    ui->comboBox->addItem("Q6");
    ui->comboBox->addItem("Q7");
    ui->comboBox->addItem("Q8");
    ui->comboBox->addItem("Q9");
    ui->comboBox->addItem("Q10");

}

four::~four()
{
    delete ui;
}


void four::on_comboBox_activated(const QString &arg1)
{
     QString text = ui->comboBox->currentText();

if(text=="Q1")
{
             connopen();
             QSqlQuery qry;
             qry.prepare("select ques from dia3 where qno=\'"+ text+"\'");

             if(qry.exec())
             {
                 QString c=qry.value(0).toString();
                 ui->textBrowser->setText(c);
                 connclose();
             }
                if(qry.next())
                 {
                     QString c=qry.value(0).toString();
                     ui->textBrowser->setText(c);
                     connclose();
                 }
               on_pushButton_clicked(text);
}
if(text=="Q2")
{
             connopen();
             QSqlQuery qry;
             qry.prepare("select ques from dia3 where qno=\'"+ text+"\'");

             if(qry.exec())
             {
                 QString c=qry.value(0).toString();
                 ui->textBrowser->setText(c);
                 connclose();
             }
                if(qry.next())
                 {
                     QString c=qry.value(0).toString();
                     ui->textBrowser->setText(c);
                     connclose();
                 }
                on_pushButton_clicked(text);
}
if(text=="Q3")
{
             connopen();
             QSqlQuery qry;
             qry.prepare("select ques from dia3 where qno=\'"+ text+"\'");

             if(qry.exec())
             {
                 QString c=qry.value(0).toString();
                 ui->textBrowser->setText(c);
                 connclose();
             }
                if(qry.next())
                 {
                     QString c=qry.value(0).toString();
                     ui->textBrowser->setText(c);
                     connclose();
                 }
                on_pushButton_clicked(text);
}
if(text=="Q4")
{
             connopen();
             QSqlQuery qry;
             qry.prepare("select ques from dia3 where qno=\'"+ text+"\'");

             if(qry.exec())
             {
                 QString c=qry.value(0).toString();
                 ui->textBrowser->setText(c);
                 connclose();
             }
                if(qry.next())
                 {
                     QString c=qry.value(0).toString();
                     ui->textBrowser->setText(c);
                     connclose();
                 }
                on_pushButton_clicked(text);
}
if(text=="Q5")
{
             connopen();
             QSqlQuery qry;
             qry.prepare("select ques from dia3 where qno=\'"+ text+"\'");

             if(qry.exec())
             {
                 QString c=qry.value(0).toString();
                 ui->textBrowser->setText(c);
                 connclose();
             }
                if(qry.next())
                 {
                     QString c=qry.value(0).toString();
                     ui->textBrowser->setText(c);
                     connclose();
                 }
}
on_pushButton_clicked(text);


if(text=="Q6")
{
             connopen();
             QSqlQuery qry;
             qry.prepare("select ques from dia3 where qno=\'"+ text+"\'");

             if(qry.exec())
             {
                 QString c=qry.value(0).toString();
                 ui->textBrowser->setText(c);
                 connclose();
             }
                if(qry.next())
                 {
                     QString c=qry.value(0).toString();
                     ui->textBrowser->setText(c);
                     connclose();
                 }

on_pushButton_clicked(text);
}
if(text=="Q7")
{
             connopen();
             QSqlQuery qry;
             qry.prepare("select ques from dia3 where qno=\'"+ text+"\'");

             if(qry.exec())
             {
                 QString c=qry.value(0).toString();
                 ui->textBrowser->setText(c);
                 connclose();
             }
                if(qry.next())
                 {
                     QString c=qry.value(0).toString();
                     ui->textBrowser->setText(c);
                     connclose();
                 }

on_pushButton_clicked(text);
}
if(text=="Q8")
{
             connopen();
             QSqlQuery qry;
             qry.prepare("select ques from dia3 where qno=\'"+ text+"\'");

             if(qry.exec())
             {
                 QString c=qry.value(0).toString();
                 ui->textBrowser->setText(c);
                 connclose();
             }
                if(qry.next())
                 {
                     QString c=qry.value(0).toString();
                     ui->textBrowser->setText(c);
                     connclose();
                 }

on_pushButton_clicked(text);
}
if(text=="Q9")
{
             connopen();
             QSqlQuery qry;
             qry.prepare("select ques from dia3 where qno=\'"+ text+"\'");

             if(qry.exec())
             {
                 QString c=qry.value(0).toString();
                 ui->textBrowser->setText(c);
                 connclose();
             }
                if(qry.next())
                 {
                     QString c=qry.value(0).toString();
                     ui->textBrowser->setText(c);
                     connclose();
                 }

on_pushButton_clicked(text);
}
if(text=="Q10")
{
             connopen();
             QSqlQuery qry;
             qry.prepare("select ques from dia3 where qno=\'"+ text+"\'");

             if(qry.exec())
             {
                 QString c=qry.value(0).toString();
                 ui->textBrowser->setText(c);
                 connclose();
             }
                if(qry.next())
                 {
                     QString c=qry.value(0).toString();
                     ui->textBrowser->setText(c);
                     connclose();
                 }

on_pushButton_clicked(text);
}
}

void four::on_pushButton_clicked(QString sty)
{
    QGroupBox *groupBox = new QGroupBox();

    if(sty=="Q1")
    {
        connopen();

        QSqlQuery qr;
        qr.prepare("select one,two,three,four,ans from dia3 where qno=\'"+ sty+"\'");

        if(qr.exec())
        {
            while(qr.next())
            {
                ui->radioButton->setText(qr.value(0).toString());
                ui->radioButton_2->setText(qr.value(1).toString());
                ui->radioButton_3->setText(qr.value(2).toString());
                ui->radioButton_4->setText(qr.value(3).toString());

            }}}
    if(sty=="Q2")
    {
        connopen();

        QSqlQuery qr;
        qr.prepare("select one,two,three,four,ans from dia3 where qno=\'"+ sty+"\'");

        if(qr.exec())
        {
            while(qr.next())
            {

                ui->radioButton->setText(qr.value(0).toString());
                ui->radioButton_2->setText(qr.value(1).toString());
                ui->radioButton_3->setText(qr.value(2).toString());
                ui->radioButton_4->setText(qr.value(3).toString());

            }}}
    if(sty=="Q3")
    {
        connopen();

        QSqlQuery qr;
        qr.prepare("select one,two,three,four,ans from dia3 where qno=\'"+ sty+"\'");

        if(qr.exec())
        {
            while(qr.next())
            {

                ui->radioButton->setText(qr.value(0).toString());
                ui->radioButton_2->setText(qr.value(1).toString());
                ui->radioButton_3->setText(qr.value(2).toString());
                ui->radioButton_4->setText(qr.value(3).toString());

            }}}
    if(sty=="Q4")
    {
        connopen();
         //ui->label->setText("sss");
        QSqlQuery qr;
        qr.prepare("select one,two,three,four,ans from dia3 where qno=\'"+ sty+"\'");

        if(qr.exec())
        {
            while(qr.next())
            {

                ui->radioButton->setText(qr.value(0).toString());
                ui->radioButton_2->setText(qr.value(1).toString());
                ui->radioButton_3->setText(qr.value(2).toString());
                ui->radioButton_4->setText(qr.value(3).toString());

            }}}
    if(sty=="Q5")
    {
        connopen();

        QSqlQuery qr;
        qr.prepare("select one,two,three,four,ans from dia3 where qno=\'"+ sty+"\'");

        if(qr.exec())
        {
            while(qr.next())
            {

                ui->radioButton->setText(qr.value(0).toString());
                ui->radioButton_2->setText(qr.value(1).toString());
                ui->radioButton_3->setText(qr.value(2).toString());
                ui->radioButton_4->setText(qr.value(3).toString());
  }}}
    if(sty=="Q6")
    {
        connopen();

        QSqlQuery qr;
        qr.prepare("select one,two,three,four,ans from dia3 where qno=\'"+ sty+"\'");

        if(qr.exec())
        {
            while(qr.next())
            {

                ui->radioButton->setText(qr.value(0).toString());
                ui->radioButton_2->setText(qr.value(1).toString());
                ui->radioButton_3->setText(qr.value(2).toString());
                ui->radioButton_4->setText(qr.value(3).toString());

            }}}
    if(sty=="Q7")
    {
        connopen();

        QSqlQuery qr;
        qr.prepare("select one,two,three,four,ans from dia3 where qno=\'"+ sty+"\'");

        if(qr.exec())
        {
            while(qr.next())
            {

                ui->radioButton->setText(qr.value(0).toString());
                ui->radioButton_2->setText(qr.value(1).toString());
                ui->radioButton_3->setText(qr.value(2).toString());
                ui->radioButton_4->setText(qr.value(3).toString());

            }}}
    if(sty=="Q8")
    {
        connopen();

        QSqlQuery qr;
        qr.prepare("select one,two,three,four,ans from dia3 where qno=\'"+ sty+"\'");

        if(qr.exec())
        {
            while(qr.next())
            {

                ui->radioButton->setText(qr.value(0).toString());
                ui->radioButton_2->setText(qr.value(1).toString());
                ui->radioButton_3->setText(qr.value(2).toString());
                ui->radioButton_4->setText(qr.value(3).toString());

            }}}
    if(sty=="Q9")
    {
        connopen();

        QSqlQuery qr;
        qr.prepare("select one,two,three,four,ans from dia3 where qno=\'"+ sty+"\'");

        if(qr.exec())
        {
            while(qr.next())
            {

                ui->radioButton->setText(qr.value(0).toString());
                ui->radioButton_2->setText(qr.value(1).toString());
                ui->radioButton_3->setText(qr.value(2).toString());
                ui->radioButton_4->setText(qr.value(3).toString());
    }}}
    if(sty=="Q10")
    {
        connopen();

        QSqlQuery qr;
        qr.prepare("select one,two,three,four,ans from dia3 where qno=\'"+ sty+"\'");

        if(qr.exec())
        {
            while(qr.next())
            {
                ui->radioButton->setText(qr.value(0).toString());
                ui->radioButton_2->setText(qr.value(1).toString());
                ui->radioButton_3->setText(qr.value(2).toString());
                ui->radioButton_4->setText(qr.value(3).toString());
            }}}

}

void four::on_pushButton_2_clicked()
{
     QString teext = ui->comboBox->currentText();
     connopen();

     QSqlQuery qr;
     qr.prepare("select one,two,three,four,ans from dia3 where qno=\'"+ teext+"\'");

     if(qr.exec())
     {
         while(qr.next())
         {
             if(ui->radioButton->isChecked())
             {

                 if(qr.value(0).toString()==qr.value(4).toString())
                 {
                     QMessageBox::warning(this,"prompt","right ans");
                 }
                 else
                 {
                             QMessageBox::warning(this,"prompt","wrong ans");
                 }
             }
             if(ui->radioButton_2->isChecked())
             {

                 if(qr.value(1).toString()==qr.value(4).toString())
                 {
                     QMessageBox::warning(this,"prompt","right ans");
                 }
                 else
                 {
                             QMessageBox::warning(this,"prompt","wrong ans");
                 }
             }
             if(ui->radioButton_3->isChecked())
             {

                 if(qr.value(2).toString()==qr.value(4).toString())
                 {
                     QMessageBox::warning(this,"prompt","right ans");
                 }
                 else
                 {
                             QMessageBox::warning(this,"prompt","wrong ans");
                 }
             }
             if(ui->radioButton_4->isChecked())
             {

                 if(qr.value(3).toString()==qr.value(4).toString())
                 {
                     QMessageBox::warning(this,"prompt","right ans");
                 }
                 else
                 {
                             QMessageBox::warning(this,"prompt","wrong ans");
                 }
             }

         }

                connclose();
    }
}

void four::on_pushButton_clicked()
{
    hide();
       test s;
       s.setModal(true);
       s.exec();
}
