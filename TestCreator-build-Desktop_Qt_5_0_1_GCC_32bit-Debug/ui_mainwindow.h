/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label;
    QLineEdit *lineQuestion;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QWidget *answer_0;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton;
    QLineEdit *lineEdit;
    QWidget *answer_1;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton_2;
    QLineEdit *lineEdit_2;
    QWidget *answer_2;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButton_3;
    QLineEdit *lineEdit_3;
    QWidget *answer_3;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButton_4;
    QLineEdit *lineEdit_4;
    QWidget *answer_4;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *radioButton_5;
    QLineEdit *lineEdit_5;
    QWidget *answer_5;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *radioButton_6;
    QLineEdit *lineEdit_6;
    QWidget *answer_6;
    QHBoxLayout *horizontalLayout_7;
    QRadioButton *radioButton_7;
    QLineEdit *lineEdit_7;
    QWidget *answer_7;
    QHBoxLayout *horizontalLayout_8;
    QRadioButton *radioButton_8;
    QLineEdit *lineEdit_8;
    QWidget *answer_8;
    QHBoxLayout *horizontalLayout_9;
    QRadioButton *radioButton_9;
    QLineEdit *lineEdit_9;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(571, 672);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_10->addWidget(label);

        lineQuestion = new QLineEdit(centralWidget);
        lineQuestion->setObjectName(QStringLiteral("lineQuestion"));

        horizontalLayout_10->addWidget(lineQuestion);


        verticalLayout_2->addLayout(horizontalLayout_10);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        answer_0 = new QWidget(groupBox);
        answer_0->setObjectName(QStringLiteral("answer_0"));
        horizontalLayout = new QHBoxLayout(answer_0);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        radioButton = new QRadioButton(answer_0);
        buttonGroup = new QButtonGroup(MainWindow);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->setExclusive(true);
        buttonGroup->addButton(radioButton);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        horizontalLayout->addWidget(radioButton);

        lineEdit = new QLineEdit(answer_0);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addWidget(answer_0);

        answer_1 = new QWidget(groupBox);
        answer_1->setObjectName(QStringLiteral("answer_1"));
        horizontalLayout_2 = new QHBoxLayout(answer_1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        radioButton_2 = new QRadioButton(answer_1);
        buttonGroup->addButton(radioButton_2);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        horizontalLayout_2->addWidget(radioButton_2);

        lineEdit_2 = new QLineEdit(answer_1);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addWidget(answer_1);

        answer_2 = new QWidget(groupBox);
        answer_2->setObjectName(QStringLiteral("answer_2"));
        horizontalLayout_3 = new QHBoxLayout(answer_2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        radioButton_3 = new QRadioButton(answer_2);
        buttonGroup->addButton(radioButton_3);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));

        horizontalLayout_3->addWidget(radioButton_3);

        lineEdit_3 = new QLineEdit(answer_2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout_3->addWidget(lineEdit_3);


        verticalLayout->addWidget(answer_2);

        answer_3 = new QWidget(groupBox);
        answer_3->setObjectName(QStringLiteral("answer_3"));
        horizontalLayout_4 = new QHBoxLayout(answer_3);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        radioButton_4 = new QRadioButton(answer_3);
        buttonGroup->addButton(radioButton_4);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));

        horizontalLayout_4->addWidget(radioButton_4);

        lineEdit_4 = new QLineEdit(answer_3);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        horizontalLayout_4->addWidget(lineEdit_4);


        verticalLayout->addWidget(answer_3);

        answer_4 = new QWidget(groupBox);
        answer_4->setObjectName(QStringLiteral("answer_4"));
        horizontalLayout_5 = new QHBoxLayout(answer_4);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        radioButton_5 = new QRadioButton(answer_4);
        buttonGroup->addButton(radioButton_5);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));

        horizontalLayout_5->addWidget(radioButton_5);

        lineEdit_5 = new QLineEdit(answer_4);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        horizontalLayout_5->addWidget(lineEdit_5);


        verticalLayout->addWidget(answer_4);

        answer_5 = new QWidget(groupBox);
        answer_5->setObjectName(QStringLiteral("answer_5"));
        horizontalLayout_6 = new QHBoxLayout(answer_5);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        radioButton_6 = new QRadioButton(answer_5);
        buttonGroup->addButton(radioButton_6);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));

        horizontalLayout_6->addWidget(radioButton_6);

        lineEdit_6 = new QLineEdit(answer_5);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        horizontalLayout_6->addWidget(lineEdit_6);


        verticalLayout->addWidget(answer_5);

        answer_6 = new QWidget(groupBox);
        answer_6->setObjectName(QStringLiteral("answer_6"));
        horizontalLayout_7 = new QHBoxLayout(answer_6);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        radioButton_7 = new QRadioButton(answer_6);
        buttonGroup->addButton(radioButton_7);
        radioButton_7->setObjectName(QStringLiteral("radioButton_7"));

        horizontalLayout_7->addWidget(radioButton_7);

        lineEdit_7 = new QLineEdit(answer_6);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));

        horizontalLayout_7->addWidget(lineEdit_7);


        verticalLayout->addWidget(answer_6);

        answer_7 = new QWidget(groupBox);
        answer_7->setObjectName(QStringLiteral("answer_7"));
        horizontalLayout_8 = new QHBoxLayout(answer_7);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        radioButton_8 = new QRadioButton(answer_7);
        buttonGroup->addButton(radioButton_8);
        radioButton_8->setObjectName(QStringLiteral("radioButton_8"));

        horizontalLayout_8->addWidget(radioButton_8);

        lineEdit_8 = new QLineEdit(answer_7);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));

        horizontalLayout_8->addWidget(lineEdit_8);


        verticalLayout->addWidget(answer_7);

        answer_8 = new QWidget(groupBox);
        answer_8->setObjectName(QStringLiteral("answer_8"));
        horizontalLayout_9 = new QHBoxLayout(answer_8);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        radioButton_9 = new QRadioButton(answer_8);
        buttonGroup->addButton(radioButton_9);
        radioButton_9->setObjectName(QStringLiteral("radioButton_9"));

        horizontalLayout_9->addWidget(radioButton_9);

        lineEdit_9 = new QLineEdit(answer_8);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));

        horizontalLayout_9->addWidget(lineEdit_9);


        verticalLayout->addWidget(answer_8);


        verticalLayout_2->addWidget(groupBox);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_11->addWidget(pushButton_3);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_11->addWidget(pushButton);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_11->addWidget(pushButton_2);


        verticalLayout_2->addLayout(horizontalLayout_11);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 571, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "Pytanie", 0));
        lineQuestion->setText(QString());
        radioButton->setText(QApplication::translate("MainWindow", "1.", 0));
        lineEdit->setText(QString());
        radioButton_2->setText(QApplication::translate("MainWindow", "2.", 0));
        lineEdit_2->setText(QString());
        radioButton_3->setText(QApplication::translate("MainWindow", "3.", 0));
        lineEdit_3->setText(QString());
        radioButton_4->setText(QApplication::translate("MainWindow", "4.", 0));
        lineEdit_4->setText(QString());
        radioButton_5->setText(QApplication::translate("MainWindow", "5.", 0));
        lineEdit_5->setText(QString());
        radioButton_6->setText(QApplication::translate("MainWindow", "6.", 0));
        lineEdit_6->setText(QString());
        radioButton_7->setText(QApplication::translate("MainWindow", "7.", 0));
        lineEdit_7->setText(QString());
        radioButton_8->setText(QApplication::translate("MainWindow", "8.", 0));
        lineEdit_8->setText(QString());
        radioButton_9->setText(QApplication::translate("MainWindow", "9.", 0));
        lineEdit_9->setText(QString());
        pushButton_3->setText(QApplication::translate("MainWindow", "Poprzednie", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Nast\304\231pne", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Stw\303\263rz test", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
