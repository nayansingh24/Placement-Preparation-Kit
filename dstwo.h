#ifndef DSTWO_H
#define DSTWO_H

#include <QDialog>

namespace Ui {
class dstwo;
}

class dstwo : public QDialog
{
    Q_OBJECT

public:
    explicit dstwo(QWidget *parent = 0);
    ~dstwo();

private slots:
    void on_pushButton_EDIT_clicked();
    void on_pushButton_RUN_clicked();

    void on_comboBox_currentTextChanged(const QString &arg1);


    void on_pushButton_clicked();

private:
    Ui::dstwo *ui;
    int i;
};

#endif // DSTWO_H
