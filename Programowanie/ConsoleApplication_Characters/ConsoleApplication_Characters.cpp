#include <iostream>
//Napisz program kt�ry pobierze znak od uzytkownika i go wy�wietli
void task1()
{
	char character_from_user;
	std::cout << "Give a sign\n";
	std::cin >> character_from_user;
	std::cout << "You gave " << character_from_user<<"\n";
}
void task2()
{
	unsigned char character_from_user;
	std::cout << "Give a sign\n";
	std::cin >> character_from_user;
	if (character_from_user >= 'a' || character_from_user <= 'z')
		std::cout << "Sign is a lower letter of the alphabet";
	else
		std::cout << "Sign isn't a lower letter of the alphabet";


}
int main()
{
	task1();
	task2();
}