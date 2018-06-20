#include "signup.h"
#include "ui_signup.h"

#include"login.h"
#define Path_to_DB "C:/Users/nayan/Desktop/sql/project.sqlite"
#include"QMessageBox"
signup::signup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signup)
{
    ui->setupUi(this);
    login conn;
               QFileInfo checkFile(Path_to_DB);
            if(checkFile.isFile())
            {

                if(conn.connopen())
                {
                    ui->label_5->setText("connected :)");
                }
            }
             else
              {
                    ui->label_5->setText("Disconnected :(");
             }
}

signup::~signup()
{
    delete ui;
}


void signup::on_pushButton_2_clicked()
{
    login conn;
    QString username;
    QString password;
    QString name;
    QString age;
    QString Gender;

    name=ui->lineEdit->text();
    username=ui->lineEdit_2->text();
    password=ui->lineEdit_3->text();
        age=ui->lineEdit_5->text();

        if(name=="")
    {
        QMessageBox::critical(this,tr("Error "),tr("Please enter the name "));
    }
    else if(username=="")
    {
        QMessageBox::critical(this,tr("Error "),tr("Please enter the User Name"));

    }
    else if(password=="")
    {
        QMessageBox::critical(this,tr("Error "),tr("Please enter the Password "));

    }

    else if(age=="")
    {
        QMessageBox::critical(this,tr("Error "),tr("Please enter the age "));

    }
    else
    {


    if(!conn.connopen())
    {
        qDebug()<<"Failed to open";
        return;
    }
    connopen();

    if(ui->radioButton->isChecked())
    {
        Gender='M';
    }
    if(ui->radioButton_2->isChecked())
    {
        Gender='F';
    }
    QSqlQuery qry;
    qry.prepare("insert into main(name,username,password,age,Gender) values(?,?,?,?,?)");
    qry.addBindValue(name);
    qry.addBindValue(username);
    qry.addBindValue(password);
    qry.addBindValue(age);
    qry.addBindValue(Gender);
    if(qry.exec())
    {
        QMessageBox::critical(this,tr("Save "),tr("Your data is saved"));
        conn.connclose();
        hide();
        login lo;
        lo.setModal(true);
        lo.exec();
    }
    else
    {
        QMessageBox::critical(this,tr("error::"),qry.lastError().text());
    }
    }
}

void signup::on_pushButton_3_clicked()
{

    ui->lineEdit->setText("");
    ui->lineEdit_2->setText("");

    ui->lineEdit_3->setText("");

    ui->lineEdit_5->setText("");
}


void signup::on_pushButton_clicked()
{
    hide();
    login s;
    s.setModal(true);\
    s.exec();
}
