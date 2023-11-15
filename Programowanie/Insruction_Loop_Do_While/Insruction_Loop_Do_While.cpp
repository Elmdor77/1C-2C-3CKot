#include <iostream>

//Napisz program, kt�ry ma pobra� od u�ytkownika liczb� dodatni�. 
//Zabezpiecz program przed pobieraniem liczb ujemnych.
void task1()
{
	int numberFromUser;

	do
	{
		std::cout << "Give a positive number:\n";
		std::cin >> numberFromUser;
	} while (numberFromUser < 0);

	std::cout << "Your number " << numberFromUser << "\n";
}

//Napisz program, kt�ry wylosuje liczb� a nast�pnie uzytkownik b�dzie musia� j� zgadn��.
void task2()
{
	const int LOWER_RANGE = 1;
	const int UPPER_RANGE = 100;
	srand(time(NULL));
	int randomNumber = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
	//std::cout << randomNumber << "\n";

	int numberFromUser;

	
	do
	{
		std::cout << "Give a number:\n";
		std::cin >> numberFromUser;
		if (numberFromUser > randomNumber)
			std::cout << "Number to big\n";
		if (numberFromUser < randomNumber)
			std::cout << "Number to small\n";
	} while (numberFromUser != randomNumber);
	std::cout << "Well done\n";

}

//Napisz program wy�wietlaj�cy liczby ca�kowite z przedzia�u <1,x>.
//Gdzie x pdaje u�ytkownika.
void task3()
{
	//std::cout << "1, 2, 3, 4, 5, 6 \n";
	unsigned long long upperRange;
	std::cout << "Give a number bigger than 1\n";
	std::cin >> upperRange;
	std::cout << "1, ";
	unsigned long long currentNumber = 0;
	do
	{
		currentNumber = currentNumber + 1;
		currentNumber += 1;
		currentNumber++;
		++currentNumber;
		std::cout << currentNumber << ", ";
	} while (upperRange > currentNumber);
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
	int numberOfNumbers = 0;
	do
	{
		std::cout << "Give a number:\n";
		std::cin >> number;
		sum = sum + number;
		//if (number != 0)
		numberOfNumbers++;
	} while (number != 0);

	//numberOfNumbers--;
	std::cout << "Sum =  " << sum << "\n";
	double avg = sum * 1.0 / numberOfNumbers;
	std::cout << "Average =  " << avg << "\n";
}
//Napisz program, kt�ry poprosi u�ytkownika o wprowadzenie dowolnej liczby ca�kowitej. Nast�pnie program powinien obliczy� i wy�wietli� liczb� cyfr
void task6()
{
	int number_from_user;
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
	task6();

}