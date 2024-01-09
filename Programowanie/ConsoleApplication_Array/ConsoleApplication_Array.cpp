// ConsoleApplication_Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//Program wczyta 5 liczb i wyœwietli je w odwrotnej kolejnoœci
void task1()
{
	const unsigned short ARRAY_SIZE = 5;
	int numbers[ARRAY_SIZE];
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		std::cout << "Give a number\n";
		std::cin >> numbers[i];
	}
	std::cout << "Numbers in reverse\n";
	for (int i = ARRAY_SIZE - 1; i >= 0; i--)
	{
		std::cout << numbers[i] << ", ";
	}
	std::cout << "\n";
}
int main()
{
	task1();
}
