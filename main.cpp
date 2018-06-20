#include "dialog.h"
#include <QApplication>
#include<QSplashScreen>
#include<QTimer>
#include"dialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSplashScreen *splash=new QSplashScreen;
    splash->setPixmap(QPixmap("C:/Users/nayan/Desktop/logo.png"));
    splash->show();
    a.setStyleSheet("QDialog");

    Dialog w;
    QTimer::singleShot(5000,splash,SLOT(close()));
    QTimer::singleShot(5000,&w,SLOT(show()));


    return a.exec();
}
