
#include <iostream>

void task1()
{
	std::cout << "Hello World!\n";
	std::cout << " Give\tme\ta\tfucking\tnumber\t? \n ";
	int number_from_user;
	std::cin >> number_from_user;

	std::cout << "you gave\t" << number_from_user << "\n";

	std::cout << "Hello World!\n";
	std::cout << " Give\tme\ta\tfucking\tnumber\t? \n ";
	int number_From_user;
	std::cin >> number_From_user;

	std::cout << "you gave\t" << number_From_user << "\n";
}

//program obliczaj�cy �redni� arytmetyczn� 2 liczb.
void task2()
{
	std::cout << "Podaj pierwsza liczbe\n ";
	int number_one;
	std::cin >> number_one;
	std::cout << "Podaj droga liczbe\n ";
	int number_two;
	std::cin >> number_two;
	int srednia;
	srednia = (number_one + number_two) / 2;
	std::cout << "srednia wynosi ";
	std::cout << srednia;
}
/*
*. Program obliczaj�cy obj�to�� sto�ka.4
*. Program obliczaj�cy pole ko�a.5
*. Program obliczaj�cy warto�� wyra�enia a^2 + b^2 6
*. Program obliczaj�cy pole tr�jk�ta o podstawie b i wysoko�ci h 7
*. Program obliczaj�cy obj�to�� kuli o promieniu r 8
*. Program obliczaj�cy pole trapezu o podstawach a i b oraz wysoko�ci h 9
*. Program obliczaj�cy �redni� wa�on� trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3. 10
*. Stw�rz program, kt�ry pobiera od u�ytkownika d�ugo�� w metrach i przelicza j� na centymetry i milimetry, wy�wietlaj�c wynik. 11
*. Napisz program, kt�ry konwertuje wprowadzon� kwot� w jednej walucie na inn�, korzystaj�c z okre�lonego kursu wymiany. 12
*/


//*.Program obliczaj�cy pole prostok�ta.
void task3()
{
	int pierwszy_bok, drogi_bok;
	std::cout << "dawaj pierwszy bok\n";
	std::cin >> pierwszy_bok;
	std::cout << "dawaj drugi bok\n";
	std::cin >> drogi_bok;
	int area;
	area = pierwszy_bok * drogi_bok;
	std::cout << " Pole wynosi ";
	std::cout << area;

}
//*.Program obliczaj�cy obj�to�� sto�ka.
void task4()
{
	int podstawa_stozka, wysokosc_stozka;
	std::cout << "Podaj podstawe stozka\n";
	std::cin >> podstawa_stozka;
	std::cout << "Podaj wysokosc stozka\n";
	std::cin >> wysokosc_stozka;
	int volume;
	volume = (wysokosc_stozka * podstawa_stozka * podstawa_stozka * 3.1415) / 3;
	std::cout << volume;
}
//*. Program obliczaj�cy pole ko�a.
void task5()
{
	int radious_circle;
	std::cout << "Podaj r\n";
	std::cin >> radious_circle;
	int pole;
	pole = 3.1415 * radious_circle * radious_circle;
	std::cout << pole;
}
//*. Program obliczaj�cy warto�� wyra�enia a^2 + b^2 
void task6()
{
	int a_1, b_1;
	std::cout << "Podaj pan a\n";
	std::cin >> a_1;
	std::cout << "Podaj pan b\n";
	std::cin >> b_1;
	int a_2, b_2;
	a_2 = a_1 * a_1;
	b_2 = b_1 * b_1;
	std::cout << a_2;
	std::cout << b_2;
}
//*.Program obliczaj�cy pole tr�jk�ta o podstawie b i wysoko�ci h 
void task7()
{
	int base_triangle, height_triangle, area_triangle;
	std::cout << "Podaj podstawe tr�jk�ta \n";
	std::cin >> base_triangle;
	std::cout << "Podaj wysoko�� tr�jk�ta\n";
	std::cin >> height_triangle;
	area_triangle = (base_triangle * height_triangle) / 2;
	std::cout << "Pole wynosi\n";
	std::cout << area_triangle;
}
//*.Program obliczaj�cy obj�to�� kuli o promieniu r
void task8()
{
	int radius_ball, volume;
	std::cout << "Podaj promie� kuli\t";
	std::cin >> radius_ball;
	volume = (3.14159 * radius_ball * radius_ball * radius_ball) * 4 / 3;
	std::cout << "Obj�to�� wynosi\t";
	std::cout << volume;

}
//*.Program obliczaj�cy pole trapezu o podstawach a i b oraz wysoko�ci h
void task9()
{
	int side_trapeze_1, side_trapeze_2, area;

}



int main()
{
	setlocale(LC_CTYPE, "polish");
	//task1();
	//task2();
	//task3();
	//task4();
	//task5();
	//task6();
	//task7();
	//task8();
	task9();
	//task10();
	//task11();

}
/*

Algorytm - sko�czony zbi�r instrukcji, kt�ry rozwi�zuje zadany problem.
Okre�la te� kolejno�� wykonywania dzia�a�
Zapis algorytmu:
- rysunki
- opis s�owny
- w punktach
- schemat blokowy
- kod �r�d�owy danego j�zyka programowania
- pseudokod


Zmienna - pewien obszar w pami�ci operacyjnej, w kt�rej mo�na w danej chwili przechowa� tylko 1 dan�.


Instrukcja deklaracji zmiennej:
- typ_zmiennej,
- nazwa_zmiennej;

typ_zmiennej - wielko�� obszaru pami�ci, interpretacja ci�gu bit�w
int - 4 bajtowa liczba ca�kowita ze znakiem < -2 147 483 648, 2 147 483 647 >
short - 2 bajtowa liczba ca�kowita ze znakiem < -32 768, 32 767 >
long - 4 bajtowa liczba ca�kowita ze znakiem < -2 147 483 648, 2 147 483 647 >
long long - 8 bajtowa liczba ca�kowita ze znakiem < -9 223 372 036 854 775 808, 9 223 372 036 854 775 807 >

unsigned - zmienna bez znaku < 0, 2*max + 1 >


float - 4 bajtowa liczba rzeczywista, dok�adno�� 6-7 cyfr po przecinku
double - 8 bajtowa liczba rzeczywista, dok�adno�� 15-16 cyfr po przecinku
long double - 12 bajtowa liczba rzeczywista, dok�adno�� 19-20 cyfr po przecinku

nazwa_zmiennej - nazwa obszaru pami�ci, identyfikator
warunki niezb�dne:
 - dozwolone znaki:
	* alfabet angielski Aa-Zz
	* cyfry arabskie 0-9
	* podre�lenie, pod�oga( _ )
 - nie mo�na zacz�� cyfr�
 - unikalny w swoim zakresie widoczno�ci
 - nie mo�e to byc s�owo kluczowe danego j�zyka

Warunki programist�w:
 - nazwa zmiennej plowinna oddawa� charakter przechowywanych danych
 - je�li nazwa sk�ada si� z wielu znak�w w miejscu spacji podre�lenie lub od 2 s�owa pocz�tek z du�ej
 - nazwa po angielsku

*/