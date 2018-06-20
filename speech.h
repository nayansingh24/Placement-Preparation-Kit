#ifndef SPEECH_H
#define SPEECH_H

#include <QDialog>

namespace Ui {
class speech;
}

class speech : public QDialog
{
    Q_OBJECT

public:
    explicit speech(QWidget *parent = 0);
    ~speech();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::speech *ui;
};

#endif // SPEECH_H
