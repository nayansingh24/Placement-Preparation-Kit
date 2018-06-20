#ifndef PERCENTAGE_H
#define PERCENTAGE_H

#include <QDialog>

namespace Ui {
class percentage;
}

class percentage : public QDialog
{
    Q_OBJECT

public:
    explicit percentage(QWidget *parent = 0);
    ~percentage();

private slots:
    void on_pushButton_clicked();

private:
    Ui::percentage *ui;
};

#endif // PERCENTAGE_H
