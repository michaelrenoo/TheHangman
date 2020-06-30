#include "gamewindow.h"
#include "ui_gamewindow.h"
#include <QTime>

gamewindow::gamewindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gamewindow)
{
    ui->setupUi(this);
    startTimer();
}

gamewindow::~gamewindow()
{
    delete ui;
}

void gamewindow::startTimer()
{
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(countDown()));
    timer->start(1000);
}

void gamewindow::getData()
{
    QString wordsDatabasePath = qApp->applicationDirPath(); //location of the file , assuming in application dir
    wordsDatabasePath.append("/WordsDatabase(TheHangman).txt");
    QFile wordsDatbaseFile(wordsDatabasePath);
    if (!wordsDatbaseFile.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this, "title", "file is not opened");
    }
    QTextStream inWord(&wordsDatbaseFile);
    QString word = inWord.readAll();
    data.addWord(word);
    wordsDatbaseFile.close();

    QString hintsDatabasePath = qApp->applicationDirPath(); //location of the file , assuming in application dir
    hintsDatabasePath.append("/HintsDatabase(TheHangman).txt");
    QFile hintsDatabaseFile (hintsDatabasePath);
    if (!hintsDatabaseFile.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this, "title", "file is not opened");
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

//catetanmu di game logic aku pindahin ke sini:
// TODO: Declare all game objects


// TODO: Initialise all buttons and its functions in the UI


// TODO: Code the game logic


// TODO: Code how the score is achieved


// TODO: Save the score in the high score

void gamewindow::on_hintButton_clicked()
{
    QMessageBox::information(this, "Hint", data.tempHint);
}