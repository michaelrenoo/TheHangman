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

    // Declare all game objects
    int const max_guesses = 7;
    int wrong_guesses = 0;  // The number increases as more wrong guesses are made
    QString toBeGuessed;  // Word to be guessed
    QString guessedWord;  // Word shown on the UI (the one with asterisks)
    int score = 0;  // The score acquired
    int consecutive = 0;  // The amount of time user guessed correctly after one another
    QString alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";  // String to contain all letters in the alphabet


public slots:
    void countDown();

private slots:  // Executed when signal is submitted
    void letterPressed();
    void on_hintButton_clicked();
    void on_backButton_clicked();
    void update_game_word(QString);
    QString change_game_word(QString);
    void check_word(char, QString);
    void is_finished(QString);
    void game_over(int);

private:
    Ui::gamewindow *ui;
    QTimer *timer;
    database data;
    int timeNumber;
};

#endif // GAMEWINDOW_H
