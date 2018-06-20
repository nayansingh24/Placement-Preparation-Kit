#ifndef ENGONE_H
#define ENGONE_H

#include <QDialog>

namespace Ui {
class engone;
}

class engone : public QDialog
{
    Q_OBJECT

public:
    explicit engone(QWidget *parent = 0);
    ~engone();

private slots:
    void on_pushButton_clicked();

    void on_voice_clicked();

    void on_sentence_clicked();

    void on_vocab_clicked();

    void on_speech_clicked();


    void on_vocab_2_clicked();

private:
    Ui::engone *ui;
};

#endif // ENGONE_H
