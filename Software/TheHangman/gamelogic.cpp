#include "gamelogic.h"
#include "ui_gamewindow.h"

GameLogic::GameLogic(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GameLogic)
{
    ui->setupUi(this);

    // TODO: Declare all game objects


    // TODO: Initialise all buttons and its functions in the UI


    // TODO: Code the game logic


    // TODO: Code how the score is achieved


    // TODO: Save the score in the high score
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()),this,SLOT(timeLimit()));
    data.getRandomText();
    timeNumber = 60000 + (data.tempWord.count() * 5000);
    timer->start(timeNumber);

}

GameLogic::~GameLogic()
{
    delete ui;
}

void GameLogic::timeLimit()
{

}
