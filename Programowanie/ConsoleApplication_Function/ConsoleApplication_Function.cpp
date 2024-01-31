#include <iostream>
/*
  *Funkcja
    - zbiór instrukcji realizujce zadanie
    - podprogram
  *Budowa funkcji
    - nag³ówek
    - cia³o funkcji - instrukcje ograniczone nawiasami klamrowymi
  *Nag³ówek
    typ_zwracanej_danej nazwa_funkcji(parametry)
*/
//Funkcja 
void task1()
{
    std::cout << "Hello world!\n";
}
//Funkcja uniwersalna 
void task2(std::string text_param)
{
    std::cout << text_param << "\n";
}
//napisz funkcje która wyswietli imie i wiek
void task3(std::string name, int age)
{
    if (age >= 18)
        std::cout << "Jesteœ pe³noletni/pe³noletnia, czas na pasowanie\n";
    else
        std::cout << "Jesteœ niepe³noletni/niepe³noletnia, id¿ do domu\n";
}
//Przekazywanie parametrów
void task4(int number)
{
    std::cout << "Zmienna task4 " << number << "\n";
    number--;
    std::cout << "Zmienna task4 " << number << "\n";
}
//Przekazywanie parametrów przez referencje
void task5(int &number)
{
    std::cout << "Zmienna task5 " << number << "\n";
    number--;
    std::cout << "Zmienna task5 " << number << "\n";
}
//funkvja pobieraj¹ca liczbe
void task6_get_number(int& number)
{
    std::cout << "give a number\n";
    std::cin >> number;
}
int main()
{
    setlocale(LC_CTYPE, "polish");
    /*task1();
    task2("AJAJAJAJAJAJAJAJAJAAJAJAJAA");
    task2("kot ma ale");
    std::string text = "SUI";
    task2(text);
    task3("ale", 2);
    task3("sui", 2575);*/
    int number = 9;
    /*std::cout << "Zmienna main" << number<<"\n";
    task4(number);
    std::cout << "Zmienna main" << number << "\n";
    std::cout << "Zmienna main " << number << "\n";
    task5(number);
    std::cout << "Zmienna main " << number << "\n";*/
    int number_from_user = 5;
    task6_get_number(number_from_user);
    std::cout << "You gave " << number_from_user;
}

