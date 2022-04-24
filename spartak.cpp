#include "spartak.h"
#include "ui_spartak.h"

Spartak::Spartak(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Spartak)
{
    ui->setupUi(this);
}

Spartak::~Spartak()
{
    delete ui;
}

void Spartak::on_pushButton_clicked()
{
    this -> close();
    emit chose2Window();
}

