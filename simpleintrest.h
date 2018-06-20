#ifndef SIMPLEINTREST_H
#define SIMPLEINTREST_H

#include <QDialog>

namespace Ui {
class simpleintrest;
}

class simpleintrest : public QDialog
{
    Q_OBJECT

public:
    explicit simpleintrest(QWidget *parent = 0);
    ~simpleintrest();

private slots:
    void on_pushButton_clicked();

private:
    Ui::simpleintrest *ui;
};

#endif // SIMPLEINTREST_H
