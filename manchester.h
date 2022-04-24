#ifndef MANCHESTER_H
#define MANCHESTER_H

#include <QDialog>

namespace Ui {
class Manchester;
}

class Manchester : public QDialog
{
    Q_OBJECT

public:
    explicit Manchester(QWidget *parent = nullptr);
    ~Manchester();
signals:
    void chose1Window();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Manchester *ui;
};

#endif // MANCHESTER_H
