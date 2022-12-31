#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include <QPixmap>
#include <skyget.h>
#include "location.h"
#include <vector>
#include <string>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //creates the map image on the main page
    QPixmap pm("C:/Qt/resources/mainMap.jpg"); // <- path to image file
    ui->mapMain->setPixmap(pm);
    ui->mapMain->setScaledContents(true);
    QPixmap ppp("C:/Qt/resources/pointerpng.png"); // <- path to image file
    ui->pp->setPixmap(ppp);
    ui->pp->setScaledContents(true);
    //ui->pp->setCoordinate((x,y,30,40))

}

//void setLocationLabel(std::vector<std::string> l)
//{
//    ui->locList->setText()
//}

//void setPoint(int x, int y)
//{
//
//}
//static float actX = 0;
//static float actY = 0;
//static float actZ = 0;
//
//static Location whiterun("Whiterun", 19160, -7430, 3612);
//Location riften("Riften", 174338, -91783, 11127);
//Location markarth("Markarth", -173116, 5478, 3349);
//Location falkreath("Falkreath", -30309, -86270, 3107);
//Location solitude("Solitude", -66134, 104196, 8430);
//Location winterhold("Winterhold", 109883, 100639, 9028);
//Location dawnstar("Dawnstar", 26331, 101143, 13255);
//Location windhelm("Windhelm", 135015, 33612, 12573);
//Location morthal("Morthal", -39375, 66213, 13950);
//std::vector<Location> locList = {whiterun, riften, markarth, falkreath, solitude, winterhold, dawnstar, windhelm, morthal};


MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_achBack_clicked()
{
    ui -> stackedWidget -> setCurrentIndex(0);
}


void MainWindow::on_achButton_clicked()
{
    ui -> stackedWidget -> setCurrentIndex(1);
}


void MainWindow::on_histBack_clicked()
{
    ui -> stackedWidget -> setCurrentIndex(0);
}


void MainWindow::on_histButton_clicked()
{
    ui -> stackedWidget -> setCurrentIndex(2);
}


void MainWindow::on_locBack_clicked()
{
    ui -> stackedWidget -> setCurrentIndex(0);
}


void MainWindow::on_locButton_clicked()
{
    ui -> stackedWidget -> setCurrentIndex(3);
}


//void MainWindow::on_distanceButton_clicked()
//{
//
//    QString text = ui -> input -> toPlainText();
//    bool incomplete = true;
//    for(unsigned long long i = 0; i < locList.size(); i++)
//    {
//        if(text.toLower() != locList[i].getLocName())
//        {
//            incomplete = false;
//        }
//        else
//        {
//            do
//            {
//                double theDistance = getDistance(actX, actY, actZ, locList[i].getX(), locList[i].getY(), locList[i].getZ());
//                if(theDistance < 1000)
//                {
//                    incomplete = false;
//                }
//                else
//                {
//                    incomplete = true;
//                }
//            }while(incomplete);
//        }
//    }
//
//}

