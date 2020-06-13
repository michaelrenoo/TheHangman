#include "gamelogic.h"
#include "ui_gamewindow.h"

GameLogic::GameLogic(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GameLogic)
{
    ui->setupUi(this);
}

GameLogic::~GameLogic()
{
    delete ui;
}
