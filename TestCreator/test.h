#ifndef TEST_H
#define TEST_H
#include <QVector>
#include <QString>
#include<QDataStream>
#include<QTextStream>
#include "question.h"
class Test
{
public:
    Test();
public: //to be private
    QVector<Question> test;
    double skala[9];
    void load(const QString& fileName);
    void save(const QString& fileName);
    QString countMark();
};

#endif // TEST_H
