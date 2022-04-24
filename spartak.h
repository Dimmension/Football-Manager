#ifndef SPARTAK_H
#define SPARTAK_H

#include <QDialog>

namespace Ui {
class Spartak;
}

class Spartak : public QDialog
{
    Q_OBJECT

public:
    explicit Spartak(QWidget *parent = nullptr);
    ~Spartak();
signals:
    void chose2Window();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Spartak *ui;
};

#endif // SPARTAK_H
