#include <iostream>
/*
Operatory warunkowe:
> - wi�ksze
< - miejsze
>= - wi�ksze lub r�wne
<= - mniejsze lub r�wne
== - r�wne
/= - r�ne
*/





//Napisz program sprawdzaj�cy czy liczba jest dodatnie czy nie.
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

