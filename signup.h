#ifndef SIGNUP_H
#define SIGNUP_H

#include <QDialog>

#include"login.h"
namespace Ui {
class signup;
}

class signup : public QDialog
{
    Q_OBJECT
public:
    QSqlDatabase mydb;
   /*void connclose()
   {
       mydb.close();
       mydb.removeDatabase(QSqlDatabase::defaultConnection );
   }*/
    bool connopen()
    {
        mydb=QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName(Path_to_DB);
        QFileInfo checkFile(Path_to_DB);
       if(checkFile.isFile())
       {

           if(mydb.open())
           {
               qDebug()<<("connected :)");
               return true;
           }
       }
        else
         {
               qDebug()<<("Disconnected :(");
               return false;
        }
    }
public:
     login conn;
    explicit signup(QWidget *parent = 0);
    ~signup();

private slots:
   void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    //void on_radioButton_2_clicked();

    //void on_radioButton_clicked();

private:
    Ui::signup *ui;
};

#endif // SIGNUP_H
