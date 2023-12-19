#include <iostream>
//Napisz program który pobierze znak od uzytkownika i go wyœwietli
void task1()
{
	char character_from_user;
	std::cout << "Give a character\n";
	std::cin >> character_from_user;
	std::cout << "You gave " << character_from_user<<"\n";
}
//Program pobiera znak i sprawdza czy jest on ma³¹ liter¹ alfabetu
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
//Program pobiera imie i wita u¿ytkownika
void task3() 
{
	std::string userName;
	std::cout << "Give your name\n";
	std::cin >> userName;
	std::cout << "Wassup " << userName << "\n";
}
//Program sprawdzaj¹cy czy has³o jest poprawne
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
//Proram wczytuj¹cy ³añcuch znaków i sprwadzaj¹cych ile jest znaków "a"
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
* Napisz program, który bêdzie prosi³ o has³o. Nie przepuœci dalej dopóki nie zostanie ono podane prawid³owo.
* Napisz program, który pobiera od u¿ytkownika ci¹g znaków i wyœwietla liczbê samog³osek i spó³g³osek w tym ci¹gu.
* Poproœ u¿ytkownika o wprowadzenie liczby ca³kowitej w systemie dziesiêtnym. Nastêpnie skonwertuj tê liczbê na system dwójkowy (binarny) i wyœwietl wynik.
* Program sprawdzaj¹cy czy podany ci¹g znaków jest palindromem (czyli takim, który czytany od ty³u jest taki sam, jak czytany od przodu, np. "kajak")
* Program sprawdzaj¹cy czy podane dwa s³owa s¹ anagramami (czyli takimi, które zawieraj¹ te same litery, ale w innym uk³adzie, np. "klasa" i "salka")
* Program wyci¹gaj¹cy informacje z numeru PESEL
* Program implementuj¹cy algorytm szyfrowania Cezara (proste szyfrowanie, w którym ka¿dy znak w tekœcie jest zastêpowany innym znakiem, przesuniêtym o sta³¹ liczbê pozycji w alfabecie).

* Program który na wejœciu przyjmie równanie a na wyjœciu da równanie w odwrotnej notacji polskiej ONP. Np. na wejœciu 2+3*4 na wyjœcu da 234*+
* Program, który na wejœciu przyjmie rówanie w ONP a na wyjœciu wyœwietli wynik rówania.
* Algorytm szyfrowania AtBash Cipher - algorytm szyfruj¹cy, w którym ka¿da litera jest zamieniana na literê z przeciwnej strony alfabetu (np. A na Z, B na Y itd.)
*/


//Napisz program, który bêdzie prosi³ o has³o.Nie przepuœci dalej dopóki nie zostanie ono podane prawid³owo.
void task6()
{
	std::string password;
	do
	{
		std::cout << "Give a password\n";
		std::cin >> password;
	} while (password != "Wintonoverweight");
	std::cout << "Gratulacje u¿ytkowniku wygra³eœ iphone 0.5 noob";

	
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