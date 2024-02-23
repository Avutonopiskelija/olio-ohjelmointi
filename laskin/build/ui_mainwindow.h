/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineNum1;
    QLineEdit *lineNum2;
    QLineEdit *lineResult;
    QPushButton *btnN1;
    QPushButton *btnN2;
    QPushButton *btnN3;
    QPushButton *btnN4;
    QPushButton *btnN5;
    QPushButton *btnN6;
    QPushButton *btnN7;
    QPushButton *btnN8;
    QPushButton *btnN9;
    QPushButton *btnN0;
    QPushButton *addButton;
    QPushButton *subButton;
    QPushButton *divButton;
    QPushButton *multButton;
    QPushButton *clearButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 50, 91, 41));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(220, 50, 101, 41));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(390, 50, 131, 41));
        lineNum1 = new QLineEdit(centralwidget);
        lineNum1->setObjectName(QString::fromUtf8("lineNum1"));
        lineNum1->setGeometry(QRect(60, 90, 113, 24));
        lineNum2 = new QLineEdit(centralwidget);
        lineNum2->setObjectName(QString::fromUtf8("lineNum2"));
        lineNum2->setGeometry(QRect(200, 90, 113, 24));
        lineResult = new QLineEdit(centralwidget);
        lineResult->setObjectName(QString::fromUtf8("lineResult"));
        lineResult->setGeometry(QRect(340, 90, 131, 21));
        btnN1 = new QPushButton(centralwidget);
        btnN1->setObjectName(QString::fromUtf8("btnN1"));
        btnN1->setGeometry(QRect(60, 130, 80, 24));
        btnN2 = new QPushButton(centralwidget);
        btnN2->setObjectName(QString::fromUtf8("btnN2"));
        btnN2->setGeometry(QRect(170, 130, 80, 24));
        btnN3 = new QPushButton(centralwidget);
        btnN3->setObjectName(QString::fromUtf8("btnN3"));
        btnN3->setGeometry(QRect(280, 130, 80, 24));
        btnN4 = new QPushButton(centralwidget);
        btnN4->setObjectName(QString::fromUtf8("btnN4"));
        btnN4->setGeometry(QRect(60, 160, 80, 24));
        btnN5 = new QPushButton(centralwidget);
        btnN5->setObjectName(QString::fromUtf8("btnN5"));
        btnN5->setGeometry(QRect(170, 160, 80, 24));
        btnN6 = new QPushButton(centralwidget);
        btnN6->setObjectName(QString::fromUtf8("btnN6"));
        btnN6->setGeometry(QRect(280, 160, 80, 24));
        btnN7 = new QPushButton(centralwidget);
        btnN7->setObjectName(QString::fromUtf8("btnN7"));
        btnN7->setGeometry(QRect(60, 190, 80, 24));
        btnN8 = new QPushButton(centralwidget);
        btnN8->setObjectName(QString::fromUtf8("btnN8"));
        btnN8->setGeometry(QRect(170, 190, 80, 24));
        btnN9 = new QPushButton(centralwidget);
        btnN9->setObjectName(QString::fromUtf8("btnN9"));
        btnN9->setGeometry(QRect(280, 190, 80, 24));
        btnN0 = new QPushButton(centralwidget);
        btnN0->setObjectName(QString::fromUtf8("btnN0"));
        btnN0->setGeometry(QRect(60, 220, 80, 24));
        addButton = new QPushButton(centralwidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(380, 130, 41, 31));
        subButton = new QPushButton(centralwidget);
        subButton->setObjectName(QString::fromUtf8("subButton"));
        subButton->setGeometry(QRect(380, 170, 41, 31));
        divButton = new QPushButton(centralwidget);
        divButton->setObjectName(QString::fromUtf8("divButton"));
        divButton->setGeometry(QRect(380, 250, 41, 31));
        multButton = new QPushButton(centralwidget);
        multButton->setObjectName(QString::fromUtf8("multButton"));
        multButton->setGeometry(QRect(380, 210, 41, 31));
        clearButton = new QPushButton(centralwidget);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        clearButton->setGeometry(QRect(170, 220, 191, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Number 1", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Number 2", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Result", nullptr));
        btnN1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        btnN2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        btnN3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        btnN4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        btnN5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        btnN6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        btnN7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        btnN8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        btnN9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        btnN0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        subButton->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        divButton->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        multButton->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        clearButton->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
