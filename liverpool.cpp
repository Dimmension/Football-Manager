#include "liverpool.h"
#include "ui_liverpool.h"

Liverpool::Liverpool(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Liverpool)
{
    ui->setupUi(this);
}

Liverpool::~Liverpool()
{
    delete ui;
}

void Liverpool::on_pushButton_clicked()
{
    this -> close();
    emit chose1Window();
}

