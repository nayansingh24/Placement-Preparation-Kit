#include "dsone.h"
#include "ui_dsone.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include "dstwo.h"
#include"dialog.h"
dsone::dsone(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dsone)
{
    ui->setupUi(this);
    ui->comboBox_Array->addItem("Array:Introduction");
    ui->comboBox_Array->addItem("Array:Rotation");
    ui->comboBox_Array->addItem("Array:Searching");
    ui->comboBox_Array->addItem("Array:Sorting");
    ui->comboBox_List->addItem("Linked List: Introduction");
    ui->comboBox_List->addItem("Circular Link List");
    ui->comboBox_List->addItem("Doubly Link List");
    ui->comboBox_Stack->addItem("Stack Introduction");
    ui->comboBox_Stack->addItem("Design and Implementation Stack");
    ui->comboBox_Stack->addItem("Standard Problems Stack");
    ui->comboBox_Stack->addItem("Operations on Stack");
    ui->comboBox_Queue->addItem("Queue Introduction");
    ui->comboBox_Queue->addItem("Queue Implementation");
    ui->comboBox_Queue->addItem("Standard Problems Queue");
    //ui->comboBox_Queue->addItem("Operations on Queue");
    /*ui->comboBox_BinTree->addItem("Introduction Binary Tree");
    ui->comboBox_BinTree->addItem("Traversals Binary Tree");
    ui->comboBox_BinTree->addItem("Construction & Conversion Binary Tree");
    ui->comboBox_BinTree->addItem("Longest Common Ancestor");*/
    ui->comboBox_BST->addItem("Introduction Binary Search Tree");
    ui->comboBox_BST->addItem("Construction & Conversion BST");
    ui->comboBox_BST->addItem("Check and Smallest/Largest Element");
    //ui->comboBox_BST->addItem("Red Black Tree and Threaded Binary Tree");
    /*ui->comboBox_Heap->addItem("Binary Heap");
    ui->comboBox_Heap->addItem("Time Complexity of Binary Heap");
    ui->comboBox_Hash->addItem("Introduction Hashing");
    ui->comboBox_Hash->addItem("Easy Hashing");
    ui->comboBox_Hash->addItem("Intermidiate Hashing");
    ui->comboBox_Hash->addItem("Hard Hashing");*/
    ui->comboBox_Graph->addItem("Introduction Graph BFS and DFS");
    ui->comboBox_Graph->addItem("Graph Cycle");
    ui->comboBox_Graph->addItem("Topological Sorting");
    ui->comboBox_Graph->addItem("Minimum Spanning Tree");
    ui->comboBox_Graph->addItem("Connectivity");
    ui->comboBox_Graph->addItem("Shortest Paths");
    //ui->comboBox_Graph->addItem("Hard Problems");
    //ui->comboBox_Graph->addItem("Maximum Flow");
}

dsone::~dsone()
{
    delete ui;
}

void dsone::on_comboBox_Array_activated(const QString &arg1)
{
    QFile file("C:/Users/nayan/Desktop/New Text Document.txt");
    if(!file.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::warning(this,"title","file not found!");
    }
    //cout << "a";
    QTextStream out(&file);
    QString text = arg1;
    out << text;
    file.flush();
    file.close();
    hide();
    dstwo sp;
    sp.setModal(true);
    sp.exec();
}

void dsone::on_comboBox_List_activated(const QString &arg1)
{

    QFile file("C:/Users/nayan/Desktop/New Text Document.txt");
    if(!file.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::warning(this,"title","file not found!");
    }
    //cout << "a";
    QTextStream out(&file);
    QString text = arg1;
    out << text;
    file.flush();
    file.close();
    hide();
    dstwo sp;
    sp.setModal(true);
    sp.exec();
}

void dsone::on_comboBox_Stack_activated(const QString &arg1)
{

    QFile file("C:/Users/nayan/Desktop/New Text Document.txt");
    if(!file.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::warning(this,"title","file not found!");
    }
    //cout << "a";
    QTextStream out(&file);
    QString text = arg1;
    out << text;
    file.flush();
    file.close();
    hide();
    dstwo sp;
    sp.setModal(true);
    sp.exec();
}

void dsone::on_comboBox_Queue_activated(const QString &arg1)
{

    QFile file("C:/Users/nayan/Desktop/New Text Document.txt");
    if(!file.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::warning(this,"title","file not found!");
    }
    //cout << "a";
    QTextStream out(&file);
    QString text = arg1;
    out << text;
    file.flush();
    file.close();
    hide();
    dstwo sp;
    sp.setModal(true);
    sp.exec();
}

void dsone::on_comboBox_BinTree_activated(const QString &arg1)
{
   /* QFile file("C:/Users/Abhinav/Documents/listView/myfile.txt");
    if(!file.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::warning(this,"title","file not found!");
    }
    //cout << "a";
    QTextStream out(&file);
    QString text = arg1;
    out << text;
    file.flush();
    file.close();
    datacodewindow = new Datastrcode();
    datacodewindow->show();*/
}

void dsone::on_comboBox_BST_activated(const QString &arg1)
{
    QFile file("C:/Users/nayan/Desktop/New Text Document.txt");
    if(!file.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::warning(this,"title","file not found!");
    }
    //cout << "a";
    QTextStream out(&file);
    QString text = arg1;
    out << text;
    file.flush();
    file.close();
    hide();
    dstwo sp;
    sp.setModal(true);
    sp.exec();
}

void dsone::on_comboBox_Heap_activated(const QString &arg1)
{
    /*QFile file("C:/Users/Abhinav/Documents/listView/myfile.txt");
    if(!file.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::warning(this,"title","file not found!");
    }
    //cout << "a";
    QTextStream out(&file);
    QString text = arg1;
    out << text;
    file.flush();
    file.close();
    datacodewindow = new Datastrcode();
    datacodewindow->show();*/
}

void dsone::on_comboBox_Hash_activated(const QString &arg1)
{
    /*QFile file("C:/Users/Abhinav/Documents/listView/myfile.txt");
    if(!file.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::warning(this,"title","file not found!");
    }
    //cout << "a";
    QTextStream out(&file);
    QString text = arg1;
    out << text;
    file.flush();
    file.close();
    datacodewindow = new Datastrcode();
    datacodewindow->show();*/
}

void dsone::on_comboBox_Graph_activated(const QString &arg1)
{
    QFile file("C:/Users/nayan/Desktop/New Text Document.txt");
    if(!file.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::warning(this,"title","file not found!");
    }
    //cout << "a";
    QTextStream out(&file);
    QString text = arg1;
    out << text;
    file.flush();
    file.close();
    hide();
    dstwo sp;
    sp.setModal(true);
    sp.exec();
}

void dsone::on_pushButton_clicked()
{
    hide();
    Dialog sp;
    sp.setModal(true);
    sp.exec();
}
