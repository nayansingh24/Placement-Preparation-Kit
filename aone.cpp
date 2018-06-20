#include "aone.h"
#include "ui_aone.h"
#include"atwo.h"
#include"dialog.h"
#include <iostream>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
using namespace std;
using namespace std;
int strIndex;
aone::aone(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::aone)
{
    ui->setupUi(this);
    ui->listWidget->addItem("Analysis of Algorithms");
    ui->listWidget->addItem("Searching and Sorting");
    ui->listWidget->addItem("Greedy Algorithms");
    ui->listWidget->addItem("Dynamic Programming");
    ui->listWidget->addItem("Pattern Searching");
    ui->listWidget->addItem("Backtracking");
    ui->listWidget->addItem("Divide and Conquer");
    ui->listWidget->addItem("Bit Algorithms");

    ui->listWidget->addItem("Branch and Bound");
}

aone::~aone()
{
    delete ui;
}

void aone::on_pushButton_clicked()
{
    //hide();
    QFile file("C:/Users/nayan/Desktop/New Text Document.txt");
    if(!file.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::warning(this,"title","file not found!");
    }

    QTextStream out(&file);
    QString text = ui->listWidget->currentItem()->text();
    out << text;
    file.flush();
    file.close();
    hide();
    atwo a;
    a.setModal(true);
    a.exec();
}


void aone::on_pushButton_2_clicked()
{
    hide();
    Dialog d;
    d.setModal(true);
    d.exec();
}
