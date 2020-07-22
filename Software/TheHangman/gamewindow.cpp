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

    // Initialise all game objects
    wrong_guesses = 0;
    toBeGuessed = data.tempWord;
    guessedWord = change_game_word(toBeGuessed);
    consecutive = 0;
    data.tempScore = 0;

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
    if (check_word(input[0], toBeGuessed) == 0)
    {
        consecutive = 0;  // Bring back the amount of consecutive guesses to zero
        wrong_guesses++;
        //max_limit -= 1;
        ui->chanceValueLabel->setNum(max_guesses - wrong_guesses);  // Readjust chance limit
        game_over(wrong_guesses);
    }
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


// input = character from user, toGuess = puzzle word to be guessed
int gamewindow::check_word(char input, QString toGuess)
{  // Inspiration: http://www.cppforschool.com/project/hangman-game-code.html
    int match = 0;
    //int max_limit = max_guesses;
    for (int i = 0; i < toGuess.length(); i++) {
        // Check with the guessed word whether the letter is already matched
        if (input == guessedWord[i])
        {
            QMessageBox::information(this, "Used letter", "The letter you gave has been entered before.");
            return 0;
        }

        // Is the input correct?
        if (input == toGuess[i])  // When yes
        {
            guessedWord[i] = input;
            consecutive++;  // Increase the amount of consecutive guesses to gain higher score
            match++;  // To signal that the input is correct
            ui->puzzleWordLabel->setText(guessedWord);  // Update label
            // Scoring
            score = data.scoring(consecutive);
            ui->scoreValueLabel->setNum(score);  // consecutive stays the same!!!!!
            is_finished(guessedWord);  // Check whether all the letters are guessed
        }
/*
        else {  // When no
            consecutive = 0;  // Bring back the amount of consecutive guesses to zero
            wrong_guesses++;
            //max_limit -= 1;
            ui->chanceValueLabel->setNum(max_guesses - wrong_guesses);  // Readjust chance limit
            //game_over(wrong_guesses);

            //return 0;
        } */
    }

    return match;
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
            new_game();
        } else {
            qDebug() << "No more game";
            // Save scores
            // Close game window
            QWidget::close();
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
            new_game();
        } else {
            qDebug() << "No more game";
            // Save scores
            // Close game window
            QWidget::close();  // Close the UI
        }
    }
}

void gamewindow::new_game()
{
    words_before.push_back(toBeGuessed);  // Add puzzle word to vector so no words will be repeated in one game
    ui->setupUi(this);  // Reinitialise UI
    this->getData();

    for (uint i = 0; i < words_before.size(); i++) {
        if (words_before.size() < 7){
            while (toBeGuessed == words_before[i])  // DO NOT USE WHILE!
            {
                this->getData();
            }
        }
        else
        {
            QMessageBox::information(this, "All words played",
                                     "Congratulations! You have guessed all the words in the database.\n"
                                     "You can add more words through the \"Add Words\" menu on the main page.");
            // Save scores
            // Close UI
            QWidget::close();
        }
    }
}

// TODO: Code how the score is achieved


// TODO: Save the score in the high score

