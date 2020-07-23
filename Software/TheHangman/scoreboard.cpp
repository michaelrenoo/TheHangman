#include "scoreboard.h"
#include "ui_scoreboard.h"

scoreboard::scoreboard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::scoreboard)
{
    ui->setupUi(this);
}

scoreboard::~scoreboard()
{
    delete ui;
}
