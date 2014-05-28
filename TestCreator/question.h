#ifndef QUESTION_H
#define QUESTION_H
#include<QString>
using namespace std;
class Question
{
public:
    Question();
    Question(int);
    void setQuest(QString);
    QString getQuest();
    int getCount();
    QString getAns(int i);
    void addAnswer( QString*);
    void setRight(int);
public:
    QString quest;
    QString ans[9];
    int count;
    int right_ans;
    int marked ;
};
/**
 *@class Question
 *@brief Klasa przechowująca jedno pytanie z testu
 *@var quest Treść pytania
 *@var ans[9] tablica przechowująca proponowane odpowiedzi
 *@var count ilosc elementów
 *@var  right_ans prawidłowa odpowiedź
*/
#endif // QUESTION_H
