#ifndef DATABASE_H
#define DATABASE_H

#include <QVector>
#include <QFile>
#include <QTextStream>

using namespace std; 

class database
{
private:
    QVector<QString> wordDatabase;
    QVector<QString> hintDatabase;

    
public:
    database();
    void getRandomText();
    void addWord(QString woxrd);
    void addHint(QString hint);
    QVector<QString> getWordDatabase();
    QString tempWord;
    QString tempHint;
};

#endif // DATABASE_H
