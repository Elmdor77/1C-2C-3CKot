// ConsoleApplication_pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
void task1()
{
    int first_number = 754;
    int second_number = 7;
    int tab[2] = { 15, 89 };
    std::cout << "Wartoœc pierwszej liczby " << first_number << "\n";
    std::cout << "Wartoœc drugiej liczby " << second_number << "\n";
    std::cout << "Adres pierwszej liczby " << &first_number << "\n";
    std::cout << "Adres drugiej liczby " << &second_number << "\n";
    std::cout << "Wartoœc drugiej liczby " << *&second_number << "\n";

    std::cout << "Zawartoœc zerowej komórki " << tab[0] << "\n";
    std::cout << "Zawartoœc pierwszej komórki " << tab[1] << "\n";
    std::cout << "Adres zerowej komórki " << &tab[0] << "\n";
    std::cout << "Adres pierwszej komórki " << &tab[1] << "\n";
    std::cout << "Adres tablicy " << tab << "\                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              n";
    std::cout << "Zawartoœc zerowej komórki " << *(tab + 0) << "\n";
    std::cout << "Zawartoœc pierwszej komórki " << *(tab + 1) << "\n";


}
int main()
{
    setlocale(LC_CTYPE, "polish");
    task1();
}

