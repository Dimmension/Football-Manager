#ifndef CSKA_H
#define CSKA_H

#include <QDialog>

namespace Ui {
class Cska;
}

class Cska : public QDialog
{
    Q_OBJECT

public:
    explicit Cska(QWidget *parent = nullptr);
    ~Cska();
signals:
    void chose2Window();


private slots:
    void on_pushButton_clicked();

private:
    Ui::Cska *ui;
};

#endif // CSKA_H
