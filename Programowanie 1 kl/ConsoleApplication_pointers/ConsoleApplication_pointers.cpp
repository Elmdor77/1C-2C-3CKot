// ConsoleApplication_pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
void task1()
{
    int first_number = 754;
    int second_number = 7;
    int tab[2] = { 15, 89 };
    std::cout << "Warto�c pierwszej liczby " << first_number << "\n";
    std::cout << "Warto�c drugiej liczby " << second_number << "\n";
    std::cout << "Adres pierwszej liczby " << &first_number << "\n";
    std::cout << "Adres drugiej liczby " << &second_number << "\n";
    std::cout << "Warto�c drugiej liczby " << *&second_number << "\n";

    std::cout << "Zawarto�c zerowej kom�rki " << tab[0] << "\n";
    std::cout << "Zawarto�c pierwszej kom�rki " << tab[1] << "\n";
    std::cout << "Adres zerowej kom�rki " << &tab[0] << "\n";
    std::cout << "Adres pierwszej kom�rki " << &tab[1] << "\n";
    std::cout << "Adres tablicy " << tab << "\                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              n";
    std::cout << "Zawarto�c zerowej kom�rki " << *(tab + 0) << "\n";
    std::cout << "Zawarto�c pierwszej kom�rki " << *(tab + 1) << "\n";


}
int main()
{
    setlocale(LC_CTYPE, "polish");
    task1();
}

