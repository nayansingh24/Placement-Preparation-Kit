#include "time.h"
#include "ui_time.h"

time::time(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::time)
{
    ui->setupUi(this);
}

time::~time()
{
    delete ui;
}
