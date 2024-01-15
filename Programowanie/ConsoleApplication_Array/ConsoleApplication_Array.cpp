// ConsoleApplication_Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//Program wczyta 5 liczb i wy�wietli je w odwrotnej kolejno�ci
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
//Napisz program obliczaj�cy �redni� arytmetyczn� element�w w tablicy liczb ca�kowitych.
void task2()
{
    // <LOWER_RANGE; UPPER_RANGE> przy za�o�eniu, �e LOWER_RANGE <= UPPER_RANGE
    const unsigned short LOWER_RANGE = 5;
    const unsigned short UPPER_RANGE = 7;

    const unsigned short ARRAY_SIZE = 3;
    int numbers[ARRAY_SIZE];

    srand(time(0));

    std::cout << "wylosowane liczby:\n";
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
        std::cout << numbers[i] << ", ";
    }
    std::cout << "\n";

    int sum = 0;
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        sum = sum + numbers[i];
    }

    double avg = sum * 1.0 / ARRAY_SIZE;
    std::cout << "�rednia wynosi: " << avg << "\n";
}

//Napisz program, kt�ry uzupe�ni tablic� liczbami losowymi a nast�pnie znajdzie minimum oraz maksimum.
void task3()
{

}
int main()
{
	task1();
}
		