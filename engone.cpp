#include "engone.h"
#include "ui_engone.h"
#include "voice.h"
#include"dialog.h"
#include"sentence.h"
#include"vocab.h"
#include"speech.h"

engone::engone(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::engone)
{
    ui->setupUi(this);
    QPixmap pix("C:\\Users\\nayan\\Desktop\\image1.png");
    ui->label_2->setPixmap(pix);
}

engone::~engone()
{
    delete ui;
}
void engone::on_voice_clicked()
{
    hide();
    voice v;
    v.setModal(true);
    v.exec();
}

void engone::on_sentence_clicked()
{
    hide();
    sentence s;
    s.setModal(true);
    s.exec();
}

void engone::on_vocab_clicked()
{
    hide();
    vocab vocab;
    vocab.setModal(true);
    vocab.exec();
}

void engone::on_speech_clicked()
{
    hide();
    speech sp;
    sp.setModal(true);
    sp.exec();
}

void engone::on_vocab_2_clicked()
{
    hide();
    Dialog sp;
    sp.setModal(true);
    sp.exec();
}
