// Instruction_Loop_while.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//Napisz program, który policzy sumê cyfr podanej przez u¿ytkownika liczby.
void task1()
{
	int number, rest;
	std::cout << "Give a number\n";
	std::cin >> number;
	int sum = 0;
	while (number != 0)
	{
		rest = number % 10;
		sum = sum + rest;
		number = number / 10;
	}

	std::cout << "Sum =  " << sum << "\n";
}
//Napisz program, ktry obliczy NWD, GCD(greatest common divider) dwóch liczb
void task2()
{
	int first_number, second_number, NWD;
	std::cout << "Give first number\n";
	std::cin >> first_number;
	std::cout << "Give second number\n";
	std::cin >> second_number;

	NWD = (first_number > second_number) ? second_number : first_number;
	if (first_number == 0 || second_number == 0)
	{
		if (first_number == 0)
			NWD = second_number;
		else if (second_number == 0)
			NWD = first_number;
	}
	else 
	{
		while (first_number % NWD != 0 || second_number % NWD != 0)
			NWD--;
	}
	std::cout << "Greatest common divider = " << NWD <<"\n";
}
void task3()
{
	int first_number, second_number, NWD, devinded;
	std::cout << "Give first number\n";
	std::cin >> first_number;
	std::cout << "Give second number\n";
	std::cin >> second_number;
	NWD = 1;
	devinded = 2;
	if (first_number == 0 || second_number == 0)
	{
		if (first_number == 0)
			NWD = second_number;
		else if (second_number == 0)
			NWD = first_number;
	}
	else
	{
		while (second_number >= devinded && first_number >= devinded)
		{
			if (second_number % devinded == 0 && first_number % devinded == 0)
			{
				second_number /= devinded;
				first_number /= devinded;
				NWD *= devinded;
			}
			else
				devinded++;
		}
	}
	std::cout << "Greatest common divider = " << NWD << "\n";
}
void task4()
{
	int first_number, second_number, NWD;
	while (second_number != 0)
	{
		int tmp_first_number = first_number;
		first_number = second_number;
		second_number = tmp_first_number % second_number;
	

	}
}
int main()
{
	//task1();
	//task2();
	task3();
}