#include <iostream>
/*
  *Funkcja
    - zbi�r instrukcji realizujce zadanie
    - podprogram
  *Budowa funkcji
    - nag��wek
    - cia�o funkcji - instrukcje ograniczone nawiasami klamrowymi
  *Nag��wek
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
//napisz funkcje kt�ra wyswietli imie i wiek
void task3(std::string name, int age)
{
    if (age >= 18)
        std::cout << "Jeste� pe�noletni/pe�noletnia, czas na pasowanie\n";
    else
        std::cout << "Jeste� niepe�noletni/niepe�noletnia, id� ogl�da� do domu\n";
}
int main()
{
    setlocale(LC_CTYPE, "polish");
    task1();
    task2("AJAJAJAJAJAJAJAJAJAAJAJAJAA");
    task2("kot ma ale");
    std::string text = "SUI";
    task2(text);
    task3("ale", 2);
    task3("sui", 2575);
}

