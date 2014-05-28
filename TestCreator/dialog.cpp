#include "dialog.h"
#include "ui_dialog.h"
#include "mainwindow.h"
#include <QMessageBox>
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    wynik.resize(9);
    setWindowTitle("Ustaw skalę ocen.");
    oceny[0] = ui->spinBox;
    oceny[1] = ui->spinBox_2;
    oceny[2] = ui->spinBox_3;
    oceny[3] = ui->spinBox_4;
    oceny[4] = ui->spinBox_5;
    for (int i = 0 ; i < 5 ; ++i)
    {
        oceny[i]->setValue(50 + (10*i));
    }
}
/**
 *@fn Dialog::Dialog()
 *@brief Konstruktor klasy
*/
Dialog::~Dialog()
{
    delete ui;
}
/**
 *@fn Dialog::~Dialog()
 *@brief destruktor klasy
*/
void Dialog::on_pushButton_clicked()
{
    for (int  i = 0; i < 5; ++i)
    {
        for (int j = i+1; j < 5; ++j)
        {
            if(oceny[i]->value()>oceny[j]->value())
            {
                QMessageBox msgBox(QMessageBox::Warning,"","Popraw dane",QMessageBox::Ok);
                msgBox.setWindowTitle("Uwaga!");
                msgBox.exec();
                wynik[0]=-1.0;
                return;
            }
        }
    }
    //else
    for (int i =0; i<5; ++i)
    {
        wynik[0]=wynik[1]=wynik[7]=wynik[8]=1.1;
        wynik[i+2]=(double)oceny[i]->value()/100.0;
    }
    close();
}
/**
 *@fn Dialog::on_pushButton_clicked()
 *@brief Ostrzeżenie o błędnych danych
*/
QVector<double> Dialog::setWynik()
{
    exec();
    if (wynik[0]!= -1.0)
    {
        return wynik;
    }
    else
    {
        QVector<double> agh;
        agh.append(1.1);
        agh.append(1.1);
        agh.append(0.5);
        agh.append(0.6);
        agh.append(0.7);
        agh.append(0.8);
        agh.append(0.9);
        agh.append(1.1);
        agh.append(1.1);
        return agh;

    }
}
/**
 *@fn Dialog::setWynik()
 *@brief Zwrócenie skali ocen
 *@return wynik Vector procentów.
*/
