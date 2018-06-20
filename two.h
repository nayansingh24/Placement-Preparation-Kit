#ifndef TWO_H
#define TWO_H
#include"QtSql"
#include"QFileInfo"
#include"QDebug"
#include <QDialog>
#include"QMessageBox"
#include <QGroupBox>
#include<QGridLayout>
#include<QVBoxLayout>
#define Path_to_DB "C:/Users/nayan/Desktop/sql/project.sqlite"



namespace Ui {
class two;
}

class two : public QDialog
{
    Q_OBJECT
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
    explicit two(QWidget *parent = 0);
    ~two();

private slots:
    void on_comboBox_activated(const QString &arg1);

    //void on_groupBox_clicked();



    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::two *ui;

void on_pushButton_clicked(QString str);
};

#endif // TWO_H
