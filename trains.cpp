#include "trains.h"
#include "ui_trains.h"
#include<QFile>
#include<QTextStream.h>
#include<QMessageBox>
#include<QStringList>
#include<QDesktopServices>
#include<QUrl>
#include<rone.h>
trains::trains(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::trains)
{
    ui->setupUi(this);
    //QPixmap pix("C:\\Users\\hp\\Desktop\\t.png");
    //ui->label_pix->setPixmap(pix);
    QStringList list;
        list << "Problems on Trains" <<"Time and Distance";
        QFile file("C:/Users/hp/Desktop/rubal.txt");
        if(!file.open(QFile::ReadOnly | QFile::Text))
    {
            QMessageBox::warning(this,"Title","file not found");
        }
        QTextStream in(&file);
        QString text = in.readAll();
        //int i = list.indexOf(text,0);
        //ui->label_3->setText(text);
        file.flush();
        file.close();
}

trains::~trains()
{
    delete ui;
}

void trains::on_pushButton_clicked()
{
    hide();
       rone s;
       s.setModal(true);
       s.exec();
}
