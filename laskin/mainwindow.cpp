#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>


float number1,number2,result=0;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


   connect (ui->addButton, SIGNAL(released()), this, SLOT(numberClickedHandler()));
   connect (ui->subButton, SIGNAL(released()), this, SLOT(numberClickedHandler()));
   connect (ui->divButton, SIGNAL(released()), this, SLOT(numberClickedHandler()));
   connect (ui->multButton, SIGNAL(released()), this, SLOT(numberClickedHandler()));
   connect (ui->addButton, SIGNAL(released()), this, SLOT(numberClickedHandler()));
   connect (ui->btnN0, SIGNAL(released()), this, SLOT(numberClickedHandler()));
   connect (ui->btnN1, SIGNAL(released()), this, SLOT(numberClickedHandler()));
   connect (ui->btnN2, SIGNAL(released()), this, SLOT(numberClickedHandler()));
   connect (ui->btnN3, SIGNAL(released()), this, SLOT(numberClickedHandler()));
   connect (ui->btnN4, SIGNAL(released()), this, SLOT(numberClickedHandler()));
   connect (ui->btnN5, SIGNAL(released()), this, SLOT(numberClickedHandler()));
   connect (ui->btnN6, SIGNAL(released()), this, SLOT(numberClickedHandler()));
   connect (ui->btnN7, SIGNAL(released()), this, SLOT(numberClickedHandler()));
   connect (ui->btnN8, SIGNAL(released()), this, SLOT(numberClickedHandler()));
   connect (ui->btnN9, SIGNAL(released()), this, SLOT(numberClickedHandler()));
   connect (ui->clearButton, SIGNAL(released()), this, SLOT(numberClickedHandler()));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::numberClickedHandler()
{
    QPushButton * btnN= qobject_cast<QPushButton*>(sender());


        QString name = btnN->text();

        if (ui->lineNum1->text().isEmpty()) {
            ui->lineNum1->setText(name);
        }
        else if (ui->lineNum2->text().isEmpty()) {
            ui->lineNum2->setText(name);
        }
        else {

            qDebug() << "Set operator";
        }
    qDebug() << "Button name: "<< name;



}
void MainWindow::on_lineNum1_textChanged(const QString &arg1)
{
    number1=arg1.toFloat();

}


void MainWindow::on_lineNum2_textChanged(const QString &arg1)
{
    number2=arg1.toFloat();
}



void MainWindow::on_addButton_clicked()
{
    result=number1+number2;
    ui->lineResult->setText(QString::number(result));
}


void MainWindow::on_subButton_clicked()
{
    result=number1-number2;
    ui->lineResult->setText(QString::number(result));
}


void MainWindow::on_multButton_clicked()
{
    result=number1*number2;
    ui->lineResult->setText(QString::number(result));
}


void MainWindow::on_divButton_clicked()
{
    result=number1/number2;
    ui->lineResult->setText(QString::number(result));
}


void MainWindow::on_clearButton_clicked()
{
    x=0;
    QString s= QString::number(x);
    ui->lineResult->clear();
    ui->lineNum1->clear();
    ui->lineNum2->clear();

}

