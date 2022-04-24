#ifndef CHOSETEAM2_H
#define CHOSETEAM2_H

#include <QDialog>
#include <cska.h>
#include <spartak.h>
#include <zenit.h>

namespace Ui {
class ChoseTeam2;
}

class ChoseTeam2 : public QDialog
{
    Q_OBJECT

public:
    explicit ChoseTeam2(QWidget *parent = nullptr);
    ~ChoseTeam2();

signals:
    void firstWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::ChoseTeam2 *ui;
    Spartak *spartak;
    Zenit *zenit;
    Cska *cska;
};

#endif // CHOSETEAM2_H
