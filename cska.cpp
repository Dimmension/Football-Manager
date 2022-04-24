#include "cska.h"
#include "ui_cska.h"

Cska::Cska(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Cska)
{
    ui->setupUi(this);
}

Cska::~Cska()
{
    delete ui;
}

void Cska::on_pushButton_clicked()
{
    this -> close();
    emit chose2Window();
}

