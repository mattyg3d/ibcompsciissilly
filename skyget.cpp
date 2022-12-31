#include "skyget.h"

//class variables




double getDistance(float playerX, float playerY, float playerZ, int xCoor, int yCoor, int zCoor)
{
    return sqrt(((playerX - xCoor) * (playerX - xCoor)) + ((playerY - yCoor) * (playerY - yCoor)) + ((abs(playerZ) - abs(zCoor)) * ((abs(playerZ) - abs(zCoor)))));
}
