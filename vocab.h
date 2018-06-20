#ifndef VOCAB_H
#define VOCAB_H

#include <QDialog>

namespace Ui {
class vocab;
}

class vocab : public QDialog
{
    Q_OBJECT

public:
    explicit vocab(QWidget *parent = 0);
    ~vocab();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::vocab *ui;
};

#endif // VOCAB_H
