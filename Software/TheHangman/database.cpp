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

void database::getRandomText()
{
    uniform_int_distribution<int> distribution (0, wordDatabase.count()-1); //https://www.youtube.com/watch?v=axKBgASRmQs
    int randomNumber = distribution(*QRandomGenerator::global());
    qDebug() << randomNumber;
    tempWord = wordDatabase.takeAt(randomNumber);
    tempHint = hintDatabase.takeAt(randomNumber);
}

void database::addWord(QString word)
{
    wordDatabase.clear();
    QStringList words = word.split(",\n"); //https://stackoverflow.com/questions/33621771/read-the-data-from-text-file-in-qt
    foreach(QString word, words){
        wordDatabase.push_back(word);
    }
}

void database::addHint(QString hint)
{
    hintDatabase.clear();
    QStringList hints = hint.split(",\n");
    foreach(QString hint, hints){
        hintDatabase.push_back(hint);
    }
}

QVector<QString> database::getWordDatabase()
{
    return wordDatabase;
}

int database::scoring(const int consecutive)
{
    tempScore += 10;
    switch (consecutive) {
    case 0: break;
    default: tempScore += (consecutive * 5);  // Get 5 extra points each time they guess correctly consecutively
        break;
    }
    return tempScore;
}

vector<int> database::getHighScore()
{
    return highScoreDatabase;
}

void database::setHighScore(int score)
{
    int index;
    for(unsigned int i = 0; i < highScoreDatabase.size(); i++)
    {
        if(score > highScoreDatabase[i])
        {
            index = i;
            //highScoreDatabase.insert(index, score);
            break;
        }
    }
}
