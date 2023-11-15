#include <iostream>
//Napisz program, który ma pobraæ od u¿ytkownika liczbê dodatni¹.
//Zabezpiecz program przed pobieraniem liczb ujemnych.

void task1()
{
	/*int numberFromUser;
	std::cout << "Give a positive number:\n";
	std::cin >> numberFromUser;
	if (numberFromUser < 0)
	{
		std::cout << "Give a positive number:\n";
		std::cin >> numberFromUser;
		if (numberFromUser < 0)
		{
			std::cout << "Give a positive number:\n";
			std::cin >> numberFromUser;
			if (numberFromUser < 0)
			{
				std::cout << "Give a positive number:\n";
				std::cin >> numberFromUser;
				if (numberFromUser < 0)
				{
					std::cout << "Give a positive number:\n";
					std::cin >> numberFromUser;
					/wklejamy ca³ego If'a
				}
			}
		}
	}
	std::cout << "Liczba dodatnia pobrana od uzytkownika " << numberFromUser << "\n"; */


	int numberFromUser;
	do
	{
		std::cout << "Give a positive number:\n";
		std::cin >> numberFromUser;
	} while (numberFromUser < 0);
	std::cout << "Well done!\n";
}
//Napisz program ,tóry wylosuje losow¹ liczbe, a nastêpnie urzytkownik ma j¹ zgadn¹æ
void task2()
{
	const int LOWER_RANGE = 7;
	const int UPPER_RANGE = 15;
	srand(time(NULL));
	int random_number = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
	std::cout << random_number;
	int number_from_user;
	/*std::cout << "Give a number";
	std::cin >> number_from_user;
	if (number_from_user != random_number)
	{
		std::cout << "Give a number";
		std::cin >> number_from_user;
		if (number_from_user != random_number)
		{
			std::cout << "Give a number";
			std::cin >> number_from_user;
			if (number_from_user != random_number)
		}
	}*/
	do
	{
		std::cout << "\nGive a number\n";
		std::cin >> number_from_user;
		if (number_from_user > random_number)
			std::cout << "Lower\n";
		if (number_from_user < random_number)
			std::cout << "Higher\n";
	} while (number_from_user != random_number);

	std::cout << "Well done\n";
}
//Napiszprogram wypisuj¹cy liczby w zbiorze <1, x>
void task3()
{
	long long upper_range;
	std::cout << "Give a number greater then 1\n";
	std::cin >> upper_range;
	long long current_number = 0;
	do
	{
		current_number = current_number + 1;
		/*current_number += 1;
		++current_number;
		current_number++;*/
		std::cout << current_number << ", ";
	} while (upper_range > current_number);
}

//Napisz program, który policzy sumê cyfr podanej przez u¿ytkownika liczby.
void task4()
{

	int number;
	std::cout << "Podaj liczbê\n";
	std::cin >> number;

	int sum = 0;
	int rest;

	/*
	rest = number % 10;
	sum = sum + rest;
	number = number / 10;
	if (number != 0)
	{
		rest = number % 10;
		sum = sum + rest;
		number = number / 10;
		if (number != 0)
		{
			rest = number % 10;
			sum = sum + rest;
			number = number / 10;
			if (number != 0)
			{
				rest = number % 10;
				sum = sum + rest;
				number = number / 10;
				//if (number != 0) ...
			}
		}
	}
	*/

	do
	{
		rest = number % 10;
		sum = sum + rest;
		number = number / 10;
	} while (number != 0);

	std::cout << "Suma " << sum << "\n";
}
	//Popeoœ u¿ytkownika o podawanie liczb a¿ wprowadzi 0. Oblicz sumê oraz sredni¹ arytmetyczb¹ liczb.
void task5()
{

	int number_not_zero;
	int sum = 0;
	int number_of_numbers = 0;
	do {

		std::cout << "Give a number";
		std::cin >> number_not_zero;
		sum = sum + number_not_zero;
		number_of_numbers++;
	} while (number_not_zero != 0);

	std::cout << "Suma = " << sum << "\n";
	double avg = sum / number_of_numbers;
	std::cout << "Œrednia = " << avg << "\n";
}



	int main()
	{
		//task1();
		//task2();
		//task3();
		//task4();
		task5();
	}


 


