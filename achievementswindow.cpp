#include "achievementswindow.h"
#include "ui_achievementswindow.h"

AchievementsWindow::AchievementsWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AchievementsWindow)
{
    ui->setupUi(this);
}

AchievementsWindow::~AchievementsWindow()
{
    delete ui;
}
