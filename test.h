#ifndef TEST_H
#define TEST_H

#include <QDialog>

namespace Ui {
class test;
}

class test : public QDialog
{
    Q_OBJECT

public:
    explicit test(QWidget *parent = 0);
    ~test();
private slots:
    void on_pushButton_clicked();
    void on_pushButton_6_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::test *ui;
};

#endif // TEST_H
