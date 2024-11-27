#include <iostream>
#include <Windows.h>
#include <conio.h>
#include "Clock.h"

int main()
{
	int currentChar;
    std::cout << "Press ENTER key to start the timer";
	while (true)
	{
		if (_kbhit())
		{
			currentChar = _getch();
			if (currentChar == 13)
				countTime();

		}
	}
}
