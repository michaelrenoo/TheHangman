#include "database.h"
#include <vector>


database::database()
{
    // TODO: Declare high scores


    // TODO: Declare achieved score in game


    // TODO: Declare database for words that can be played


    // TODO: Declare any other objects related to the database


    // TODO: Initialise all objects and its connections to each other


}


///
/// \brief database::getRandomText
/// Get random word and hint
///
void database::getRandomText()
{
    uniform_int_distribution<int> distribution (0, wordDatabase.count()-1); //https://www.youtube.com/watch?v=axKBgASRmQs
    int randomNumber = distribution(*QRandomGenerator::global());
    qDebug() << randomNumber;
    qDebug() << wordDatabase.count();
    qDebug() << wordDatabase.size();
    tempWord = wordDatabase.takeAt(randomNumber);
    tempHint = hintDatabase.takeAt(randomNumber);
}


///
/// \brief database::addWord
/// Add more words to the database file
/// \param word
/// The words to be added
///
void database::addWord(QString word)
{
    wordDatabase.clear();
    QStringList words = word.split(",\n"); //https://stackoverflow.com/questions/33621771/read-the-data-from-text-file-in-qt
    foreach(QString word, words){
        wordDatabase.push_back(word);
    }
}


///
/// \brief database::addHint
/// Add more hints to the database file
/// \param hint
/// The hints to be added
///
void database::addHint(QString hint)
{
    hintDatabase.clear();
    QStringList hints = hint.split(",\n");
    foreach(QString hint, hints){
        hintDatabase.push_back(hint);
    }
}


///
/// \brief database::getWordDatabase
/// Getter for the wordDatabase
/// \return
/// wordDatabase
///
QVector<QString> database::getWordDatabase()
{
    return wordDatabase;
}


///
/// \brief database::scoring
/// The scoring algorithm
/// \param consecutive
/// How many letters are guessed correctly in a row
/// \return
/// The score as integer
///
int database::scoring(const int consecutive)
{
    tempScore += 10;
    switch (consecutive) {
    case 0: break;
    default: tempScore += ((consecutive - 1) * 5);  // Get 5 extra points each time they guess correctly consecutively
        break;
    }
    return tempScore;
}


///
/// \brief database::getHighScore
/// Getter for the highScoreDatabase vector
/// \return
/// highScoreDatabase
///
vector<int> database::getHighScore()
{
    return highScoreDatabase;
}


///
/// \brief database::setHighScore
/// Setter for the high score
/// \param score
/// The score attained by the user
///
void database::setHighScore(int score)
{
    int index;
    for(uint i = 0; i < highScoreDatabase.size(); i++)
    {
        if(score > highScoreDatabase[i])
        {
            index = i;
            //highScoreDatabase.insert(index, score);
            break;
        }
    }
}
