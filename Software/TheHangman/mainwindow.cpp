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

