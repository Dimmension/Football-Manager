#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <choseteam1.h>
#include <choseteam2.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
    ChoseTeam1 *sWindow;
    ChoseTeam2 *tWindow;
};
#endif // MAINWINDOW_H
