#ifndef PROFIT_H
#define PROFIT_H

#include <QDialog>

namespace Ui {
class profit;
}

class profit : public QDialog
{
    Q_OBJECT

public:
    explicit profit(QWidget *parent = 0);
    ~profit();

private slots:
    void on_pushButton_clicked();

private:
    Ui::profit *ui;
};

#endif // PROFIT_H
