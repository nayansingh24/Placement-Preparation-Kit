#ifndef DSONE_H
#define DSONE_H
#include"dstwo.h"
#include <QDialog>

namespace Ui {
class dsone;
}

class dsone : public QDialog
{
    Q_OBJECT

public:
    explicit dsone(QWidget *parent = 0);
    ~dsone();
private slots:

    void on_comboBox_Array_activated(const QString &arg1);

    void on_comboBox_List_activated(const QString &arg1);

    void on_comboBox_Stack_activated(const QString &arg1);

    void on_comboBox_Queue_activated(const QString &arg1);

    void on_comboBox_BinTree_activated(const QString &arg1);

    void on_comboBox_BST_activated(const QString &arg1);

    void on_comboBox_Heap_activated(const QString &arg1);

    void on_comboBox_Hash_activated(const QString &arg1);

    void on_comboBox_Graph_activated(const QString &arg1);
    void on_pushButton_clicked();

private:
    Ui::dsone *ui;
};

#endif // DSONE_H
