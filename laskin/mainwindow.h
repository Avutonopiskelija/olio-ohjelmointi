#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:

    void on_lineNum1_textChanged(const QString &arg1);

    void on_lineNum2_textChanged(const QString &arg1);


    void on_addButton_clicked();

    void on_subButton_clicked();

    void on_multButton_clicked();

    void on_divButton_clicked();

    void on_clearButton_clicked();

    void numberClickedHandler();

private:
    Ui::MainWindow *ui;
    int x=0;


};
#endif // MAINWINDOW_H
