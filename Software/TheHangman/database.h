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
    QVector<QString> wordDatabase;
    QVector<QString> hintDatabase;
    vector<int> highScoreDatabase;

    
public:
    database();
    void getRandomText();
    void addWord(QString woxrd);
    void addHint(QString hint);
    int scoring(int consecutive);
    vector<int> getHighScore();
    void setHighScore(int);
    QVector<QString> getWordDatabase();
    QString tempWord;  // Puzzle word
    QString tempHint;  // Hint for puzzle word
    int tempScore;  // Score obtained
    uint databaseSize = wordDatabase.size();
    vector<string> previousWords;
};

#endif // DATABASE_H
