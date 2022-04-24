#include "manchester.h"
#include "ui_manchester.h"

Manchester::Manchester(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Manchester)
{
    ui->setupUi(this);
}

Manchester::~Manchester()
{
    delete ui;
}

void Manchester::on_pushButton_clicked()
{
    this -> close();
    emit chose1Window();
}

