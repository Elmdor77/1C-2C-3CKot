#include <iostream>
/*
Operatory warunkowe:
> - wiêksze
< - miejsze
>= - wiêksze lub równe
<= - mniejsze lub równe
== - równe
!= - ró¿ne
*/





//Napisz program sprawdzaj¹cy czy liczba jest dodatnie czy nie.
void task1()
{
	int number1;
	std::cout << "Give a number:\n";
	std::cin >> number1;
	if (number1 > 0)
		std::cout << "Number is positive\n";
	if (number1 < 0)
		std::cout << "Number is negative\n";
	if (number1 == 0)
		std::cout << "Number is equal to 0\n";



}
//Napisz program sprawdzaj¹cy czy liczba jest parzysta czy nieparzysta
void task2()
{
	int number2, rest;
	std::cout << "Give a number:\n";
	std::cin >> number2;
	rest = number2 % 2;
	/*
	if (rest == 0)
		std::cout << "Number is even\n";
	if (rest != 0) //rest == 1
		std::cout << "Number is odd\n";
	*/
	if (rest == 0)
		std::cout << "Number is even\n";
	else
		std::cout << "Number is odd\n";
}

int main()
{
	//task1();
	task2();
}

