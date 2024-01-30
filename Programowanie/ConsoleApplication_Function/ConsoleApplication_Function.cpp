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
        std::cout << "Jesteœ niepe³noletni/niepe³noletnia, id¿ ogl¹daæ do domu\n";
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

