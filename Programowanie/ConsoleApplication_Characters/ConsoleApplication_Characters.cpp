#include <iostream>
//Napisz program kt�ry pobierze znak od uzytkownika i go wy�wietli
void task1()
{
	char character_from_user;
	std::cout << "Give a character\n";
	std::cin >> character_from_user;
	std::cout << "You gave " << character_from_user<<"\n";
}
//Program pobiera znak i sprawdza czy jest on ma�� liter� alfabetu
void task2()
{
	unsigned char character_from_user;
	std::cout << "Give a character\n";
	std::cin >> character_from_user;
	if (character_from_user >= 'a' && character_from_user <= 'z')
		std::cout << "Character is a lower letter of the alphabet";
	else
		std::cout << "Character isn't a lower letter of the alphabet";
}
//Program pobiera imie i wita u�ytkownika
void task3() 
{
	std::string userName;
	std::cout << "Give your name\n";
	std::cin >> userName;
	std::cout << "Wassup " << userName << "\n";
}
//Program sprawdzaj�cy czy has�o jest poprawne
void task4()
{
	std::string password;
	std::cout << "Give a password\n";
	std::cin >> password;
	if (password == "Kawazaki_Cago_Krico_Estriper")
		std::cout << "Welcome my nigga\n";
	else
		std::cout << "GTFO\n";
}
//Proram wczytuj�cy �a�cuch znak�w i sprwadzaj�cych ile jest znak�w "a"
void task5()
{
	std::string text_from_user;
	int number_of_characters = 0;
	std::cout << "Give a string of characters\n";
	std::cin >> text_from_user;
	std::cout << "First character = " << text_from_user[0] << "\n";
	text_from_user[1] = 'x';
	std::cout << "Number of characters " << text_from_user.length() << "\n";
	for (int i = 0; i < text_from_user.length(); i++)
	{
		if (text_from_user[1] == 'a')
			number_of_characters++;
	}
}
/*
* Napisz program, kt�ry b�dzie prosi� o has�o. Nie przepu�ci dalej dop�ki nie zostanie ono podane prawid�owo.
* Napisz program, kt�ry pobiera od u�ytkownika ci�g znak�w i wy�wietla liczb� samog�osek i sp�g�osek w tym ci�gu.
* Popro� u�ytkownika o wprowadzenie liczby ca�kowitej w systemie dziesi�tnym. Nast�pnie skonwertuj t� liczb� na system dw�jkowy (binarny) i wy�wietl wynik.
* Program sprawdzaj�cy czy podany ci�g znak�w jest palindromem (czyli takim, kt�ry czytany od ty�u jest taki sam, jak czytany od przodu, np. "kajak")
* Program sprawdzaj�cy czy podane dwa s�owa s� anagramami (czyli takimi, kt�re zawieraj� te same litery, ale w innym uk�adzie, np. "klasa" i "salka")
* Program wyci�gaj�cy informacje z numeru PESEL
* Program implementuj�cy algorytm szyfrowania Cezara (proste szyfrowanie, w kt�rym ka�dy znak w tek�cie jest zast�powany innym znakiem, przesuni�tym o sta�� liczb� pozycji w alfabecie).

* Program kt�ry na wej�ciu przyjmie r�wnanie a na wyj�ciu da r�wnanie w odwrotnej notacji polskiej ONP. Np. na wej�ciu 2+3*4 na wyj�cu da 234*+
* Program, kt�ry na wej�ciu przyjmie r�wanie w ONP a na wyj�ciu wy�wietli wynik r�wania.
* Algorytm szyfrowania AtBash Cipher - algorytm szyfruj�cy, w kt�rym ka�da litera jest zamieniana na liter� z przeciwnej strony alfabetu (np. A na Z, B na Y itd.)
*/


//Napisz program, kt�ry b�dzie prosi� o has�o.Nie przepu�ci dalej dop�ki nie zostanie ono podane prawid�owo.
void task6()
{
	std::string password;
	do
	{
		std::cout << "Give a password\n";
		std::cin >> password;
	} while (password != "Wintonoverweight");
	std::cout << "Gratulacje u�ytkowniku wygra�e� iphone 0.5 noob";

	
}
int main()
{
	//task1();
	//task2();
	//task3();
	//task4();
	//task5();
	task6();
	
}