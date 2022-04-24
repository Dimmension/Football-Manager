#ifndef BARSELONA_H
#define BARSELONA_H

#include <QDialog>

namespace Ui {
class Barselona;
}

class Barselona : public QDialog
{
    Q_OBJECT

public:
    explicit Barselona(QWidget *parent = nullptr);
    ~Barselona();

signals:
    void chose1Window();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Barselona *ui;
};

#endif // BARSELONA_H
