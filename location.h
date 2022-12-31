#pragma once

#ifndef LOCATION_H
#define LOCATION_H
#include <string>
#include <vector>
#include <QString>
class Location
{
private:
    QString locName;
    int locX;
    int locY;
    int locZ;
public:
    Location(QString name, int x, int y, int z);

    QString getLocName()
    {
        return locName;
    }
    int getX()
    {
        return locX;
    }
    int getY()
    {
        return locY;
    }
    int getZ()
    {
        return locZ;
    }
    void setLocName(QString n)
    {
        this->locName = n;
    }
};

#endif // LOCATION_H
