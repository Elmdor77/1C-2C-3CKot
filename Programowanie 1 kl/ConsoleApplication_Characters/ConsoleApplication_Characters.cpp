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
		std::cout << "Welcome to los penguinos ala vadagaska \n";
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
		if (text_from_user[i] == 'a')
			number_of_characters++;
	}
}
/*
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
	std::cout << "Gratulacje u�ytkowniku wygra�e� iphone 15 pro max";
}
//Napisz program, kt�ry pobiera od u�ytkownika ci�g znak�w i wy�wietla liczb� samog�osek i sp�g�osek w tym ci�gu.
void task7()
{
	std::string characters_from_user;
	int number_of_vovels = 0;
	int number_of_consonant = 0;
	std::cout << "Give a string of characters\n";
	std::cin >> characters_from_user;
	for (int i = 0; i < characters_from_user.length(); i++)
	{
		if (characters_from_user[i] >= 'a' && characters_from_user[i] <= 'z')
			if (characters_from_user[i] == 'a' ||
				characters_from_user[i] == 'e' ||
				characters_from_user[i] == 'i' ||
				characters_from_user[i] == 'o' ||
				characters_from_user[i] == 'u' ||
				characters_from_user[i] == 'y')
			{
				std::cout << i + 1 << " number is a vovel\n";
				number_of_vovels++;
			}


			else
			{
				std::cout << i + 1 << " number is a consonant\n";
				number_of_consonant++;
			}
		else
			std::cout << i + 1 << "number is neither vovel or consonant\n";
	}

	std::cout << "Number of vovels = " << number_of_vovels<<"\n";
	std::cout << "Number of consonant = " << number_of_consonant<<"\n";
}
//Popro� u�ytkownika o wprowadzenie liczby ca�kowitej w systemie dziesi�tnym.Nast�pnie skonwertuj t� liczb� na system dw�jkowy(binarny) i wy�wietl wynik.
void task8()
{
	int number_decimal;
	std::cout << "Give a decimal number\n";
	std::cin >> number_decimal;
	int number_binary = 0;
	int x = 1;
	for (number_decimal; number_decimal >= 1; number_decimal = number_decimal / 2)
	{
		if (number_decimal % 2 == 1)
			number_binary = number_binary + x;
		x = x * 10;
	}
	std::cout << number_binary;
}
//Program sprawdzaj�cy czy podany ci�g znak�w jest palindromem (czyli takim, kt�ry czytany od ty�u jest taki sam, jak czytany od przodu, np. "kajak")
void task9()
{
	std::string textFromUser;
	std::cout << "Give a text\n";
	std::cin >> textFromUser;

	//wersja 1
	std::string reverseText = "";
	for (int i = textFromUser.length() - 1; i >= 0; i--)
	{
		reverseText = reverseText + textFromUser[i];
	}

	/*for (int i = 0; i < textFromUser.length(); i++)
	{
		reverseText = textFromUser[i] + reverseText;
	}*/

	if (textFromUser == reverseText)
		std::cout << "Text is a palindron\n";
	else
		std::cout << "Text isn't a palindron\n";

	//wersja 2
	bool isPalindrome = true;

	for (int signFromBegining = 0, signFormEnd = textFromUser.length() - 1; signFromBegining < signFormEnd; signFromBegining++, signFormEnd--)
	{
		if (textFromUser[signFromBegining] != textFromUser[signFormEnd])
		{
			isPalindrome = false;
			break;
		}
	}

	if (isPalindrome /*== true*/)
		std::cout << "Text is a palindrom\n";
	else
		std::cout << "Text isn't a palindrom\n";
}
//Program sprawdzaj�cy czy podane dwa s�owa s� anagramami (czyli takimi, kt�re zawieraj� te same litery, ale w innym uk�adzie, np. "klasa" i "salka")
void task10()
{
	std::string characters_from_user;
	std::string text_from_user;
	std::cout << "Give a string of characters\n";
	std::cin >> characters_from_user;
	std::cout << "Give a string of characters\n";
	std::cin >> text_from_user;
	bool is_anagram = false; 
	int x;
	int anagram_true = 0;
	if (text_from_user.length() == characters_from_user.length())
	{
		for (int i = 0; i < characters_from_user.length(); i++)
		{
			for (x = text_from_user.length() - 1; x >= 0; x--)
			{
				if (characters_from_user[i] == text_from_user[x])
				{
					anagram_true++;
					break;
				}
				
			}
			
		}
		if (anagram_true == text_from_user.length() + 1)
			is_anagram = true;
		if (is_anagram)
			std::cout << "Texts are anagrams\n";
		else
			std::cout << "Texts aren't anagrams\n";

	}
	else
		std::cout << "Texts aren't anagrams\n";
}
//Program wyciagajacy informacje z numeru PESEL
/*PESEL ma 11 liczb
Dwie pierwsze cyfry okreslaja rok urodzenia
*Kolejne dwie miesiac urodzenia (1-12 w XXw. ; 21-32 w XXIw.)
*Kolejne dwa dzien urodzenia
*Plec okresla przedostatnia cyfra numeru PESEL cyfry 0, 2, 4, 6, 8 oznaczaja plec zenska cyfry 1, 3, 5, 7, 9 oznaczaja plec meska
*/
void task11()
{
	std::string PESEL_from_user;
	std::cout << "\nGive a PESEL";
	std::cin >> PESEL_from_user;
	int PESEL_year = 1900;
	int PESEL_month = 0;
	int PESEL_day = 0;
	int PESEL_gender = 0;
	if (PESEL_from_user.length() == 11)
	{
		PESEL_year = PESEL_year + PESEL_from_user[0] * 10 + PESEL_from_user[1];
		PESEL_month = PESEL_month + PESEL_from_user[2] * 10 + PESEL_from_user[3];
		if (PESEL_from_user[2] * 10 + PESEL_from_user[3] >= 21)
		{
			PESEL_month = PESEL_month - 20;
			PESEL_year = PESEL_year + 100;
		}
		PESEL_day = PESEL_from_user[4] * 10 + PESEL_from_user[5];
		PESEL_gender = PESEL_from_user[9];
		std::cout << "\nDay\t" << PESEL_day;
		std::cout << "\nMonth\t" << PESEL_month;
		std::cout << "\nYear\t" << PESEL_year;
		if (PESEL_gender % 2 == 1)
			std::cout << "\nGender\tMen";
		else
			std::cout << "\nGender\tWomen";
		PESEL_year = PESEL_year + PESEL_from_user['0'] + PESEL_from_user['1'];
		PESEL_month = PESEL_month + PESEL_from_user['2'] + PESEL_from_user['3'];
		if (PESEL_from_user['2'] + PESEL_from_user['3'] >= 21)
		{
			PESEL_month = PESEL_month - 20;
			PESEL_year = PESEL_year + 100;
		}
		PESEL_day = PESEL_from_user['4'] + PESEL_from_user['5'];
		PESEL_gender = PESEL_from_user['9'];
		std::cout << "\nDay\t" << PESEL_day;
		std::cout << "\nMonth\t" << PESEL_month;
		std::cout << "\nYear\t" << PESEL_year;
		if (PESEL_gender % 2 == 1)
			std::cout << "\nGender\tMen";
		else
			std::cout << "\nGender\tWomen";
	}
	else
		std::cout << "\nGive a real PESEL\n";
}
int main()
{
	task11();
}