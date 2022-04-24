#include "choseteam2.h"
#include "ui_choseteam2.h"

ChoseTeam2::ChoseTeam2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChoseTeam2)
{
    ui->setupUi(this);
    cska = new Cska();
    connect(cska, &Cska::chose2Window, this, &ChoseTeam2::show);

    zenit = new Zenit();
    connect(zenit, &Zenit::chose2Window, this, &ChoseTeam2::show);

    spartak = new Spartak();
    connect(spartak, &Spartak::chose2Window, this, &ChoseTeam2::show);
}

ChoseTeam2::~ChoseTeam2()
{
    delete ui;
}

void ChoseTeam2::on_pushButton_clicked()
{
    spartak ->show();
    this ->close();
}


void ChoseTeam2::on_pushButton_3_clicked()
{
    cska ->show();
    this ->close();
}


void ChoseTeam2::on_pushButton_2_clicked()
{
    zenit ->show();
    this ->close();
}


void ChoseTeam2::on_pushButton_4_clicked()
{
    this -> close();
    emit firstWindow();
}

