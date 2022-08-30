
#include <conio.h>
#include <Windows.h>

#include "SBomber.h"
#include "FileLoggerSingleton.h"
#include "ScreenSingleton.h"

using namespace std;

//========================================================================================================================

int main(void)
{
	FileLoggerSingleton::getInstance().OpenLogFile("log.txt");

    SBomber game;

    do {
        game.TimeStart();

        if (_kbhit())
        {
            game.ProcessKBHit();
        }

		ScreenSingleton::getInstance().ClrScr();

        game.DrawFrame();
        game.MoveObjects();
        game.CheckObjects();
		Sleep(30);

        game.TimeFinish();

    } while (!game.GetExitFlag());

	FileLoggerSingleton::getInstance().CloseLogFile();

    return 0;
}
