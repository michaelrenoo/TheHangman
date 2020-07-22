#include "gamewindow.h"
#include "ui_gamewindow.h"
#include <QTime>
#include <string>
using namespace std;

// Declare all game objects
int max_guesses = 7;  // TODO: should this be constant - unchangeable?
int wrong_guesses = 0;  // The number increases as more wrong guesses are made
QString toBeGuessed;  // Word to be guessed
QString guessedWord;  // Word shown on the UI (the one with asterisks)
int score = 0;  // The score acquired
int consecutive = 0;  // The amount of time user guessed correctly after one another
QString alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";  // String to contain all letters in the alphabet


// What to do everytime the game is started
gamewindow::gamewindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gamewindow)
{
    ui->setupUi(this);
    this->getData();

    // Connect specific widgets to the functions
    QPushButton *letterButtons[26];  // Array to ref all pushButtons (from A to Z)
    for (int i = 0; i < alphabet.size(); ++i) {
        QCharRef c = alphabet[i];
        QString butName = "Button" + c;
                letterButtons[i] = gamewindow::findChild<QPushButton *>(butName);  // search for specific Widget by calling the name
                connect(letterButtons[i], SIGNAL(released()), this, SLOT(letterPressed()));
    }
    connect(ui->backButton, SIGNAL(released()), this, SLOT(on_backButton_clicked()));
    connect(ui->hintButton, SIGNAL(released()), this, SLOT(on_hintButton_clicked()));

    toBeGuessed = data.tempWord;
    guessedWord = change_game_word(toBeGuessed);
    ui->chanceValueLabel->setNum(max_guesses);
    ui->scoreValueLabel->setNum(score);
    ui->puzzleWordLabel->setText(guessedWord);  // Change to actual puzzle word
    //update_game_word(data.tempWord);
    startTimer();
}

gamewindow::~gamewindow()  // Deconstructor
{
    delete ui;
}

void gamewindow::startTimer()
{
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(countDown()));
    timer->start(1000);
}


// get data from two .txt files as the database
void gamewindow::getData()
{
    QString wordsDatabasePath = qApp->applicationDirPath(); // location of the file , assuming in application dir
    wordsDatabasePath.append("/WordsDatabase(TheHangman).txt");
    QFile wordsDatbaseFile(wordsDatabasePath);
    if (!wordsDatbaseFile.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this, "Database File", "file is not opened");
    }
    QTextStream inWord(&wordsDatbaseFile);
    QString word = inWord.readAll();
    data.addWord(word);
    wordsDatbaseFile.close();

    QString hintsDatabasePath = qApp->applicationDirPath(); //location of the file , assuming in application dir
    hintsDatabasePath.append("/HintsDatabase(TheHangman).txt");
    QFile hintsDatabaseFile (hintsDatabasePath);
    if (!hintsDatabaseFile.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this, "Database File", "file is not opened");
    }
    QTextStream inHint (&hintsDatabaseFile);
    QString hint = inHint.readAll();
    data.addHint(hint);
    hintsDatabaseFile.close();

    data.getRandomText();
    qDebug() << data.tempWord;
    timeNumber = 30 + data.tempWord.count()*10;
}

void gamewindow::countDown()
{

    QString timeString = QString::number(timeNumber / 60) + ":" + QString::number(timeNumber % 60);
//    QTime time = QTime::currentTime();
//    QString timeText = time.toString("hh : mm : ss");
    ui->timeLimitLabel->setText(timeString);
    timeNumber--;
    if(timeNumber == 0){
        QMessageBox::information(this, "Time's up", "You lose");
        gamewindow::~gamewindow();
    }
}

// TODO: Initialise all buttons and its functions in the UI
void gamewindow::letterPressed()
{
    QPushButton *button = (QPushButton *)sender();
    QString butValue = button->text();
    string input = butValue.toStdString();
    //ui->puzzleWordLabel->setText(butValue);
    check_word(input[0], toBeGuessed, guessedWord);
}

void gamewindow::on_hintButton_clicked()
{
    QMessageBox::information(this, "Hint", data.tempHint);
}

void gamewindow::on_backButton_clicked()
{
    gamewindow::~gamewindow();
}

void gamewindow::update_game_word(QString text)
{
    ui->puzzleWordLabel->setText(text);
}

// TODO: Code the game logic
QString gamewindow::change_game_word(QString text)
{
    return QString(text.length(), '*');  // Change the characters in the QString to *
}


// input = character from user, toGuess = puzzle word to be guessed, guessed = game word as seen on the label
void gamewindow::check_word(char input, QString toGuess, QString guessed)
{  // Inspiration: http://www.cppforschool.com/project/hangman-game-code.html
    int match = 0;
    for (int i = 0; i < toGuess.length(); i++) {
        // Check with the guessed word whether the letter is already matched
        if (input == guessed[i])
            QMessageBox::information(this, "Used letter", "The letter you gave has been entered before.");
        // Is the input correct?
        else if (input == toGuess[i])
        {
            guessed[i] = input;
            guessedWord = guessed;  // TODO: not use the global var?
            consecutive++;  // Increase the amount of consecutive guesses to gain higher score
            match++;  // To signal that the input is correct
            ui->puzzleWordLabel->setText(guessedWord);  // Update label
            is_finished(guessedWord);
            // TODO: Add score thingy
        }
        else {
            consecutive = 0;  // Bring back the amount of consecutive guesses to zero
            wrong_guesses++;
            max_guesses--;
        }
    }
}


void gamewindow::is_finished(QString guessed) {
    if (guessed == toBeGuessed) {
        QMessageBox::information(this, "Well Done!", "You guessed the word!\nReady to guess another?");
    }
}

// TODO: Code how the score is achieved


// TODO: Save the score in the high score

