#include "choseteam3.h"
#include "ui_choseteam3.h"

ChoseTeam3::ChoseTeam3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChoseTeam3)
{
    ui->setupUi(this);
}

ChoseTeam3::~ChoseTeam3()
{
    delete ui;
}

void ChoseTeam3::on_pushButton_clicked()
{

}


void ChoseTeam3::on_pushButton_3_clicked()
{

}


void ChoseTeam3::on_pushButton_2_clicked()
{

}


void ChoseTeam3::on_pushButton_4_clicked()
{
    this -> close();
    emit firstWindow();
}

