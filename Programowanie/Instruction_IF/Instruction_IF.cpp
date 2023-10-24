#include <iostream>
/*
Operatory warunkowe:
> - wi�ksze
< - miejsze
>= - wi�ksze lub r�wne
<= - mniejsze lub r�wne
== - r�wne
!= - r�ne
Rodzaje warunku IF:
*if (number1 > 0) - warunek prosty IF

* rest = number2 % 2; - % - r�nica

* if (number3 >= 1 && /|| / ! number3 < 10) -  warunek z�o�ony IF

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
*. Program sprawdzaj�cy czy podana data jest poprawna (np. sprawdzaj�c, czy dzie� jest z zakresu od 1 do 31, miesi�c od 1 do 12 itd.)

*/
//Napisz program sprawdzaj�cy czy liczba jest dodatnie czy nie.
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
//Napisz program sprawdzaj�cy czy liczba jest parzysta czy nieparzysta
void task2()
{
	int number2, rest;
	std::cout << "Give a number:\n";
	std::cin >> number2;
	rest = number2 % 2; // % - r�nica
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
//Napisz program sprawdzaj�cy czy liczba jest z zakresu <1, 10)
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
//Napisz program wykonuj�cy dzielenie dw�ch liczb
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
//Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb ca�kowitych i sprawdzi, czy s� one r�wne.Wy�wietl odpowiedni komunikat.
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
//Napisz program, kt�ry poprosi u�ytkownika o podanie wieku i sprawdzi, czy osoba jest pe�noletnia.Wy�wietl odpowiedni komunikat.
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
//Napisz program, kt�ry poprosi u�ytkownika o podanie liczby ca�kowitej i obliczy jej warto�� bezwzgl�dn�. Wy�wietl wynik.
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
//Napisz program, kt�ry poprosi u�ytkownika o podanie liczby od 1 do 7 i wy�wietli odpowiadaj�cy mu dzie� tygodnia.
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
//Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb ca�kowitych i wy�wietli wi�ksz� z nich.
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
//Napisz program, kt�ry poprosi u�ytkownika o podanie roku i sprawdzi, czy jest to rok przest�pny.Wy�wietl odpowiedni komunikat.
void task10()
{
	int number_year;
	std::cout << "Give a year:\n";
	std::cin >> number_year;
	if (number_year % 4 == 0 && number_year % 100 != 0 || number_year % 400 == 0)
		std::cout << "This year is a leap year";
	else
		std::cout << "This year is not a leap year";
}
//Napisz program, kt�ry poprosi u�ytkownika o podanie liczby ca�kowitej i sprawdzi, czy jest ona podzielna zar�wno przez 3, jak i przez 5. Wy�wietl odpowiedni komunikat.
void task11()
{
	int number_devided_by_3_5;
	std::cout << "Give a number:\n";
	std::cin >> number_devided_by_3_5;
	if (number_devided_by_3_5 % 3 == 0 && number_devided_by_3_5 % 5 == 0)
		std::cout << "This number is devided by 3 and 5";
	else
		std::cout << "This number is not devided by 3 and 5";
}
/*. Napisz program, kt�ry poprosi u�ytkownika o podanie masy cia�a(w kilogramach) i wzrostu(w metrach).
Na  podstawie tych danych oblicz wska�nik BMI(Body Mass Index) i wy�wietl odpowiedni komunikat informuj�cy o stanie zdrowia.
poni�ej 16 - wyg�odzenie
16 - 16.99 - wychudzenie
17 - 18.49 - niedowag�
18.5 - 24.99 - wag� prawid�ow�
25.0 - 29.9 - nadwag�
30.0 - 34.99 - I stopie� oty�o�ci
35.0 - 39.99 - II stopie� oty�o�ci
powy�ej 40.0 - oty�o�� skrajn�
Wz�r :
BMI = masa / wysoko�� ^ 2
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
		std::cout << "You have a starvation";
	if (bmi >= 16 && bmi < 17)
		std::cout << "You have a emaciation";
	if (bmi >= 17 && bmi < 18.5)
		std::cout << "You have a underweight";
	if (bmi >= 18.5 && bmi < 25)
		std::cout << "You have a correct weight";
	if (bmi >= 25 && bmi < 30)
		std::cout << "You have a overweight";
	if (bmi >= 30 && bmi < 35)
		std::cout << "You have a I degree of obesity";
	if (bmi >= 35 && bmi < 40)
		std::cout << "You have a II degree of obesity";
	if (bmi >= 40)
		std::cout << "You have a extreme obesity";
}
//Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci trzech odcink�w i sprawdzi, czy mo�na zbudowa� z nich tr�jk�t.Wy�wietl odpowiedni komunikat.
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
		std::cout << " You have created a equilateral triangle";
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
			std::cout << "You can create a triangle with these sectoins";
		else
			std::cout << "You can't create a triangle with these sectoins";
	}
}
//Napisz program, kt�ry poprosi u�ytkownika o podanie liczby dodatniej i obliczy jej pierwiastek kwadratowy, je�li jest to mo�liwe.Wy�wietl wynik lub odpowiedni komunikat, je�li liczba jest ujemna.
void task14()
{
	double number, root;
	std::cout << "Give a number:\n";
	std::cin >> number;
	if (number < 0)
		std::cout << "Give a positive number !";
	else
	{
		root = sqrt(number);
		std::cout << "Root of a number = " << root;
	}

	
}
//Program sprawdzaj�cy czy podana data jest poprawna(np.sprawdzaj�c, czy dzie� jest z zakresu od 1 do 31, miesi�c od 1 do 12 itd.)
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
			std::cout << "No";
		if ((number_month == 4 || number_month == 6 || number_month == 9 || number_month == 11) && number_day > 30)
			std::cout << "No";
	}
	else
		std::cout << "No";
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
		std::cout << "Yes";
	else
		std::cout << "No";
	



}




//if ((number_month <= 12 && number_month >= 1) && (number_day >= 1 && number_day <= 31))&&!(number_month == 2 && (number_year % 4 == 0 && number_year % 100 != 0 || number_year % 400 == 0) && number_day > 29 || number_month == 2 && !number_year % 4 == 0 && number_year % 100 != 0 || number_year % 400 == 0) && number_day > 28)&&!(number_month == 4 || number_month == 6 || number_month == 9 || number_month == 11) && number_day > 30)





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
	//task11();
	//task12();
	//task13();
	//task14();
	//task15();
	task16();
}


	