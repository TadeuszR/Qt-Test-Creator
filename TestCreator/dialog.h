#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QSpinBox>
#include <QVector>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
    QSpinBox* oceny[5];
    QVector<double> wynik;
    QVector<double> setWynik();
private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialog *ui;
};
/**
 *@class Dialog
 *@brief Klasa przechowująca skalę ocen
*/
#endif // DIALOG_H
