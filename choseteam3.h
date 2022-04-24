#ifndef CHOSETEAM3_H
#define CHOSETEAM3_H

#include <QDialog>

namespace Ui {
class ChoseTeam3;
}

class ChoseTeam3 : public QDialog
{
    Q_OBJECT

public:
    explicit ChoseTeam3(QWidget *parent = nullptr);
    ~ChoseTeam3();


signals:
    void firstWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::ChoseTeam3 *ui;
};

#endif // CHOSETEAM3_H
