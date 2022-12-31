#pragma once
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
    void setPoint(int x, int y);
    float actX = 0;
    float actY = 0;
    float actZ = 0;

private slots:

    void on_achBack_clicked();

    void on_achButton_clicked();

    void on_histBack_clicked();

    void on_histButton_clicked();

    void on_locBack_clicked();

    void on_locButton_clicked();

   // void on_distanceButton_clicked();

private:
    Ui::MainWindow *ui;
    //void achPress
};
#endif // MAINWINDOW_H
