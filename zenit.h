#ifndef ZENIT_H
#define ZENIT_H

#include <QDialog>

namespace Ui {
class Zenit;
}

class Zenit : public QDialog
{
    Q_OBJECT

public:
    explicit Zenit(QWidget *parent = nullptr);
    ~Zenit();
signals:
    void chose2Window();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Zenit *ui;
};

#endif // ZENIT_H
