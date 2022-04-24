#include "barselona.h"
#include "ui_barselona.h"

Barselona::Barselona(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Barselona)
{
    ui->setupUi(this);
}

Barselona::~Barselona()
{
    delete ui;
}

void Barselona::on_pushButton_clicked()
{
    this -> close();
    emit chose1Window();
}

