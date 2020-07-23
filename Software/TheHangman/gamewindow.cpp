#include "gamewindow.h"
#include "ui_gamewindow.h"
#include <QTime>
#include <string>
using namespace std;

// Game logic
///
/// \brief gamewindow::gamewindow
/// What to do everytime the dialog is called
/// \param parent
/// parent dialog (main window)
///
gamewindow::gamewindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gamewindow)
{
    ui->setupUi(this);
    this->getData();  // To fill database with data from .txt data
    game_start();
}


///
/// \brief gamewindow::~gamewindow
/// Deconstructor
///
gamewindow::~gamewindow()
{
    delete ui;
}


///
/// \brief gamewindow::startTimer
/// Start the time limit
///
void gamewindow::startTimer()
{
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(countDown()));
    timer->start(1000);
    if(timeNumber == 0){
        QMessageBox::information(this, "Game Over!", "Time's Up!\nBetter hurry up next time.");
        timer->stop();
        gamewindow::~gamewindow();
    }
}


///
/// \brief gamewindow::getData
/// Get data from two .txt files as the database
/// The files are called WordsDatabase(TheHangman).txt
/// and HintsDatabase(TheHangman).txt and are expected
/// to be in the same location of the game file
///
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

    data.getRandomText(); //get the random text
    qDebug() << data.tempWord;
    timeNumber = 30 + data.tempWord.count()*10; //set the time limit
}


///
/// \brief gamewindow::countDown
/// Timer count down
///
void gamewindow::countDown()
{
    QString timeString = QString::number(timeNumber / 60) + ":" + QString::number(timeNumber % 60);
    ui->timeLimitLabel->setText(timeString);
    timeNumber--;
}


///
/// \brief gamewindow::letter_pressed
/// Handler for when the letter buttons are pressed in the UI
///
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
        switch (wrong_guesses) {  // Show the correct label according to the amount of chances left
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


///
/// \brief gamewindow::on_hintButton_clicked
/// Handler for when the hint button is clicked
///
void gamewindow::on_hintButton_clicked()
{
    data.tempScore -= 20;
    consecutive = 0;  // Reset consecutive everytime hint is called
    ui->scoreValueLabel->setNum(data.tempScore);
    QMessageBox::information(this, "Hint", data.tempHint);
}


///
/// \brief gamewindow::on_backButton_clicked
/// Handler for when the back button (give up button) is clicked
///
void gamewindow::on_backButton_clicked()
{
    timeNumber = 0;  // Do we need this?
    gamewindow::~gamewindow();
}


///
/// \brief gamewindow::change_game_word
/// Change the characters in the QString to *
/// \param text
/// The puzzle word that needs to be changed to asterisks
/// \return
/// The QString as a set of asterisks
///
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
}


///
/// \brief gamewindow::check_word
/// Check whether the input letter match with the puzzle word
/// \param input
/// character from user
/// \param toGuess
/// puzzle word to be guessed
/// \return
/// an integer to serve as a requirement on the letter_pressed function
/// 1 when the letter is correct, 0 when the letter has been entered before or is false
///
int gamewindow::check_word(char input, QString toGuess)
{  // Inspiration: http://www.cppforschool.com/project/hangman-game-code.html
    int match = 0;
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
            ui->scoreValueLabel->setNum(score);
            is_finished(guessedWord);  // Check whether all the letters are guessed
        }
    }

    return match;
}


///
/// \brief gamewindow::is_finished
/// When the puzzle word is guessed
/// \param guessed
/// The puzzle word to be compared to the input from user
///
void gamewindow::is_finished(QString guessed) {  // Inspiration: https://stackoverflow.com/questions/13111669/yes-no-message-box-using-qmessagebox
    QMessageBox::StandardButton box;
    if (guessed == toBeGuessed) {
        box = QMessageBox::question(this, "Well Done!", "You guessed the word!\nReady to guess another?",
                                    QMessageBox::Yes|QMessageBox::No);
        if (box == QMessageBox::Yes) {
            qDebug() << "New game";
            // Save scores
            data.setHighScore(score);
            // Load new game
            new_game();
        } else {
            qDebug() << "No more game";
            // Save scores
            data.setHighScore(score);
            // Close game window
            QWidget::close();
        }
    }
}


///
/// \brief gamewindow::game_start
/// Functions to initialise all game objects and restart all widgets in the UI
///
void gamewindow::game_start()
{
    // Initialise all game objects
    wrong_guesses = 0;
    toBeGuessed = data.tempWord;
    guessedWord = change_game_word(toBeGuessed);
    consecutive = 0;
    data.tempScore = 0;
    score = 0;

    // Connect the letter buttons to each letters in the UI
    QPushButton *letterButtons[26];  // Array to ref all pushButtons (from A to Z)
    for (int i = 0; i < alphabet.size(); ++i) {
        QCharRef c = alphabet[i];
        QString butName = "Button" + c;
                letterButtons[i] = gamewindow::findChild<QPushButton *>(butName);  // search for specific Widget by calling the name
                connect(letterButtons[i], SIGNAL(released()), this, SLOT(letter_pressed()));
    }

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


///
/// \brief gamewindow::game_over
/// When the user has no more chances to guess the word anymore
/// \param guesses
/// The puzzle word to be compared to the input from user
///
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
            data.setHighScore(score);
            // Load new game
            new_game();
        } else {
            qDebug() << "No more game";
            // Save scores
            data.setHighScore(score);
            // Close game window
            QWidget::close();  // Close the UI
        }
    }
}


///
/// \brief gamewindow::new_game
/// When the user chooses to keep on playing after a puzzle word has been correctly guessed
///
void gamewindow::new_game()
{
    scoreBuffer = data.tempScore;
    data.previousWords.push_back(toBeGuessed.toStdString());  // Add puzzle word to vector so no words will be repeated in one game
    ui->setupUi(this);  // Reinitialise UI
    this->getData();

    // Restart game
    // Check whether there are still words left to be played
    if (data.previousWords.size() != data.databaseSize) {
        qDebug() << "databaseSize" << data.databaseSize;
        qDebug() << "previous words vector size" << data.previousWords.size();
        for (uint i = 0; i < data.previousWords.size(); i++) {
            if (data.tempWord.toStdString() == data.previousWords[i]) {  // Check whether the word has already been played
                this->getData();
            }
        }
        QWidget::close();
        gamewindow *game = new gamewindow();
        game->show();
        qDebug() << "score buffer" << scoreBuffer;
        data.tempScore = scoreBuffer;
    }
    else
    {
        QMessageBox::information(this, "All words played",
                                 "Congratulations! You have guessed all the words in the database.\n"
                                 "You can add more words through the \"Add Words\" menu on the main page.");
        // Save scores
        data.setHighScore(score);
        // Close UI
        QWidget::close();
    }
}

