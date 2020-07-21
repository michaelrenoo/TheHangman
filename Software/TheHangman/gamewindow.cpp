#include "gamewindow.h"
#include "ui_gamewindow.h"
#include <QTime>
#include <string>
using namespace std;

// TODO: Declare all game objects
const int max_guesses = 7;  // Constant - unchangeable
int wrong_guesses = 0;  // The number increases as more wrong guesses are made
string toBeGuessed = "";  // Word to be guessed
int score = 0;  // The score acquired
int consecutive = 0;  // The amount of time user guessed correctly after one another


// What to do everytime the game is started
gamewindow::gamewindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gamewindow)
{
    ui->setupUi(this);
    ui->chanceValueLabel->setNum(max_guesses);
    ui->scoreValueLabel->setNum(score);
    ui->puzzleWordLabel->setText(change_game_word("BLA"));  // Change to actual puzzle word
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
    timeNumber = 60 + data.tempWord.count()*10;
}

void gamewindow::countDown()
{

    QString timeString = QString::number(timeNumber / 60) + ":" + QString::number(timeNumber % 60);
//    QTime time = QTime::currentTime();
//    QString timeText = time.toString("hh : mm : ss");
    ui->timeLimitLabel->setText(timeString);
    timeNumber--;

}

// TODO: Initialise all buttons and its functions in the UI
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


// TODO: Code how the score is achieved


// TODO: Save the score in the high score

