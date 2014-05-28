#include "question.h"
Question::Question()
{
    count = 0;
    right_ans = 0;
    marked = -1;
}
/**
 *@fn Question::Question
 *@brief Konstruktor domyślny klasy Question
*/
Question::Question(int i)
{
    count = i;
    marked = -1;
    right_ans = 0;
}
/**
 *@fn Question::Question(int)
 *@brief Konstruktor ustawiający rozmiar
 *@param i Ilość wariantów
*/
void Question::setQuest(QString qs)
{
    quest = qs;
}
/**
 *@fn Question::setQuest
 *@brief Ustawienie treści pytania
 *@param qs treść pytania
*/
QString Question::getQuest()
{
    return quest;
}
/**
 *@fn Question::getQuest
 *@brief Odczytuje treść pytania
 *@return treść pytania
*/
QString Question::getAns(int i)
{
    return ans[i];
}
/**
 *@fn Question::getAns
 *@brief Odczytuje i-ty wariant odpowiedzi
 *@param i numer odpowiedzi
*/
int Question::getCount()
{
    return count;
}
/**
 *@fn Question::getCount
 *@brief Odczytuje ilość wariantów odpowiedzi
 *@return count ilość wariantów
*/
void Question::addAnswer( QString* aa)
{
    if (this->count > 8 ) return;
    ans[count] = *aa;
}

/**
 *@fn Question::addAnswer(QString*)
 *@brief Dodawanie wariantu odpowiedzi
 *@param aa treść odpowiedzi
 *@param t czy odpowiedź jest prawdziwa
*/
void Question::setRight(int k)
{
    right_ans = k;
}

/**
 *@fn Question::setRight(int)
 *@brief Ustawianie prawidłowej
 *@param k odpowiedź prawdziwa
*/
