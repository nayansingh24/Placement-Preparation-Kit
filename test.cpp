#include "test.h"
#include "ui_test.h"
#include"two.h"
#include"dialog.h"
#include"three.h"
#include"four.h"
#include"five.h"
test::test(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::test)
{
    ui->setupUi(this);
}

test::~test()
{
    delete ui;
}

void test::on_pushButton_clicked()
{
    hide();
    two sp;
    sp.setModal(true);
    sp.exec();
}

void test::on_pushButton_6_clicked()
{
    hide();
    Dialog sp;
    sp.setModal(true);
    sp.exec();
}

void test::on_pushButton_3_clicked()
{
    hide();
    three sp;
    sp.setModal(true);
    sp.exec();
}

void test::on_pushButton_4_clicked()
{
    hide();
    four sp;
    sp.setModal(true);
    sp.exec();
}

void test::on_pushButton_2_clicked()
{
    hide();
    five sp;
    sp.setModal(true);
    sp.exec();
}
