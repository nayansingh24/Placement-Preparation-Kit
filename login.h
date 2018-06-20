#ifndef LOGIN_H
#define LOGIN_H
#include"QtSql"
#include"QFileInfo"
#include"QDebug"

#include"QMessageBox"

#define Path_to_DB "C:/Users/nayan/Desktop/sql/project.sqlite"

#include <QDialog>

namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT
public:
     QSqlDatabase mydb;
    void connclose()
    {
        mydb.close();
        mydb.removeDatabase(QSqlDatabase::defaultConnection );
    }

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
    explicit login(QWidget *parent = 0);
    ~login();

private slots:
   void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();
private:
    Ui::login *ui;
};

#endif // LOGIN_H
