#include "rone.h"
#include "ui_rone.h"
#include<QFile>
#include<QTextStream.h>
#include<QMessageBox>
#include<QStringList>
#include"dialog.h"

#include <QTimer>
#include<trains.h>
#include<profit.h>

#include <QDialog>
#include<simpleintrest.h>
#include <time.h>
#include<percentage.h>
#include<timeanddistance.h>
rone::rone(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rone)
{
    ui->setupUi(this);
    /*QStringList list;
    list << "Problems on Trains" <<"Time and Distance";
    QFile("C:/Users/hp/Desktop/rubal.txt");
    if(!file().open(QFile::ReadOnly | QFile::Text))
{
        QMessageBox::warning(this,"Title","file not found");
    }
    QTextStream in(&file);
    QString text = in.readAll();
    int i = list.indexOf(text,0);
*/
    QPixmap bkgnd("C:/Users/nayan/Desktop/p.png");
    bkgnd = bkgnd.scaled(this->size(),Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background,bkgnd);
    this->setPalette(palette);
    ui->comboBox->addItem("CHOOSE FROM HERE");
    ui->comboBox->addItem("Problem on Trains");
    ui->comboBox->addItem("Time and Distance");
    //ui->comboBox->addItem("Height and Distance");
    //ui->comboBox->addItem("Time and Work");
    ui->comboBox->addItem("Simple Interest");
   // ui->comboBox->addItem("Compound Interest");
    ui->comboBox->addItem("Profit and Loss");
    //ui->comboBox->addItem("Partnership");
    ui->comboBox->addItem("Percentage");
    ui->comboBox->addItem("Problems on Ages");
    ui->comboBox->addItem("Calendar");
   // ui->comboBox->addItem("Calendar");
    ui->comboBox->addItem("Clock");
    ui->comboBox->addItem("Average");
    ui->comboBox->addItem("Area");
    ui->comboBox->addItem("Volume and Surface Area");
    ui->comboBox->addItem("Permutation and Combination");
    ui->comboBox->addItem("Numbers");
    ui->comboBox->addItem("Problems on Numbers");
    ui->comboBox->addItem("Problems on H.C.F and L.C.M");
    ui->comboBox->addItem("Decimal Fraction");
    ui->comboBox->addItem("Simplification");
    ui->comboBox->addItem("Square Root and Cube Root");
    ui->comboBox->addItem("Ratio and Proportion");
    ui->comboBox->addItem("Boats and Streams");
    ui->comboBox->addItem("Alligation or Mixture");
    ui->comboBox->addItem("Banker's Discount");
    ui->comboBox->addItem("Probability");
    ui->comboBox->addItem("Pipes and Cistern");
}

rone::~rone()
{
    delete ui;
}

void rone::on_pushButton_clicked()
{


    QFile file("C:/Users/nayan/Desktop/whatsapp war.txt");
    if(!file.open(QFile::WriteOnly | QFile::Text))
{
        QMessageBox::warning(this,"Title","file not found");
    }

    QTextStream out(&file);
    QString text = ui->comboBox->currentText();
    out << text;
    file.flush();
    file.close();
    //ui->label->setText(ui->comboBox->currentText());

    this->hide();
    trains t;
    t.setModal(true);
    t.exec();
    //s = new second();
    //s->show();
}





void rone::on_comboBox_currentTextChanged(const QString &arg1)
{

    QStringList list;
    list <<"" << "Problem on Trains" << "Time and Distance" << "Percentage" << "Simple Interest" << "Profit and Loss" ;
    int i = list.indexOf(arg1,0);
    switch(i)
    {
    case 1:
    {\
        this->hide();
        t = new trains();
      t->show();
        break;
    }
    case 2:
    {
        this->hide();
        t1 = new timeanddistance();
        t1->show();
        break;
    }
     case 3:
    {
        this->hide();
        p =new percentage();
        p->show();
        break;
    }
    case 4:
    {
        this->hide();
        s1 =new simpleintrest();
        s1->show();
        break;
    }
    case 5:
    {
        this->hide();
        pr =new profit();
        pr->show();
        break;
    }
    }


    QFile file("C:/Users/nayan/Desktop/whatsapp war.txt");
    if(!file.open(QFile::WriteOnly | QFile::Text))
{
        QMessageBox::warning(this,"Title","file not found");
    }

    QTextStream out(&file);
    QString text = ui->comboBox->currentText();
    out << text;
    file.flush();
    file.close();
}

void rone::on_pushButton_2_clicked()
{
    hide();
       Dialog s;
       s.setModal(true);
       s.exec();
}
