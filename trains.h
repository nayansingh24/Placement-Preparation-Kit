#ifndef TRAINS_H
#define TRAINS_H

#include <QDialog>

namespace Ui {
class trains;
}

class trains : public QDialog
{
    Q_OBJECT

public:
    explicit trains(QWidget *parent = 0);
    ~trains();

private slots:
    void on_pushButton_clicked();

private:
    Ui::trains *ui;
};

#endif // TRAINS_H
