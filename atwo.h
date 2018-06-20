#ifndef ATWO_H
#define ATWO_H

#include <QDialog>

namespace Ui {
class atwo;
}

class atwo : public QDialog
{
    Q_OBJECT

public:
    explicit atwo(QWidget *parent = 0);
    ~atwo();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_comboBox_currentIndexChanged(int index);

    void on_comboBox_currentTextChanged(const QString &arg1);
    void on_pushButton_3_clicked();

private:
    Ui::atwo *ui;
    int i;
};

#endif // ATWO_H
