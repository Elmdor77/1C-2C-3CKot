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
//Napisz program obliczaj¹cy œredni¹ arytmetyczn¹ elementów w tablicy liczb ca³kowitych.
void task2()
{
    // <LOWER_RANGE; UPPER_RANGE> przy za³o¿eniu, ¿e LOWER_RANGE <= UPPER_RANGE
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
    std::cout << "Œrednia wynosi: " << avg << "\n";
}

//Napisz program, który uzupe³ni tablicê liczbami losowymi a nastêpnie znajdzie minimum oraz maksimum.
void task3()
{
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
    int max = numbers[0];
    for (int i = 1; i < ARRAY_SIZE; i++)
    {
        if (numbers[1] > max)
            max = numbers[i];
    }
    std::cout << "Max = " << max << "\n";
    int min = numbers[0];
    for (int i = 1; i < ARRAY_SIZE; i++)
    {
        if (numbers[1] < max)
            max = numbers[i];
    }
    std::cout << "Min = " << max << "\n";
}
void task4()
{
    const long long UPPER_RANGE = 70;

    for (long long number_to_check = 2; number_to_check <= UPPER_RANGE; number_to_check++)
    {
        bool is_prime = true;
        for (long long i = 2; i <= number_to_check / 2; i++)
        {
            if (number_to_check % i == 0)
            {
                is_prime = false;
                break;
            }

        }
        if (is_prime)
            std::cout << number_to_check << ", ";
    }
    std::cout << "Done\n";

    //wersja 2
    bool sieveOfEratosthenes[UPPER_RANGE + 1];

    for (unsigned long long i = 2; i <= UPPER_RANGE; i++)
    {
        sieveOfEratosthenes[i] = true;
    }

    for (unsigned long long number = 2; number <= UPPER_RANGE; number++)
    {
        if (sieveOfEratosthenes[number])
        {
            for (long long numberToCrossOut = number + number; numberToCrossOut <= UPPER_RANGE; numberToCrossOut = numberToCrossOut + number)
                sieveOfEratosthenes[numberToCrossOut] = false;
        }
    }

    for (unsigned long long i = 2; i <= UPPER_RANGE; i++)
    {
        if (sieveOfEratosthenes[i])
            std::cout << i << ", ";
    }
    std::cout << "\n";
}
void task5()
{
    int number_of_week = 5;
    std::cout << "Give a number of a week\n";
    std::cin >> number_of_week;
    std::string day_names[] = { "Monday", "Tuesday,", "Wednesday ", "Thursday ", "Friday ", "Saturday ", "Sunday " };
    if (number_of_week >= 0 && number_of_week <= 6)
        std::cout << "The day is:   " << day_names[number_of_week - 1] << "\n";
    else
        std::cout << "Give a good number\n";
}
int main()
{
	task5();
}
		