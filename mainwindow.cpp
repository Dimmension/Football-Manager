#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent):
      QMainWindow(parent),
      ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    sWindow = new ChoseTeam1();
    connect(sWindow, &ChoseTeam1::firstWindow, this, &MainWindow::show);

    tWindow = new ChoseTeam2();
    connect(tWindow, &ChoseTeam2::firstWindow, this, &MainWindow::show);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    sWindow -> show();
    this -> close();
}


void MainWindow::on_pushButton_2_clicked()
{
    tWindow -> show();
    this -> close();
}


void MainWindow::on_pushButton_3_clicked()
{
}

