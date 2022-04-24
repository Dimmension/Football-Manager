#include "zenit.h"
#include "ui_zenit.h"

Zenit::Zenit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Zenit)
{
    ui->setupUi(this);
}

Zenit::~Zenit()
{
    delete ui;
}

void Zenit::on_pushButton_clicked()
{
    this -> close();
    emit chose2Window();
}

