#include <iostream>
/*
DRY - don't repeat yourself
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
		std::cout << "Result of division = " << result << "\n";
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
	std::cout << number_absolute<<"\n";
}
//Napisz program, który poprosi u¿ytkownika o podanie liczby od 1 do 7 i wyœwietli odpowiadaj¹cy mu dzieñ tygodnia.
void task8()
{
	int number_day;
	std::cout << "Give a number of day in a week:\n";
	std::cin >> number_day;
	
		if (number_day == 1)
			std::cout << "It is monday\n";
		if (number_day == 2)
			std::cout << "It is tuesday\n";
		if (number_day == 3)
			std::cout << "It is wednesday\n";
		if (number_day == 4)
			std::cout << "It is thursday\n";
		if (number_day == 5)
			std::cout << "It is friday\n";
		if (number_day == 6)
			std::cout << "It is saturday\n";
		if (number_day == 7 || number_day == 0)
			std::cout << "It is sunday\n";
		if (number_day > 7 || number_day < 0)
		std::cout << "There are only 7 days in a week you fucking idiot\n";
	switch (number_day)
	{
	case 1:
		std::cout << "Monday\n";
		break;
	case 2:
		std::cout << "Tuesday\n";
		break;
	case 3:
		std::cout << "Wednesday\n";
		break;
	case 4:
		std::cout << "Thursday\n";
		break;
	case 5:
		std::cout << "Friday\n";
		break;
	case 6:
		std::cout << "Saturday\n";
		break;
	case 0:
	case 7:
		std::cout << "Sunday\n";
		break;
	default:
		std::cout << "There are only 7 days in a week you fucking idiot\n";
	}
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
		std::cout << "First number is bigger\n";
	if (number_first < number_second)
		std::cout << "Second number is bigger\n";
	if (number_first == number_second)
		std::cout << "The numbers are equall\n";
}
//Napisz program, który poprosi u¿ytkownika o podanie roku i sprawdzi, czy jest to rok przestêpny.Wyœwietl odpowiedni komunikat.
void task10()
{
	int number_year;
	std::cout << "Give a year:\n";
	std::cin >> number_year;
	if (number_year % 4 == 0 && number_year % 100 != 0 || number_year % 400 == 0)
		std::cout << "This year is a leap year\n";
	else
		std::cout << "This year is not a leap year\n";
}
//Napisz program, który poprosi u¿ytkownika o podanie liczby ca³kowitej i sprawdzi, czy jest ona podzielna zarówno przez 3, jak i przez 5. Wyœwietl odpowiedni komunikat.
void task11()
{
	int number_devided_by_3_5;
	std::cout << "Give a number:\n";
	std::cin >> number_devided_by_3_5;
	if (number_devided_by_3_5 % 3 == 0 && number_devided_by_3_5 % 5 == 0)
		std::cout << "This number is devided by 3 and 5\n";
	else
		std::cout << "This number is not devided by 3 and 5\n";
}
/*. Napisz program, który poprosi u¿ytkownika o podanie masy cia³a(w kilogramach) i wzrostu(w metrach).
Na  podstawie tych danych oblicz wskaŸnik BMI(Body Mass Index) i wyœwietl odpowiedni komunikat informuj¹cy o stanie zdrowia.
poni¿ej 16 - wyg³odzenie
16 - 16.99 - wychudzenie
17 - 18.49 - niedowagê
18.5 - 24.99 - wagê prawid³ow¹
25.0 - 29.9 - nadwagê
30.0 - 34.99 - I stopieñ oty³oœci
35.0 - 39.99 - II stopieñ oty³oœci
powy¿ej 40.0 - oty³oœæ skrajn¹
Wzór :
BMI = masa / wysokoœæ ^ 2
*/
void task12()
{
	float number_weight, number_height, bmi;
	std::cout << "Give your weight (kg):\n";
	std::cin >> number_weight;
	std::cout << "Give your height (m):\n";
	std::cin >> number_height;
	bmi = number_weight / (number_height * number_height);
	if (bmi < 16)
		std::cout << "You have a starvation\n";
	if (bmi >= 16 && bmi < 17)
		std::cout << "You have a emaciation\n";
	if (bmi >= 17 && bmi < 18.5)
		std::cout << "You have a underweight\n";
	if (bmi >= 18.5 && bmi < 25)
		std::cout << "You have a correct weight\n";
	if (bmi >= 25 && bmi < 30)
		std::cout << "You have a overweight\n";
	if (bmi >= 30 && bmi < 35)
		std::cout << "You have a I degree of obesity\n";
	if (bmi >= 35 && bmi < 40)
		std::cout << "You have a II degree of obesity\n";
	if (bmi >= 40)
		std::cout << "You have a extreme obesity\n";
}
//Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci trzech odcinków i sprawdzi, czy mo¿na zbudowaæ z nich trójk¹t.Wyœwietl odpowiedni komunikat.
void task13()
{
	int first_section, second_section, third_section, biggest_section = 0, sum_smaller_sections = 0;
	std::cout << "Give a first section:\n";
	std::cin >> first_section;
	std::cout << "Give a second section:\n";
	std::cin >> second_section;
	std::cout << "Give a third secion:\n";
	std::cin >> third_section;
	if (first_section == second_section && third_section == first_section)
		std::cout << " You have created a equilateral triangle\n";
	else
	{
		if (first_section > second_section)
		{
			if (first_section > third_section)
			{
				biggest_section = first_section;
				sum_smaller_sections = third_section + second_section;
			}
			else
			{
				biggest_section = third_section;
				sum_smaller_sections = first_section + second_section;
			}
		}
		if (second_section > first_section)
		{
			if (second_section > third_section)
			{
				biggest_section = second_section;
				sum_smaller_sections = first_section + third_section;
			}
			else
			{
				biggest_section = second_section;
				sum_smaller_sections = first_section + third_section;
			}
		}
		if (third_section > first_section)
		{
			if (second_section < third_section)
			{
				biggest_section = third_section;
				sum_smaller_sections = first_section + second_section;
			}
			else
			{
				biggest_section = second_section;
				sum_smaller_sections = first_section + third_section;
			}

		}
		if (biggest_section < sum_smaller_sections)
			std::cout << "You can create a triangle with these sectoins\n";
		else
			std::cout << "You can't create a triangle with these sectoins\n";
	}
}
//Napisz program, który poprosi u¿ytkownika o podanie liczby dodatniej i obliczy jej pierwiastek kwadratowy, jeœli jest to mo¿liwe.Wyœwietl wynik lub odpowiedni komunikat, jeœli liczba jest ujemna.
void task14()
{
	double number, root;
	std::cout << "Give a number:\n";
	std::cin >> number;
	if (number < 0)
		std::cout << "Give a positive number !\n";
	else
	{
		root = sqrt(number);
		std::cout << "Root of a number = " << root<<"\n";
	}

	
}
//Program sprawdzaj¹cy czy podana data jest poprawna(np.sprawdzaj¹c, czy dzieñ jest z zakresu od 1 do 31, miesi¹c od 1 do 12 itd.)
void task15()
{
	int number_year, number_month, number_day;
	std::cout << "Give a year:\n";
	std::cin >> number_year;
	std::cout << "Give a month:\n";
	std::cin >> number_month;
	std::cout << "Give a day:\n";
	std::cin >> number_day;
	if ((number_month <= 12 && number_month >= 1) && (number_day >= 1 && number_day <= 31))
	{
		if (number_month == 2 && (number_year % 4 == 0 && number_year % 100 != 0 || number_year % 400 == 0) && number_day > 29 || number_month == 2 && !(number_year % 4 == 0 && number_year % 100 != 0 || number_year % 400 == 0) && number_day > 28)
			std::cout << "No\n";
		if ((number_month == 4 || number_month == 6 || number_month == 9 || number_month == 11) && number_day > 30)
			std::cout << "No\n";
	}
	else
		std::cout << "No\n";
}
void task16()
{
	int number_year, number_month, number_day;
	std::cout << "Give a year:\n";
	std::cin >> number_year;
	std::cout << "Give a month:\n";
	std::cin >> number_month;
	std::cout << "Give a day:\n";
	std::cin >> number_day;
	if ((number_month <= 12 && number_month >= 1) && (number_day >= 1 && number_day <= 31) && !(number_month == 2 && (number_year % 4 == 0 && number_year % 100 != 0 || number_year % 400 == 0) && number_day > 29 || number_month == 2) && !(number_year % 4 == 0 && number_year % 100 != 0 && number_year!= 0 || number_year % 400 == 0) && number_day > 28&& !((number_month == 4 || number_month == 6 || number_month == 9 || number_month == 11) && number_day > 30))
		std::cout << "Yes\n";
	else
		std::cout << "No\n";
	



}
//Napisz program, który ma pobraæ od u¿ytkownika liczbê dodatni¹
void task17()
{
	int number_not_negative;
	std::cout << "Give a number:\n";
	std::cin >> number_not_negative; 
}
//Napisz program, który wyœwietli najwiêksz¹ liczbê ze zbioru jednoelementowego.
void task18()
{
	int firstNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> firstNumber;

	int max;

	max = firstNumber;

	std::cout << "Najwiêksza wartoœæ to: " << max << "\n";
}
//Napisz program, który wyœwietli najwiêksz¹ liczbê ze zbioru dwuelementowego.
void task19()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> secondNumber;

	int max;

	if (secondNumber > firstNumber)
		max = secondNumber;
	else
		max = firstNumber;

	std::cout << "Najwiêksza wartoœæ to: " << max << "\n";
}
//Napisz program, który wyœwietli najwiêksz¹ liczbê ze zbioru trójelementowego.
void task20()
{
	int firstNumber, secondNumber, thirdNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> secondNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> thirdNumber;

	int max;

	if (thirdNumber > secondNumber && thirdNumber > firstNumber)
		max = thirdNumber;
	else
	{
		if (secondNumber > firstNumber)
			max = secondNumber;
		else
			max = firstNumber;
	}

	std::cout << "Najwiêksza wartoœæ to: " << max << "\n";
}
//Napisz program, który wyœwietli najwiêksz¹ liczbê ze zbioru czteroelementowego.
void task21()
{
	int firstNumber, secondNumber, thirdNumber, fourthNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> secondNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> thirdNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> fourthNumber;

	int max;

	if (fourthNumber > thirdNumber
		&& fourthNumber > secondNumber
		&& fourthNumber > firstNumber)
		max = fourthNumber;
	else if (thirdNumber > secondNumber
		&& thirdNumber > firstNumber)
		max = thirdNumber;
	else if (secondNumber > firstNumber)
		max = secondNumber;
	else
		max = firstNumber;

	std::cout << "Najwiêksza wartoœæ to: " << max << "\n";
}
int main()
{
	task1();
	task2();
	task3();
	task4();
	task5();
	task6();
	task7();
	task8();
	task9();
	task10();
	task11();
	task12();
	task13();
	task14();
	task15();
	task16();
	task17();
	task18();
	task19();
	task20();
	task21();
}


	