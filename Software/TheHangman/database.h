#ifndef DATABASE_H
#define DATABASE_H

#include <QVector>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QRandomGenerator>

using namespace std; 

class database
{
private:
    QVector<QString> wordDatabase; // Declare database for words that can be played
    QVector<QString> hintDatabase;
    vector<int> highScoreDatabase; // Declare high scores

    
public:
    // Declare any other objects related to the database
    database();
    void getRandomText();
    void addWord(QString woxrd);
    void addHint(QString hint);
    int scoring(int consecutive);
    vector<int> getHighScore();
    void setHighScore(int);  // Declare achieved score in game
    QVector<QString> getWordDatabase();
    QString tempWord;  // Puzzle word
    QString tempHint;  // Hint for puzzle word
    int tempScore;  // Score obtained
    uint databaseSize = wordDatabase.size();
    vector<string> previousWords;
};

#endif // DATABASE_H
