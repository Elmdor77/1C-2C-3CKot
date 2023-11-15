#include <iostream>

//Napisz program, kt�ry ma pobra� od u�ytkownika liczb� dodatni�. 
//Zabezpiecz program przed pobieraniem liczb ujemnych.
void task2()
{
	int numberFromUser;

	do
	{
		std::cout << "Podaj liczb� dodatni�:\n";
		std::cin >> numberFromUser;
	} while (numberFromUser < 0);

	std::cout << "Liczba dodatnia pobrana od uzytkownika " << numberFromUser << "\n";
}

//Napisz program, kt�ry wylosuje liczb� a nast�pnie uzytkownik b�dzie musia� j� zgadn��.
void task3()
{
	const int LOWER_RANGE = 1;
	const int UPPER_RANGE = 100;
	srand(time(NULL));
	int randomNumber = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
	//std::cout << randomNumber << "\n";

	int numberFromUser;

	do
	{
		std::cout << "Podaj liczb�:\n";
		std::cin >> numberFromUser;
		if (numberFromUser > randomNumber)
			std::cout << "Za du�a liczba\n";
		if (numberFromUser < randomNumber)
			std::cout << "Za ma�a liczba\n";
	} while (numberFromUser != randomNumber);
	std::cout << "Gratulacje!!!!\n";

}

//Napisz program wy�wietlaj�cy liczby ca�kowite z przedzia�u <1,x>.
//Gdzie x pdaje u�ytkownika.
void task4()
{
	//std::cout << "1, 2, 3, 4, 5, 6 \n";
	unsigned long long upperRange;
	std::cout << "Podaj g�rny zakres wi�kszy b�d� r�wny 1\n";
	std::cin >> upperRange;

	unsigned long long currentNumber = 0;
	do
	{
		currentNumber = currentNumber + 1;
		currentNumber += 1;
		currentNumber++;
		std::cout << currentNumber << ", ";
	} while (upperRange > currentNumber);
}

//Napisz program, kt�ry policzy sum� cyfr podanej przez u�ytkownika liczby.
void task5()
{

	int number;
	std::cout << "Podaj liczb�\n";
	std::cin >> number;

	int sum = 0;
	int rest;

	do
	{
		rest = number % 10;
		sum = sum + rest;
		number = number / 10;
	} while (number != 0);

	std::cout << "Suma " << sum << "\n";
	//4125
}

//* Popro� u�ytkownika o podawanie liczb, a� wprowadzi zero. 
//Oblicz sum� oraz �redni� arytmetyczn� wprowadzonych liczb.
void task6()
{
	int number;
	int sum = 0;
	int numberOfNumbers = 0;

	/*
	std::cout << "Podaj liczb�:\n";
	std::cin >> number;
	sum = sum + number;
	numberOfNumbers++;
	if (number != 0)
	{
		std::cout << "Podaj liczb�:\n";
		std::cin >> number;
		sum = sum + number;
		numberOfNumbers++;
		if (number != 0)
		{
			std::cout << "Podaj liczb�:\n";
			std::cin >> number;
			sum = sum + number;
			numberOfNumbers++;
			//if ...
		}
	}
	*/

	do
	{
		std::cout << "Podaj liczb�:\n";
		std::cin >> number;
		sum = sum + number;
		//if (number != 0)
		numberOfNumbers++;
	} while (number != 0);

	//numberOfNumbers--;
	std::cout << "Suma liczb wynosi " << sum << "\n";
	double avg = sum * 1.0 / numberOfNumbers;
	std::cout << "�rednia " << avg << "\n";
}

int main()
{
	task6();

}