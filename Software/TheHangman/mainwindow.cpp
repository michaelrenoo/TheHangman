#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_addWordsButton_clicked()
{
    // https://stackoverflow.com/questions/17988292/how-to-open-a-new-window-from-the-main-window-in-qt
    addwordsWindow = new addwords();
    addwordsWindow->showDatabase();
    addwordsWindow->show();
}

void MainWindow::on_playGameButton_clicked()
{
    game = new gamewindow();
    // game->getData();
    game->show();
}

void MainWindow::on_scoreboardButton_clicked()
{
    scoreboard->show();
}
