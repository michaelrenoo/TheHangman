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
    QVector<QString> getWordDatabase();
    QString tempWord;  // Puzzle word
    QString tempHint;  // Hint for puzzle word
    int tempScore = 0;  // Score obtained
};

#endif // DATABASE_H
