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
    void letter_pressed();
    void on_hintButton_clicked();
    void on_backButton_clicked();
    void update_game_word(QString);
    QString change_game_word(QString);
    int check_word(char, QString);
    void is_finished(QString);
    void game_start();
    void game_over(int);
    void new_game();

private:
    Ui::gamewindow *ui;
    QTimer *timer;
    // Declare all game objects
    database data;
    vector<QString> words_before;
    int timeNumber;
    int const max_guesses = 7;
    int wrong_guesses;  // The number increases as more wrong guesses are made
    QString toBeGuessed;  // Word to be guessed
    QString guessedWord;  // Word shown on the UI (the one with asterisks)
    int score;  // The score acquired
    int consecutive;  // The amount of time user guessed correctly after one another
    QString alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";  // String to contain all letters in the alphabet
};

#endif // GAMEWINDOW_H
