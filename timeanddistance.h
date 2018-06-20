#ifndef TIMEANDDISTANCE_H
#define TIMEANDDISTANCE_H

#include <QDialog>

namespace Ui {
class timeanddistance;
}

class timeanddistance : public QDialog
{
    Q_OBJECT

public:
    explicit timeanddistance(QWidget *parent = 0);
    ~timeanddistance();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::timeanddistance *ui;
};

#endif // TIMEANDDISTANCE_H
