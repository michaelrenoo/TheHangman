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


///
/// \brief MainWindow::on_addWordsButton_clicked
/// Handler when the addWordsButton is clicked
///
void MainWindow::on_addWordsButton_clicked()
{
    // https://stackoverflow.com/questions/17988292/how-to-open-a-new-window-from-the-main-window-in-qt
    addwordsWindow = new addwords();
    addwordsWindow->showDatabase();
    addwordsWindow->show();
}


///
/// \brief MainWindow::on_playGameButton_clicked
/// Handler when the playGameButton is clicked
///
void MainWindow::on_playGameButton_clicked()
{
    game = new gamewindow();
    game->show();
}


///
/// \brief MainWindow::on_scoreboardButton_clicked
/// Handler when the scoreboardButton is clicked
///
void MainWindow::on_scoreboardButton_clicked()
{
    scoreboardWindow = new scoreboard();
    scoreboardWindow->show();
}
