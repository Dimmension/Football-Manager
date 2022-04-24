#include "choseteam1.h"
#include "ui_choseteam1.h"

ChoseTeam1::ChoseTeam1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChoseTeam1)
{
    ui->setupUi(this);
    liverpool = new Liverpool();
    connect(liverpool, &Liverpool::chose1Window, this, &ChoseTeam1::show);

    barselona = new Barselona();
    connect(barselona, &Barselona::chose1Window, this, &ChoseTeam1::show);

    manchester = new Manchester();
    connect(manchester, &Manchester::chose1Window, this, &ChoseTeam1::show);
}

ChoseTeam1::~ChoseTeam1()
{
    delete ui;
}

void ChoseTeam1::on_pushButton_4_clicked()
{
    this -> close();
    emit firstWindow();
}


void ChoseTeam1::on_pushButton_clicked()
{
    liverpool ->show();
    this ->close();
}


void ChoseTeam1::on_pushButton_3_clicked()
{
    barselona ->show();
    this ->close();
}


void ChoseTeam1::on_pushButton_2_clicked()
{
    manchester ->show();
    this ->close();
}

