#include "mainwindow.h"
#include "location.h"
#include <QApplication>
#include "proc.h"
#include <iostream>
#include <Windows.h>
#include <chrono>
#include <thread>
#include <QLabel>
#include <ui_mainwindow.h>
#include <cmath>
#include "skyget.h"
#include "mythread.h"
#include <qtcore/qcoreapplication>

int main(int argc, char *argv[])
{
    using namespace std::this_thread;
    using namespace std::chrono;
    using namespace std;
    //Creates main window
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    //MyThread mThread1;
    //mThread1.name = "myThread1";



    HANDLE hProcess = 0;


    DWORD procID = getProcID(L"SkyrimSE.exe");

    uintptr_t moduleBase = 0;

    if (procID)
        {
            hProcess = OpenProcess(PROCESS_ALL_ACCESS, NULL, procID);
            moduleBase = getModuleBaseAddress(procID, L"SkyrimSE.exe");
        }
    else
        {
            std::cout << "process not found, press enter to exit\n";
            getchar();
            return 0;
        }

    uintptr_t posX = moduleBase + 0x2FD6804;
    uintptr_t posY = moduleBase + 0x2FD6808;
    uintptr_t posZ = moduleBase + 0x32CD880;

    do
    {
    float actX = 0;
    float actY = 0;
    float actZ = 0;

    ReadProcessMemory(hProcess, (BYTE*)posX, &actX, sizeof(actX), nullptr);
    ReadProcessMemory(hProcess, (BYTE*)posY, &actY, sizeof(actY), nullptr);
    ReadProcessMemory(hProcess, (BYTE*)posZ, &actZ, sizeof(actZ), nullptr);

    std::cout << actX << std::endl;
    std::cout << actY << std::endl;
    std::cout << actZ << std::endl;



    sleep_for(seconds(1));
    } while (1);



    //creation of all of the locations and their coordinates
    Location whiterun("Whiterun", 19160, -7430, 3612);
    Location riften("Riften", 174338, -91783, 11127);
    Location markarth("Markarth", -173116, 5478, 3349);
    Location falkreath("Falkreath", -30309, -86270, 3107);
    Location solitude("Solitude", -66134, 104196, 8430);
    Location winterhold("Winterhold", 109883, 100639, 9028);
    Location dawnstar("Dawnstar", 26331, 101143, 13255);
    Location windhelm("Windhelm", 135015, 33612, 12573);
    Location morthal("Morthal", -39375, 66213, 13950);


    //double distance = getDistance(actX, actY, actZ, whiterun.getX(), whiterun.getY(), whiterun.getZ());
    //std::cout << distance << std::endl;

    return a.exec();
}
