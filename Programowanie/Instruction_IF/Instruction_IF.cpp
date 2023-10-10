#include <iostream>
/*
Operatory warunkowe:
> - wiêksze
< - miejsze
>= - wiêksze lub równe
<= - mniejsze lub równe
== - równe
/= - ró¿ne
*/





//Napisz program sprawdzaj¹cy czy liczba jest dodatnie czy nie.
void task1()
{
	int number;
	std::cout << "Give a number:\n";
	std::cin >> number;
	if (number > 0)
		std::cout << "Number is positive\n";
	if (number < 0)
		std::cout << "Number is negative\n";
	if (number == 0)
		std::cout << "Number is equal to 0\n";



}



int main()
{
	task1();
}

