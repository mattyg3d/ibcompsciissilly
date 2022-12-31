#ifndef ACHIEVEMENTSWINDOW_H
#define ACHIEVEMENTSWINDOW_H

#include <QMainWindow>

namespace Ui {
class AchievementsWindow;
}

class AchievementsWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AchievementsWindow(QWidget *parent = nullptr);
    ~AchievementsWindow();

private:
    Ui::AchievementsWindow *ui;
};

#endif // ACHIEVEMENTSWINDOW_H
