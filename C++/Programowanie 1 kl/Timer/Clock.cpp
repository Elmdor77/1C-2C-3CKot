#include <iostream>
#include <Windows.h>
#include <conio.h>
#include "Clock.h"
int counter, hour, minute, second, isEnter;
void countTime()
{
	while (true)
	{
		system("cls");

		counter++;
		second = counter % 60;
		minute = (counter / 60) % 60;
		hour = counter / 60 / 60;
		if (hour < 10)
			std::cout << "0";
		std::cout << hour << ":";
		if (minute < 10)
			std::cout << "0";
		std::cout << minute << ":";
		if (second < 10)
			std::cout << "0";
		std::cout << second;

		Sleep(100);
		if (_kbhit() && _getch() == '\r')
			break;
	}
	system("cls");
	std::cout << "Total time " << counter << " seconds";
}