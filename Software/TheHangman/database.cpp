#include "database.h"

database::database()
{
    // TODO: Declare high scores


    // TODO: Declare achieved score in game


    // TODO: Declare database for words that can be played


    // TODO: Declare any other objects related to the database


    // TODO: Initialise all objects and its connections to each other


}

QString database::getRandomText()
{
    int randomNumber = rand() % wordDatabase.count()+1; //https://gist.github.com/fffaraz/b48dff1b4d23afe1573e
    return  wordDatabase.takeAt(randomNumber);
}

void database::addWord(QString word)
{
    QStringList words = word.split(",\n"); //https://stackoverflow.com/questions/33621771/read-the-data-from-text-file-in-qt
    foreach(QString word, words){
        wordDatabase.push_back(word);
    }
}

void database::addHint(QString hint)
{
    QStringList hints = hint.split(",\n");
    foreach(QString hint, hints){
        hintDatabase.push_back(hint);
    }
    hintDatabase.insert(hintDatabase.count(), hint);
}

QVector<QString> database::getWordDatabase()
{
    return wordDatabase;
}
