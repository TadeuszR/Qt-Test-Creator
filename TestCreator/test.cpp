#include "test.h"
#include <QFileDialog>
#include <QString>
#include <iostream>
#include <QDataStream>

Test::Test() :skala ({1.1,1.1,0.5,0.6,0.7,0.8,0.9,1.1,1.1})
{

}
QString Test::countMark()
{
  int N = test.size();
    int n = 0;
    for (int i = 0; i < N ; ++i)
    {
        if (test[i].marked == test[i].right_ans)
            n++;
    }
    double wynik = 100.0*n/N;
    QString qs ("Twój wynik to <br/>");
    qs.append(QString::number(wynik));
    qs.append(" %");
    return qs;
}
void Test::load(const QString& fileName)
{

         if (fileName != "") {
             QFile file(fileName);
             if (!file.open(QIODevice::ReadOnly)) {
                 // error message
             } else {
                 QDataStream stream(&file);
                         // QDataStream stream(&file);
                         {//właściwy zapis do pliku
                            int tmp;
                            stream>>tmp;
                            test.resize(tmp);
                             for (int i = 0; i <test.size(); ++i)
                             {
                                 stream>>test[i].quest;
                                 stream>>tmp;
                                 test[i].count = tmp;
                                 stream>>tmp;
                                 test[i].right_ans = tmp;
                                 test[i].marked = -1;
                                 for (int j = 0; j < test[i].count; ++j)
                                 {
                                     QString qtmp;
                                     stream>>qtmp;
                                     test[i].ans[j]=qtmp;
                                 }
                             }
                         }
                         file.close();
             }
         }
}
void Test::save(const QString& fileName)
{

    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly))
    {
        // error message
    }
    else
    {
        /*QTextStream stream(&file);
        // QDataStream stream(&file);
        {//właściwy zapis do pliku

            stream<<test.size();
            for (int i = 0; i <test.size(); ++i)
            {
                stream<<test[i].getQuest();
                stream<<test[i].count;
                stream<<test[i].right_ans;
                for (int j = 0; j < test[i].count; ++j)
                {
                    stream<<test[i].getAns(j);

                }
            }
        }
        file.close();
        */
        QDataStream stream(&file);
                // QDataStream stream(&file);
                {//właściwy zapis do pliku

                    stream<<test.size();
                    for (int i = 0; i <test.size(); ++i)
                    {
                        stream<<test[i].getQuest();
                        stream<<test[i].count;
                        stream<<test[i].right_ans;
                        for (int j = 0; j < test[i].count; ++j)
                        {
                            stream<<test[i].getAns(j);

                        }
                    }
                    for (int i = 0; i < 9 ; ++i)
                    {
                        stream<<skala[i];
                    }
                }
                file.close();

    }
}
