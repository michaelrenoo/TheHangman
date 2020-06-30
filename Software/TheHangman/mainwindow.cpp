#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // TODO: Declare all objects in the main window


    // TODO: Initialise and add functions to all buttons



}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_addWordsButton_clicked()
{
    addwordsWindow = new addwords(); //https://stackoverflow.com/questions/17988292/how-to-open-a-new-window-from-the-main-window-in-qt
    addwordsWindow->showDatabase();
    addwordsWindow->show();
}

void MainWindow::on_playGameButton_clicked()
{
    game = new gamewindow();
    game->getData();
    game->show();
}
