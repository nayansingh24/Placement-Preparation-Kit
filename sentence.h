#ifndef SENTENCE_H
#define SENTENCE_H

#include <QDialog>

namespace Ui {
class sentence;
}

class sentence : public QDialog
{
    Q_OBJECT

public:
    explicit sentence(QWidget *parent = 0);
    ~sentence();
private slots:
    void on_listView_activated(const QModelIndex &index);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::sentence *ui;
};

#endif // SENTENCE_H
