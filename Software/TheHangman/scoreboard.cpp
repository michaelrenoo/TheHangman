#include "scoreboard.h"
#include "ui_scoreboard.h"

scoreboard::scoreboard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::scoreboard)
{
    ui->setupUi(this);
    connect(ui->buttonBox, SIGNAL(released()), this, SLOT(on_buttonBox_clicked()));
}

scoreboard::~scoreboard()
{
    delete ui;
}

void scoreboard::on_buttonBox_clicked()
{
    this->close();
}
