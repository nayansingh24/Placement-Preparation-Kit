#include "login.h"
#include "ui_login.h"
#include"QtSql"
#include"QFileInfo"

#include <QDialog>
#include"QMessageBox"
#include<QMessageBox>
#include"test.h"
#include"signup.h"


#include"QDebug"
#define Path_to_DB "C:/Users/nayan/Desktop/sql/project.sqlite"


login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    QPixmap pix("C:\\Users\\nayan\\Desktop\\candidat.png");
    ui->label_5->setPixmap(pix);
    QFileInfo checkFile(Path_to_DB);
   if(checkFile.isFile())
   {

       if(connopen())
       {
           ui->label->setText("connected :)");
       }
   }
    else
     {
           ui->label->setText("Disconnected :(");
    }
}

login::~login()
{
    delete ui;
    qDebug()<<"Closing the connection to data base file";
    mydb.close();
}

void login::on_pushButton_clicked()
{
    QString username;
    QString password;
    username=ui->lineEdit->text();
    password=ui->lineEdit_2->text();
    if(username=="")
    {
        QMessageBox::critical(this,tr("Error "),tr("User name cant be empty"));

    }
    else if(password=="")
    {
        QMessageBox::critical(this,tr("Error "),tr("Password cant be empty"));
    }
    else
    {

    if(username=="test" && password=="test")
       {

    }
    else
    {


        if(!connopen())
        {
            qDebug()<<"Failed to open";
            return;
        }

        connopen();
        QSqlQuery qry;
        qry.prepare("select username,password from main where username=\'"+ username+ "\'and password=\'"+password+"\'");

        if(qry.exec())
        {

            if(qry.next())
            {
                ui->label->setText("Valid user name and password :)");
                QString msg ="username ="+qry.value(0).toString()+"\n"+
                            "password ="+qry.value(1).toString();
                connclose();
                hide();
                test u;
                u.setModal(true);
                u.exec();

                //QMessageBox::warning(this,"Login was successful",msg);
            }else{
               // ui->label->setText("Wrong user name password");
                QMessageBox::warning(this,"login","Wrong user name password");
            }
        }
    }
    }
}

void login::on_pushButton_3_clicked()
{
    ui->lineEdit->setText("");
    ui->lineEdit_2->setText("");
}

void login::on_pushButton_2_clicked()
{
    hide();
    signup s;
    s.setModal(true);
    s.exec();
}
