#include "gamewindow.h"
#include "ui_gamewindow.h"
#include <QTime>
#include <string>
using namespace std;


// What to do everytime the game is started
gamewindow::gamewindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gamewindow)
{
    ui->setupUi(this);
    this->getData();  // To fill database with data from .txt data

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
    score = data.tempScore;
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


// Timer count down
void gamewindow::countDown()
{
    QString timeString = QString::number(timeNumber / 60) + ":" + QString::number(timeNumber % 60);
//    QTime time = QTime::currentTime();
//    QString timeText = time.toString("hh : mm : ss");
    ui->timeLimitLabel->setText(timeString);
    timeNumber--;
    if(timeNumber == 0){
        QMessageBox::information(this, "Game Over!", "Time's Up!\nBetter hurry up next time.");
        gamewindow::~gamewindow();
    }
}

// Initialise all buttons and its functions in the UI
void gamewindow::letterPressed()
{
    QPushButton *button = (QPushButton *)sender();
    QString butValue = button->text();
    string input = butValue.toStdString();
    check_word(input[0], toBeGuessed);
}

void gamewindow::on_hintButton_clicked()
{
    QMessageBox::information(this, "Hint", data.tempHint);
}

void gamewindow::on_backButton_clicked()
{
    gamewindow::~gamewindow();
}

// TODO: do we need this?
void gamewindow::update_game_word(QString text)
{
    ui->puzzleWordLabel->setText(text);
}


// Game logic
// Change the characters in the QString to *
QString gamewindow::change_game_word(QString text)
{
    QString result = "";
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == " ") {
            result.append(" ");
        }
        else {
            result.append("*");
        }
    }
    return result;
    //return QString(text.length(), '*');
}


// input = character from user, toGuess = puzzle word to be guessed, guessed = game word as seen on the label
void gamewindow::check_word(char input, QString toGuess)
{  // Inspiration: http://www.cppforschool.com/project/hangman-game-code.html
    int match = 0;
    int max_limit = max_guesses;
    for (int i = 0; i < toGuess.length(); i++) {
        // Check with the guessed word whether the letter is already matched
        if (input == guessedWord[i])
            QMessageBox::information(this, "Used letter", "The letter you gave has been entered before.");

        // Is the input correct?
        else if (input == toGuess[i])  // When yes
        {
            guessedWord[i] = input;
            consecutive += 1;  // Increase the amount of consecutive guesses to gain higher score
            match++;  // To signal that the input is correct
            ui->puzzleWordLabel->setText(guessedWord);  // Update label
            // Scoring
            score = data.scoring(consecutive);
            ui->scoreValueLabel->setNum(consecutive);  // consecutive stays the same!!!!!
            is_finished(guessedWord);  // Check whether all the letters are guessed
        }

        else {  // When no
            consecutive = 0;  // Bring back the amount of consecutive guesses to zero
            wrong_guesses += 1;
            max_limit -= 1;
            ui->chanceValueLabel->setNum(max_limit);  // Readjust chance limit
            game_over(wrong_guesses);
        }
    }
}


void gamewindow::is_finished(QString guessed) {  // Inspiration: https://stackoverflow.com/questions/13111669/yes-no-message-box-using-qmessagebox
    QMessageBox::StandardButton box;
    if (guessed == toBeGuessed) {
        box = QMessageBox::question(this, "Well Done!", "You guessed the word!\nReady to guess another?",
                                    QMessageBox::Yes|QMessageBox::No);
        if (box == QMessageBox::Yes) {
            qDebug() << "New game";
            // Save scores
            // Load new game
        } else {
            qDebug() << "No more game";
            // Save scores
            // Close game window
            gamewindow::~gamewindow();
        }
    }
}

void gamewindow::game_over(int guesses)
{
    QMessageBox::StandardButton box;
    if (guesses == max_guesses)
    {
        // Game over
        box = QMessageBox::warning(this, "Game Over!", "You have used up all of your chances.\nBetter luck next time!",
                                   QMessageBox::Retry|QMessageBox::Ok);
        if (box == QMessageBox::Retry) {
            qDebug() << "New game";
            // Save scores
            // Load new game
        } else {
            qDebug() << "No more game";
            // Save scores
            // Close game window
            gamewindow::~gamewindow();  // Why is this not working?
        }
    }
}

// TODO: Code how the score is achieved


// TODO: Save the score in the high score

