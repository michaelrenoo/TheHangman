#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <addwords.h>
#include <database.h>
#include <gamewindow.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_addWordsButton_clicked();

    void on_playGameButton_clicked();

private:
    Ui::MainWindow *ui;
    addwords *addwordsWindow;
    gamewindow *game;
};
#endif // MAINWINDOW_H
