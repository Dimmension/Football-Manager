#ifndef LIVERPOOL_H
#define LIVERPOOL_H

#include <QDialog>

namespace Ui {
class Liverpool;
}

class Liverpool : public QDialog
{
    Q_OBJECT

public:
    explicit Liverpool(QWidget *parent = nullptr);
    ~Liverpool();

signals:
    void chose1Window();


private slots:
    void on_pushButton_clicked();

private:
    Ui::Liverpool *ui;
};

#endif // LIVERPOOL_H
