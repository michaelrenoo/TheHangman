#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QDialog>
#include <QTimer>
#include <database.h>
#include <QDebug>
#include <QMessageBox>

namespace Ui {
class gamewindow;
}

class gamewindow : public QDialog
{
    Q_OBJECT

public:
    explicit gamewindow(QWidget *parent = nullptr);
    ~gamewindow();
    void startTimer();
    void getData();

public slots:
    void countDown();

private slots:  // Executed when signal is submitted
    void letterPressed();
    void on_hintButton_clicked();
    void on_backButton_clicked();
    void update_game_word(QString);
    QString change_game_word(QString);
    void check_word(char, QString, QString);

private:
    Ui::gamewindow *ui;
    QTimer *timer;
    database data;
    int timeNumber;
};

#endif // GAMEWINDOW_H
