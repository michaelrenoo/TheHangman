#include "addwords.h"
#include "ui_addwords.h"

addwords::addwords(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addwords)
{
    ui->setupUi(this);
}

addwords::~addwords()
{
    delete ui;
}
