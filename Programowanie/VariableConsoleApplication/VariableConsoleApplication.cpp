
#include <iostream>

int main()
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
typ_zmiennej nazwa_zmiennej;

typ_zmiennej - wielko�� obszaru pami�ci, interpretacja ci�gu bit�w
int - 4 bajtowa liczba ca�kowita ze znakiem < -2 147 483 648, 2 147 483 647 >
short - 2 bajtowa liczba ca�kowita ze znakiem < -32 768, 32 767 >
long - 4 bajtowa liczba ca�kowita ze znakiem < -2 147 483 648, 2 147 483 647 >
long long - 8 bajtowa liczba ca�kowita ze znakiem < -9 223 372 036 854 775 808, 9 223 372 036 854 775 807 >

unsigned - zmienna bez znaku < 0, 2*max + 1 >


float - 4 bajtowa liczba rzecvzywista, dok�adno�� 6-7 cyfr po przecinku
double - 8 bajtowa liczba rzecvzywista, dok�adno�� 15-16 cyfr po przecinku
long double - 12 bajtowa liczba rzecvzywista, dok�adno�� 19-20 cyfr po przecinku

nazwa_zmiennej - nazwa obszaru pami�ci, identyfikator
warunki niezb�dne:
 - dozwolone znaki:
    *alfabet angielski Aa-Zz
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