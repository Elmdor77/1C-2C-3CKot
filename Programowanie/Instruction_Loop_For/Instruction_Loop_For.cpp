#include <iostream>
void task1()
{
	int number;
	std::cout << "Give a number\n";
	std::cin >> number;

	if (number < 0)
		number = number * -1;
	int tmpNumber = number;
	int numberOfDigit = 1;
	while (tmpNumber >= 10) //obliczam ilość cyfr
	{
		numberOfDigit++;
		tmpNumber = tmpNumber / 10;
	}
	int leftDivided = 1;
	while (numberOfDigit != 1) //liczę 10 do potęgi numberOfDigit - 1
	{
		leftDivided *= 10;
		numberOfDigit--;
	}
	int rightDivided = 10;
	int leftNumber = number;
	int rightNumber = number;
	bool isPalindrome = true;

	while (leftNumber > 10)
	{
		int leftDigit = leftNumber / leftDivided;
		int rightDigit = rightNumber % rightDivided;
		if (leftDigit != rightDigit)
		{
			isPalindrome = false;
			break;
		}
		leftNumber = leftNumber % leftDivided;
		rightNumber = rightNumber / rightDivided;

		leftDivided = leftDivided / 10;
	}
	if (isPalindrome)
		std::cout << "Liczba jest palindromem\n"; //true
	else
		std::cout << "Liczba nie jest palindromem\n"; //false
}
void task2()
{
	int number_repeat;
	std::cout << "Give how many times you want hello world to be written\n";
	std::cin >> number_repeat;
	/*while (number_repeat > 0)
	{
		std::cout << "Hello your computer is broken\n";
		number_repeat--;
	}*/
	for (int i = 0; i != number_repeat; i++)
	{
		std::cout << "Hello your computer is broken\n";
	}
	//for (int i = 0; i <=number_repeat; i+=2)
	//{
	//	std::cout << "Hello your computer is broken\n";//co drugi
	//}
}
/*
* Program wyświetlający na ekranie ciąg Fibonacciego do 20 elementu (ciąg Fibonacciego to ciąg gdzie każdy element jest sumą dwóch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)

* Program, kóry wyświetli poniższe cztery zwory:
	****       54321        121212        122333
	***        65432        212121        223334444
	**         76543        121212        333444455555
	*          87654        212121        444455555666666

* Oblicz sumę szeregu 1/1^2 + 1/2^2 + 1/3^2 + ... +1/n^2. Jeżeli się nie pomylisz, to dla odpowiednio dużej wartości n po przemnożeniu jej przez 6 i spierwiastkowaniu powinieneś otrzymać wartość liczby π (suma szeregu jest równa π2/6). Zwróć uwagę, że pierwsza wartość indeksu to 1, a nie 0. Dokładność obliczeń można sprawdzić porównując z wartością odczytaną z własności Math.PI.

* Rozkład liczby na czynniki pierwsze
*/

//Program obliczający sumę liczb od 1 do 100
void task3()
{
	int sum = 0;
	for (int number_1_to_100 = 1; number_1_to_100 <= 100; number_1_to_100++)
	{
		std::cout << number_1_to_100 << "\n";
		sum = sum + number_1_to_100;
	}
	std::cout << "\nSum = " << sum << "\n";
}
//Program sprawdzający czy podana liczba jest liczbą doskonałą(czyli taką, której suma dzielników(z wyłączeniem samej siebie) jest równa danej liczbie, np. 6 jest liczbą doskonałą, ponieważ 1 + 2 + 3 = 6).
void task4()
{
	int number = 0;
	int deviders = 0;
	std::cout << "Give a number\n";
	std::cin >> number;
	int number_devider = number;
	while (number_devider > 1)
	{
		number_devider--;
		if (number % number_devider == 0)
			deviders = deviders + number_devider;
	}
	std::cout << deviders;
	if (deviders == number)
		std::cout << "\nNumber is perfect\n";
	else
		std::cout << "\nNumber isn't perfect\n";

}
//Program wyświetlający na ekranie kwadraty liczb od 1 do 100 (np. 1, 4, 9, 16 itd.)
void task5()
{
	for (int i = 1; i < 101; i++)
		std::cout << i << "*" << i << "=" << i * i << "\n";
}
//Program obliczający n!.Program wyświetlający na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4! itd.)
void task6()
{
	int number;
	std::cout << "Give a number\n";
	std::cin >> number;
	long long factorial = 1;
	for (int i = 1; i <= number; i++)
	{
		factorial = factorial * i;
		std::cout << i << "!=" << factorial << "\n";
	}
}
//Program wyświetlający na ekranie tabliczkę mnożenia od 1 do 9 (np. 1x1 = 1, 1x2 = 2, 1x3 = 3 itd.).
void task7() 
{
	for (int x = 1; x < 11; x++)
	{
		for (int y = 1; y < 11; y++)
		{
			std::cout << x << "x" << y << "=" << x * y << "\t";
		}
		std::cout << "\n";
	}
}
//Program wyświetlający na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100
void task8()
{
	for (int i = 1; i < 101; i++)
	{
		if (i % 3 == 0)
			std::cout << "Number devided by 3: " << i << "\n";

	}
}
///Program obliczający sumę kwadratów liczb od 1 do 10
void task9()
{
	int sum = 0;
	for (int i = 1; i < 11; i++)
	{
		std::cout << i << "*" << i << "=" << i * i<<"\n";
		sum = i * i + sum;
	}
	std::cout << "Sum =" << sum;
}
//Program wyświetlający na ekranie ciąg Fibonacciego do 20 elementu (ciąg Fibonacciego to ciąg gdzie każdy element jest sumą dwóch poprzednich
void task10()
{
	unsigned long long F1 = 0;
	unsigned long long F2 = 1;
	unsigned long long f = 0;
	std::cout << F1 << "\t" << F2 << "\t";
	for (int i = 2; i < 40; i++)
	{
		f = F1 + F2;
		F2 = f;
		F1 = F2;
		std::cout << f << "\t";
	}
}
/*Program, kóry wyświetli poniższe cztery wzory :
****	54321        121212        122333
***		65432        212121        223334444
**		76543        121212        333444455555
*		87654        212121        444455555666666*/
void task11()
{
	const int NUMBER_OF_LINES = 4;
	for (int lineNumber = 0; lineNumber < NUMBER_OF_LINES; lineNumber++)
	{
		for (int i = 0; i < NUMBER_OF_LINES - lineNumber; i++)
			std::cout << "*";

		std::cout << "\n";
	}
	for (int lineNumber = 0; lineNumber < NUMBER_OF_LINES; lineNumber++)
	{
		for (int i = 5; i > 0; i--)
			std::cout << i + lineNumber;

		std::cout << "\n";
	}
	for (int lineNumber = 0; lineNumber < NUMBER_OF_LINES; lineNumber++)
	{
		for (int i = 0; i < NUMBER_OF_LINES - lineNumber; i++)
			std::cout << "*";

		std::cout << "\n";
	}
	//2 row
	for (int line_number = 0; line_number < NUMBER_OF_LINES; line_number++)
	{
		if (line_number % 2 == 0)
			std::cout << "121212";
		else
			std::cout << "212121";
		std::cout << "\n";
	}
	for (int line_number = 0; line_number < NUMBER_OF_LINES; line_number++)
	{
		for (int i = 0; i < NUMBER_OF_LINES - line_number; i++)
			std::cout << "*";
		std::cout << "\n";
	}
	int i = 1;
	int x = 0;
	int y = 3;
	for (int line_number = 0; line_number < NUMBER_OF_LINES; line_number++)
	{
		for (; y < 4; y++)
		{
			for (;i < 4; i++)
			{
				for (x = 0; x < i; x++)
					std::cout << i;
			}
			std::cout << "\n";
		}
		std::cout << "\n";
	}

}

int main()
{
	//task1();
	//task2();
	//task3();
	//task4();
	//task5();
	//task6();
	//task7();
	//task8();
	//task9();
	//task10();
	task11();

}