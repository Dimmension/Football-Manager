#ifndef CHOSETEAM1_H
#define CHOSETEAM1_H

#include <QDialog>
#include <liverpool.h>
#include <manchester.h>
#include <barselona.h>

namespace Ui {
class ChoseTeam1;
}

class ChoseTeam1 : public QDialog
{
    Q_OBJECT

public:
    explicit ChoseTeam1(QWidget *parent = nullptr);
    ~ChoseTeam1();

signals:
    void firstWindow();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::ChoseTeam1 *ui;
    Liverpool *liverpool;
    Barselona *barselona;
    Manchester *manchester;

};

#endif // CHOSETEAM1_H
