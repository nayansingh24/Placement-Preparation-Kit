#ifndef VOICE_H
#define VOICE_H

#include <QDialog>

namespace Ui {
class voice;
}

class voice : public QDialog
{
    Q_OBJECT

public:
    explicit voice(QWidget *parent = 0);
    ~voice();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::voice *ui;
};

#endif // VOICE_H
