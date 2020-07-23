#include "gamewindow.h"
#include "ui_gamewindow.h"
#include <QTime>
#include <string>
using namespace std;

// Game logic
// What to do everytime the game is started
gamewindow::gamewindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gamewindow)
{
    ui->setupUi(this);
    this->getData();  // To fill database with data from .txt data
    game_start();
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
void gamewindow::letter_pressed()
{
    QPushButton *button = (QPushButton *)sender();
    QString butValue = button->text();
    string input = butValue.toStdString();
    if (check_word(input[0], toBeGuessed) == 0)  // When the input letter is not on the puzzle word
    {
        consecutive = 0;  // Bring back the amount of consecutive guesses to zero
        wrong_guesses++;
        ui->chanceValueLabel->setNum(max_guesses - wrong_guesses);  // Readjust chance limit
        switch (wrong_guesses) {
        case 1: ui->HMLabel1->show();
            break;
        case 2: ui->HMLabel2->show();
            break;
        case 3: ui->HMLabel3->show();
            break;
        case 4: ui->HMLabel4->show();
            break;
        case 5: ui->HMLabel5->show();
            break;
        case 6: ui->HMLabel6->show();
            ui->HMLabel7->show();
            break;
        case 7: ui->HMLabel8->show();
            break;
        default: break;
        }
        game_over(wrong_guesses);  // Check whether there is any chance left
    }
}

void gamewindow::on_hintButton_clicked()
{
    QMessageBox::information(this, "Hint", data.tempHint);
}

void gamewindow::on_backButton_clicked()
{
    timeNumber = 0;  // Do we need this?
    gamewindow::~gamewindow();
}

// TODO: do we need this?
void gamewindow::update_game_word(QString text)
{
    ui->puzzleWordLabel->setText(text);
}


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


// Check whether the input letter match with the puzzle word
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
    }

    return match;  // Return an integer to serve as a requirement on the letter_pressed function
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


// Function to restart all widgets in the UI
void gamewindow::game_start()
{
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
                connect(letterButtons[i], SIGNAL(released()), this, SLOT(letter_pressed()));
    }
    //connect(ui->backButton, SIGNAL(released()), this, SLOT(on_backButton_clicked()));
    //connect(ui->hintButton, SIGNAL(released()), this, SLOT(on_hintButton_clicked()));

    score = data.tempScore;
    ui->chanceValueLabel->setNum(max_guesses);  // Change to max guesses
    ui->scoreValueLabel->setNum(score);         // Change to the score
    ui->puzzleWordLabel->setText(guessedWord);  // Change to actual puzzle word

    // Hide all hangman figure
    ui->HMLabel1->hide();
    ui->HMLabel2->hide();
    ui->HMLabel3->hide();
    ui->HMLabel4->hide();
    ui->HMLabel5->hide();
    ui->HMLabel6->hide();
    ui->HMLabel7->hide();
    ui->HMLabel8->hide();

    //update_game_word(data.tempWord);
    startTimer();
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

    // TODO: How to restart game
    // Check whether there are still words left to be played
    if (words_before.size() != data.databaseSize) {
        qDebug() << data.databaseSize;
        qDebug() << words_before.size();
        for (uint i = 0; i < words_before.size(); i++) {
            if (data.tempWord == words_before[i]) {
                gamewindow *game = new gamewindow();
                game->show();
            }
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


// TODO: Save the score in the high score

