#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<iostream>
#include<QMessageBox>
#include"test.h"
#include"question.h"
#include"dialog.h"
using namespace std;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Kreator testów");
    ui->pushButton_3->setDisabled(true);
    iter = 0;
    elementy[1] = ui->lineEdit_2;
    elementy[2] = ui->lineEdit_3;
    elementy[3] = ui->lineEdit_4;
    elementy[4] = ui->lineEdit_5;
    elementy[5] = ui->lineEdit_6;
    elementy[6] = ui->lineEdit_7;
    elementy[7] = ui->lineEdit_8;
    elementy[8] = ui->lineEdit_9;
    elementy[0] = ui->lineEdit;
    ui->pushButton_2->setDisabled(true);
    wskazniki[1] = ui->radioButton_2;
    wskazniki[2] = ui->radioButton_3;
    wskazniki[3] = ui->radioButton_4;
    wskazniki[4] = ui->radioButton_5;
    wskazniki[5] = ui->radioButton_6;
    wskazniki[6] = ui->radioButton_7;
    wskazniki[7] = ui->radioButton_8;
    wskazniki[8] = ui->radioButton_9;
    wskazniki[0] = ui->radioButton;
    nowePytanie();
}
/**
 *@fn MainWindow::MainWindow()
 *@brief Konstruktor klasy MainWindow
*/
MainWindow::~MainWindow()
{
    delete ui;
}
/**
 *@fn MainWindow::~MainWindow()
 *@brief Destruktor klasy MainWindow
*/
void MainWindow::on_pushButton_clicked()
{
    if(ui->lineQuestion->text()=="")
    {
        QMessageBox msgBox(QMessageBox::Warning,"","Nie podałeś pytania",QMessageBox::Ok);
        msgBox.setWindowTitle("Uwaga!");
        msgBox.exec();
        return;
    }

    int i;
    for (i = 0; i < 9; ++i)
    {
        if(wskazniki[i]->isChecked())
        {
            prawidlowa = i;
            break;
        }
    }
    if (i == 9)
    {
        QMessageBox msgBox(QMessageBox::Warning,"","Zaznacz prawidłową odpowiedź",QMessageBox::Ok);
        msgBox.setWindowTitle("Uwaga!");
        msgBox.exec();
        return;
    }

    if(sprawdzElementy())
    {
        QMessageBox msgBox(QMessageBox::Warning,"","Popraw dane",QMessageBox::Ok);
        msgBox.setWindowTitle("Uwaga!");
        msgBox.exec();
        return;
    }
    ui->pushButton_3->setDisabled(false);
    pytanie = ui->lineQuestion->text();
    ilosc = 9;
    for (int i = 0; i < 9; ++i)
    {
        if(elementy[i]->text()!="")
            odpowiedzi[i] = elementy[i]->text();
        else
        {
            ilosc = i;
            break;
        }
    }

    Question *q = new Question();
    q->setQuest(pytanie);
    q->right_ans=prawidlowa;
    q->count=ilosc;
    for (int i = 0; i < ilosc; ++i)
        q->ans[i]=odpowiedzi[i];
    if (iter >= t.test.size())
        t.test.append(*q);
    else
        t.test[iter]=*q;
    if(iter == t.test.size()-1)
    {

            nowePytanie();
            elementy[0]->setText("");
            elementy[1]->setText("");
            elementy[2]->setText("");
            elementy[3]->setText("");
            elementy[4]->setText("");
            elementy[5]->setText("");
            elementy[6]->setText("");
            elementy[7]->setText("");
            elementy[8]->setText("");

            ui->lineQuestion->setText("");
            ++iter;
            ui->pushButton_2->setDisabled(false);
    }
    else
    {
        loadQuestion(++iter);
        if (t.test[iter].right_ans > -1)
        {
          wskazniki[t.test[iter].right_ans]->setChecked(true);
          ui->pushButton_2->setDisabled(false);
        }
    }
}
/**
 *@fn MainWindow::on_pushButton_clicked()
 *@brief nawigacja po pytaniach
*/
void MainWindow::on_pushButton_2_clicked()
{

        Dialog d;
        QVector<double> x= d.setWynik();
        for (int i = 0; i < 9; ++i)
        {
            t.skala[i] = x[i];
        }
        QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"), "",
                 tr("Simple Test Format (*.stf)"));
        if (!fileName.endsWith(".stf"))
            fileName.append(".stf");
             if (fileName != "") {
                 if (!fileName.endsWith(".stf"))
                     fileName.append(".stf");
                 t.save(fileName);
             }
}
/**
 *@fn MainWindow::on_pushButton_2_clicked()
 *@brief Zapis pliku z pytaniami
*/
void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{
    if (arg1 == "" && elementy[1]->text()=="")
    {
        elementy[1]->setDisabled(true);
        wskazniki[0]->setDisabled(true);
    }
    else
    {
        elementy[1]->setDisabled(false);
        wskazniki[0]->setDisabled(false);
    }
}
/**
 *@fn MainWindow::on_lineEdit_1_textChanged()
 *@brief Blokowanie i odblokowywanie elementów
*/
void MainWindow::on_lineEdit_2_textChanged(const QString &arg1)
{
    if (arg1 == ""&& elementy[2]->text()=="")
{
        elementy[2]->setDisabled(true);
        wskazniki[1]->setDisabled(true);
}
    else
        {
            elementy[2]->setDisabled(false);
            wskazniki[1]->setDisabled(false);
        }
}
/**
 *@fn MainWindow::on_lineEdit_2_textChanged()
 *@brief Blokowanie i odblokowywanie elementów
*/
void MainWindow::on_lineEdit_3_textChanged(const QString &arg1)
{
    if (arg1 == ""&& elementy[3]->text()=="")
 {       elementy[3]->setDisabled(true);
        wskazniki[2]->setDisabled(true);
}
    else
    {
        elementy[3]->setDisabled(false);
        wskazniki[2]->setDisabled(false);
    }
}
/**
 *@fn MainWindow::on_lineEdit_3_textChanged()
 *@brief Blokowanie i odblokowywanie elementów
*/
void MainWindow::on_lineEdit_4_textChanged(const QString &arg1)
{
    if (arg1 == ""&& elementy[4]->text()==""){
        elementy[4]->setDisabled(true);
        wskazniki[3]->setDisabled(true);
    }else
    {
        elementy[4]->setDisabled(false);
        wskazniki[3]->setDisabled(false);
    }
}
/**
 *@fn MainWindow::on_lineEdit_4_textChanged()
 *@brief Blokowanie i odblokowywanie elementów
*/
void MainWindow::on_lineEdit_5_textChanged(const QString &arg1)
{
    if (arg1 == ""&& elementy[5]->text()==""){
        elementy[5]->setDisabled(true);
        wskazniki[4]->setDisabled(true);
    }else
    {
        elementy[5]->setDisabled(false);
        wskazniki[4]->setDisabled(false);
    }
}
/**
 *@fn MainWindow::on_lineEdit_5_textChanged()
 *@brief Blokowanie i odblokowywanie elementów
*/
void MainWindow::on_lineEdit_6_textChanged(const QString &arg1)
{
    if (arg1 == ""&& elementy[6]->text()==""){
        elementy[6]->setDisabled(true);
        wskazniki[5]->setDisabled(true);
    }else
    {
        elementy[6]->setDisabled(false);
        wskazniki[5]->setDisabled(false);
    }
}
/**
 *@fn MainWindow::on_lineEdit_6_textChanged()
 *@brief Blokowanie i odblokowywanie elementów
*/
void MainWindow::on_lineEdit_7_textChanged(const QString &arg1)
{
    if (arg1 == ""&& elementy[7]->text()==""){
        elementy[7]->setDisabled(true);
        wskazniki[6]->setDisabled(true);
    }else
    {
        elementy[7]->setDisabled(false);
        wskazniki[6]->setDisabled(false);
    }
}
/**
 *@fn MainWindow::on_lineEdit_7_textChanged()
 *@brief Blokowanie i odblokowywanie elementów
*/
void MainWindow::on_lineEdit_8_textChanged(const QString &arg1)
{
    if (arg1 == ""&& elementy[8]->text()==""){
        elementy[8]->setDisabled(true);
        wskazniki[7]->setDisabled(true);
    }else
    {
        elementy[8]->setDisabled(false);
        wskazniki[7]->setDisabled(false);
    }
}
/**
 *@fn MainWindow::on_lineEdit_8_textChanged()
 *@brief Blokowanie i odblokowywanie elementów
*/
void MainWindow::on_lineEdit_9_textChanged(const QString &arg1)
{
    wskazniki[8]->setDisabled(false);

}
/**
 *@fn MainWindow::on_lineEdit_9_textChanged()
 *@brief Blokowanie i odblokowywanie elementów
*/
void MainWindow::on_pushButton_3_clicked()
{

    if(sprawdzElementy())
    {
        QMessageBox msgBox(QMessageBox::Warning,"","Popraw dane",QMessageBox::Ok);
        msgBox.setWindowTitle("Uwaga!");
        msgBox.exec();
        return;
    }
    pytanie = ui->lineQuestion->text();
    for (int i = 0; i < 9; ++i)
    {
        if (wskazniki[i]->isChecked())
            prawidlowa = i;
    }
    ilosc = 9;
    for (int i = 0; i < 9; ++i)
    {
        if(elementy[i]->text()!="")
            odpowiedzi[i] = elementy[i]->text();
        else
        {
            ilosc = i;
            break;
        }
    }
    if (ilosc == 0)
    {
        --iter;
        loadQuestion(iter);
        return;
    }
    int i;
    for (i = 0; i < 9; ++i)
    {
        if(wskazniki[i]->isChecked())
            break;
    }
    if (i == 9)
    {
        QMessageBox msgBox(QMessageBox::Warning,"","Zaznacz prawidłową odpowiedź",QMessageBox::Ok);
        msgBox.setWindowTitle("Uwaga!");
        msgBox.exec();
        return;
    }

    Question *q = new Question();
    q->setQuest(pytanie);
    q->right_ans=prawidlowa;
    q->count=ilosc;
    for (int i = 0; i < ilosc; ++i)
        q->ans[i]=odpowiedzi[i];
    if (iter >= t.test.size())
        t.test.append(*q);
    else
        t.test[iter]=*q;
    --iter;
    loadQuestion(iter);
    if (iter  == 0)
    {
        ui->pushButton_3->setDisabled(true);
    }
    if (t.test[iter].right_ans > -1)
    {
      wskazniki[t.test[iter].right_ans]->setChecked(true);
    }
}
/**
 *@fn MainWindow::on_pushButton_3_clicked()
 *@brief nawigacja po pytaniach
*/

void MainWindow::nowePytanie()
{
    clear();

    for (int i = 0; i <9; ++i )
    {
        elementy[i]->setText("");
        elementy[i]->setDisabled(true);
        wskazniki[i]->setDisabled(true);

    }
}
/**
 *@fn MainWindow::nowePytanie()
 *@brief ustawnienie elementów graficznych do nowego pytania
*/
void MainWindow::on_lineQuestion_textChanged(const QString &arg1)
{
    if (arg1 == ""&&!wskazniki[0]->isEnabled())
        elementy[0]->setDisabled(true);
    else
        elementy[0]->setDisabled(false);
}
/**
 *@fn MainWindow::on_lineQuestion_textChanged()
 *@brief ustawnienie elementów graficznych
*/
void MainWindow::loadQuestion(int n = 0)
{
    clear();
    if (n < 0)
    {
        ui->lineQuestion->setText(QString::number(n));
        return;
    }

    if(n > t.test.size()) return;
    ui->lineQuestion->setText(t.test[n].getQuest());
    for (int i = 0; i < 9; ++i)
    {
        if(i < t.test[n].getCount())
        {
            QString qs(t.test[n].getAns(i));
            elementy[i]->setText(qs);
            wskazniki[i]->setEnabled(true);
        }
        else if(i == t.test[n].getCount())
        {
            elementy[i]->setText("");
            elementy[i]->setDisabled(false);
            wskazniki[i]->setDisabled(true);
        }
            else
            {
                elementy[i]->setText("");
                elementy[i]->setDisabled(true);
                wskazniki[i]->setDisabled(true);
            }
    }

    if (t.test[n].right_ans < 0)
    {
        clear();
    }

    if (t.test[n].right_ans > -1)
    {
      wskazniki[t.test[n].right_ans]->setChecked(true);
    }


    ui->pushButton->setDisabled(false);
    ui->pushButton_3->setDisabled(false);

    if (n >= t.test.size() -1)
    {
        ui->pushButton->setText("Dodaj");
        ui->pushButton_3->setDisabled(false);
    }
    else
    {
        ui->pushButton->setText("Następne");
        ui->pushButton_3->setDisabled(false);
    }
    if (n  == 0)
    {
        ui->pushButton_3->setDisabled(true);
    }
    repaint();
}
/**
 *@fn MainWindow::loadQuestion(int)
 *@brief wczytywanie pytania na ekran
 *@param n numer pytania
*/
void MainWindow::clear()
{
    for(int i = 0; i < 9 ;++i)
    {
        wskazniki[i]->setCheckable(false);
        wskazniki[i]->setCheckable(true);

    }
}
/**
 *@fn MainWindow::clear()
 *@brief Czyszczenie zaznaczenia odpowiedzi
*/
int MainWindow::sprawdzElementy()
{
    for (int i = 0; i < 9; ++i)
    {
        if(wskazniki[i]->isChecked()&&elementy[i]->text()=="")
            return 1;
    }
    bool exists = false;
    for (int i = 1; i < 9; ++i)
    {
        if(elementy[i-1]->text()=="")
            exists = true;
        if (elementy[i]->text()!=""&& exists)
            return 2;
    }
return 0;
}
/**
 *@fn MainWindow::sprawdzElementy()
 *@brief sprawdzenie poprawności odpowiedzi
 *@return i kod błędu
 *@return 0 jeśli poprawne
*/
void MainWindow::on_radioButton_clicked()
{
    wskazniki[0]->setChecked(true);
}

void MainWindow::on_radioButton_2_clicked()
{
    wskazniki[1]->setChecked(true);
}

void MainWindow::on_radioButton_3_clicked()
{
    wskazniki[2]->setChecked(true);
}

void MainWindow::on_radioButton_4_clicked()
{
    wskazniki[3]->setChecked(true);
}

void MainWindow::on_radioButton_5_clicked()
{
    wskazniki[4]->setChecked(true);
}

void MainWindow::on_radioButton_6_clicked()
{
    wskazniki[5]->setChecked(true);
}

void MainWindow::on_radioButton_7_clicked()
{
    wskazniki[6]->setChecked(true);
}

void MainWindow::on_radioButton_8_clicked()
{
    wskazniki[7]->setChecked(true);
}
void MainWindow::on_radioButton_9_clicked()
{
    wskazniki[8]->setChecked(true);
}
