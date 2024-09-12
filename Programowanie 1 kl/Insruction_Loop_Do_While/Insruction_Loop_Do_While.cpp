#include <iostream>

//Napisz program, kt�ry ma pobra� od u�ytkownika liczb� dodatni�. 
//Zabezpiecz program przed pobieraniem liczb ujemnych.
void task1()
{
	int number_from_user;

	do
	{
		std::cout << "Give a positive number:\n";
		std::cin >> number_from_user;
	} while (number_from_user < 0);

	std::cout << "Your number " << number_from_user << "\n";
}

//Napisz program, kt�ry wylosuje liczb� a nast�pnie uzytkownik b�dzie musia� j� zgadn��.
void task2()
{
	const int lower_range = 1;
	const int upper_range = 100;
	srand(time(NULL));
	int random_number = rand() % (upper_range - lower_range + 1) + lower_range;
	//std::cout << randomNumber << "\n";

	int number_from_user;

	
	do
	{
		std::cout << "Give a number:\n";
		std::cin >> number_from_user;
		if (number_from_user > random_number)
			std::cout << "Number to big\n";
		if (number_from_user < random_number)
			std::cout << "Number to small\n";
	} while (number_from_user != random_number);
	std::cout << "Well done\n";

}

//Napisz program wy�wietlaj�cy liczby ca�kowite z przedzia�u <1,x>.
//Gdzie x podaje u�ytkownika.
void task3()
{
	//std::cout << "1, 2, 3, 4, 5, 6 \n";
	unsigned long long number_compartment;
	std::cout << "Give a number bigger than 1\n";
	std::cin >> number_compartment;
	std::cout << "1, ";
	unsigned long long current_number = 0;
	do
	{
		current_number = current_number + 1;
		current_number += 1;
		current_number++;
		++current_number;
		std::cout << current_number << ", ";
	} while (number_compartment > current_number);
}

//Napisz program, kt�ry policzy sum� cyfr podanej przez u�ytkownika liczby.
void task4()
{
	int number;
	std::cout << "Give a number\n";
	std::cin >> number;

	int sum = 0;
	int rest;
	do
	{
		rest = number % 10;
		sum = sum + rest;
		number = number / 10;
	} while (number != 0);

	std::cout << "Sum =  " << sum << "\n";
	
}

//* Popro� u�ytkownika o podawanie liczb, a� wprowadzi zero. 
//Oblicz sum� oraz �redni� arytmetyczn� wprowadzonych liczb.
void task5()
{
	int number;
	int sum = 0;
	int number_of_numbers = 0;
	do
	{
		std::cout << "Give a number:\n";
		std::cin >> number;
		sum = sum + number;
		number_of_numbers++;
	} while (number != 0);
	number_of_numbers--;
	std::cout << "Sum =  " << sum << "\n";
	double avg = sum * 1.0 / number_of_numbers ;
	std::cout << "Average =  " << avg << "\n";
}
//Napisz program, kt�ry poprosi u�ytkownika o wprowadzenie dowolnej liczby ca�kowitej. Nast�pnie program powinien obliczy� i wy�wietli� liczb� cyfr
void task6()
{
	unsigned long long number_from_user;
	int digit = 0;
	std::cout << "Give a number\n";
	std::cin >> number_from_user;
	do 
	{
		number_from_user = number_from_user / 10;
		digit++;
	} while (number_from_user != 0);
	std::cout << "Number of digits = " <<  digit;
}







int main()
{
	setlocale(LC_CTYPE, "polish");
	task5();

}