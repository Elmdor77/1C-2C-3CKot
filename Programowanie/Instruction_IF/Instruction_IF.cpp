#include <iostream>
/*
Operatory warunkowe:
> - wiêksze
< - miejsze
>= - wiêksze lub równe
<= - mniejsze lub równe
== - równe
!= - ró¿ne
Rodzaje warunku IF:
*if (number1 > 0) - warunek prosty IF

* rest = number2 % 2; - % - ró¿nica

* if (number3 >= 1 && /|| / ! number3 < 10) -  warunek z³o¿ony IF

* if ()	-- IF z wieloma linijkami po sprawdzeniu - {}
{
	std::cout <<		
	std::cin >>
}

Operatory logiczne:
&& - and
|| - or
! - not

a	b	a&&b	a||b	!a	!b
F	F	F		F		F	 T
F	T	F		T		F	 T
T	F	F		T		T	 F
T	T	T		T		T	 F

*/

/*
*. Napisz program, który poprosi u¿ytkownika o podanie roku i sprawdzi, czy jest to rok przestêpny. Wyœwietl odpowiedni komunikat.
*. Napisz program, który poprosi u¿ytkownika o podanie liczby ca³kowitej i sprawdzi, czy jest ona podzielna zarówno przez 3, jak i przez 5. Wyœwietl odpowiedni komunikat.
*. Napisz program, który poprosi u¿ytkownika o podanie masy cia³a (w kilogramach) i wzrostu (w metrach).
Na podstawie tych danych oblicz wskaŸnik BMI (Body Mass Index) i wyœwietl odpowiedni komunikat informuj¹cy o stanie zdrowia.
*. Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci trzech odcinków i sprawdzi, czy mo¿na zbudowaæ z nich trójk¹t. Wyœwietl odpowiedni komunikat.
*. Napisz program, który poprosi u¿ytkownika o podanie liczby dodatniej i obliczy jej pierwiastek kwadratowy, jeœli jest to mo¿liwe. Wyœwietl wynik lub odpowiedni komunikat, jeœli liczba jest ujemna.
*. Program sprawdzaj¹cy czy podana data jest poprawna (np. sprawdzaj¹c, czy dzieñ jest z zakresu od 1 do 31, miesi¹c od 1 do 12 itd.)

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
	rest = number2 % 2; // % - ró¿nica
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
//Napisz program sprawdzaj¹cy czy liczba jest z zakresu <1, 10)
void task3()
{
	float number3;
	std::cout << "Give a number:\n";
	std::cin >> number3;
	//wersja 1
	if (number3 >= 1 && number3 < 10) 
		std::cout << "Your number is in number range <1, 10)\n";
	else
		std::cout << "Your number is not in number range <1, 10)\n";
	//wersja 2
	if (number3 < 1 || number3 >= 10)
		std::cout << "Your number is not in number range <1, 10)\n";
	else
		std::cout << "Your number is in number range <1, 10)\n";
	//wersja 3
	if (!(number3 >= 1 && number3 < 10))
		std::cout << "Your number is not in number range <1, 10)\n";
	else
		std::cout << "Your number is  in number range <1, 10)\n";
	//wersja 4
	if (number3>= 1)
	{
		if (number3 < 10 )
			std::cout << "Your number is in number range <1, 10)\n";
		else
			std::cout << "Your number is not in number range <1, 10)\n";
	}
	else
		std::cout << "Your number is not in number range <1, 10)\n";
	//wersja 5
	if (number3 >= 1)
		if (number3 < 10)
			std::cout << "Your number is in number range <1, 10)\n";
		else
			std::cout << "Your number is not in number range <1, 10)\n";
	else
		std::cout << "Your number is not in number range <1, 10)\n";
}
//Napisz program wykonuj¹cy dzielenie dwóch liczb
void task4()
{
	float first_number, second_number, result;
	std::cout << "Give a first number:\n";
	std::cin >> first_number;
	std::cout << "Give a second number:\n";
	std::cin >> second_number;
	if (second_number && first_number != 0)
	{
		result = first_number / second_number;
		std::cout << "Result of division = " << result << "/n";
	}
	else
		std::cout << "Don't divine by 0 !!!! \n";

}
//Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb ca³kowitych i sprawdzi, czy s¹ one równe.Wyœwietl odpowiedni komunikat.
void task5()
{
	int number_1, number_2;
	std::cout << "Give a first number:\n";
	std::cin >> number_1;
	std::cout << "Give a second number:\n";
	std::cin >> number_2;
	if (number_1 == number_2)
		std::cout << "Numbers are equall\n";
	else
		std::cout << "Numbers are not equall\n";
}
//Napisz program, który poprosi u¿ytkownika o podanie wieku i sprawdzi, czy osoba jest pe³noletnia.Wyœwietl odpowiedni komunikat.
void task6()
{
	int number_age;
	std::cout << "Give your age:\n";
	std::cin >> number_age;
	if (number_age >= 18 && number_age < 120)
		std::cout << "You are of age.\n";
	if (number_age <	 18)
		std::cout << "You are a minor.\n";
	if (number_age >= 120)
		std::cout << "You are dead.\n";
}
//Napisz program, który poprosi u¿ytkownika o podanie liczby ca³kowitej i obliczy jej wartoœæ bezwzglêdn¹. Wyœwietl wynik.
void task7()
{
	int number_normal, number_absolute;
	std::cout << "Give a number:\n";
	std::cin >> number_normal;
	if (number_normal > 0)
		number_absolute = number_normal;
	else
		number_absolute = number_normal * -1;
	std::cout << number_absolute;
}
//Napisz program, który poprosi u¿ytkownika o podanie liczby od 1 do 7 i wyœwietli odpowiadaj¹cy mu dzieñ tygodnia.
void task8()
{
	int number_day;
	std::cout << "Give a number of day in a week:\n";
	std::cin >> number_day;
	if (number_day < 7 && number_day < 1)
	{
		if (number_day == 1)
			std::cout << "It is monday";
		if (number_day == 2)
			std::cout << "It is tuesday";
		if (number_day == 3)
			std::cout << "It is wednesday";
		if (number_day == 4)
			std::cout << "It is thursday";
		if (number_day == 5)
			std::cout << "It is friday";
		if (number_day == 6)
			std::cout << "It is saturday";
		if (number_day == 7)
			std::cout << "It is sunday";
	}
	else
		std::cout << "There are only 7 days in a week you fucking idiot";
}
//Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb ca³kowitych i wyœwietli wiêksz¹ z nich.
void task9()
{
	int number_first, number_second;
	std::cout << "Give a first number:\n";
	std::cin >> number_first;
	std::cout << "Give a second number:\n";
	std::cin >> number_second;
	if (number_first > number_second)
		std::cout << "first number is bigger"
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
	task9();

}


	