
#include <iostream>

void task1()
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

//program obliczaj¹cy œredni¹ arytmetyczn¹ 2 liczb.
void task2()
{
    std::cout << "Podaj pierwsza liczbe\n ";
    int number_one;
    std::cin >> number_one;
    std::cout << "Podaj droga liczbe\n ";
    int number_two;
    std::cin >> number_two;
    int srednia;
    srednia = (number_one + number_two) / 2;
    std::cout << "srednia wynosi ";
    std::cout << srednia;
}
/*
*. Program obliczaj¹cy objêtoœæ sto¿ka.4
*. Program obliczaj¹cy pole ko³a.5
*. Program obliczaj¹cy wartoœæ wyra¿enia a^2 + b^2 6
*. Program obliczaj¹cy pole trójk¹ta o podstawie b i wysokoœci h 7
*. Program obliczaj¹cy objêtoœæ kuli o promieniu r 8
*. Program obliczaj¹cy pole trapezu o podstawach a i b oraz wysokoœci h 9 
*. Program obliczaj¹cy œredni¹ wa¿on¹ trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3. 10
*. Stwórz program, który pobiera od u¿ytkownika d³ugoœæ w metrach i przelicza j¹ na centymetry i milimetry, wyœwietlaj¹c wynik. 11
*. Napisz program, który konwertuje wprowadzon¹ kwotê w jednej walucie na inn¹, korzystaj¹c z okreœlonego kursu wymiany. 12
*/


//*.Program obliczaj¹cy pole prostok¹ta.
void task3()
{
    int pierwszy_bok, drogi_bok;
    std::cout << "dawaj pierwszy bok\n";
    std::cin >> pierwszy_bok;
    std::cout << "dawaj drugi bok\n";
    std::cin >> drogi_bok;
    int area;
    area = pierwszy_bok * drogi_bok;
    std::cout << " Pole wynosi ";
    std::cout << area;

}
//*.Program obliczaj¹cy objêtoœæ sto¿ka.
void task4()
{
    int podstawa_stozka, wysokosc_stozka;
    std::cout << "Podaj podstawe stozka\n";
    std::cin >> podstawa_stozka;
    std::cout << "Podaj wysokosc stozka\n";
    std::cin >> wysokosc_stozka;
    int volume;
    volume = (wysokosc_stozka * podstawa_stozka * podstawa_stozka * 3.1415) / 3;
    std::cout << volume;
}
//*. Program obliczaj¹cy pole ko³a.
void task5()
{
    int r_kola ;
    std::cout << "Podaj r\n";
    std::cin >> r_kola;
    int pole; 
    pole = 3.1415 * r_kola * r_kola;
    std::cout << pole;
}
//*. Program obliczaj¹cy wartoœæ wyra¿enia a^2 + b^2 
void task6()
{
    int a_1, b_1;
    std::cout << "Podaj pan a\n";
    std::cin >> a_1;
    std::cout << "Podaj pan b\n";
    std::cin >> b_1;
    int a_2, b_2;
    a_2 = a_1 * a_1;
    b_2 = b_1 * b_1;
    std::cout << a_2;
    std::cout << b_2;
}


int main()
{   
    setlocale(LC_CTYPE, "polish");
    //task1();
    //task2();
    //task3();
    //task4();
    //task5();
    task6();
        
}
/*

Algorytm - skoñczony zbiór instrukcji, który rozwi¹zuje zadany problem.
Okreœla te¿ kolejnoœæ wykonywania dzia³añ
Zapis algorytmu:
- rysunki
- opis s³owny
- w punktach
- schemat blokowy
- kod ¿ród³owy danego jêzyka programowania
- pseudokod


Zmienna - pewien obszar w pamiêci operacyjnej, w której mo¿na w danej chwili przechowaæ tylko 1 dan¹.


Instrukcja deklaracji zmiennej:
- typ_zmiennej,
- nazwa_zmiennej;

typ_zmiennej - wielkoœæ obszaru pamiêci, interpretacja ci¹gu bitów
int - 4 bajtowa liczba ca³kowita ze znakiem < -2 147 483 648, 2 147 483 647 >
short - 2 bajtowa liczba ca³kowita ze znakiem < -32 768, 32 767 >
long - 4 bajtowa liczba ca³kowita ze znakiem < -2 147 483 648, 2 147 483 647 >
long long - 8 bajtowa liczba ca³kowita ze znakiem < -9 223 372 036 854 775 808, 9 223 372 036 854 775 807 >

unsigned - zmienna bez znaku < 0, 2*max + 1 >


float - 4 bajtowa liczba rzeczywista, dok³adnoœæ 6-7 cyfr po przecinku
double - 8 bajtowa liczba rzeczywista, dok³adnoœæ 15-16 cyfr po przecinku
long double - 12 bajtowa liczba rzeczywista, dok³adnoœæ 19-20 cyfr po przecinku

nazwa_zmiennej - nazwa obszaru pamiêci, identyfikator
warunki niezbêdne:
 - dozwolone znaki:
    * alfabet angielski Aa-Zz
    * cyfry arabskie 0-9
    * podreœlenie, pod³oga( _ )
 - nie mo¿na zacz¹æ cyfr¹
 - unikalny w swoim zakresie widocznoœci
 - nie mo¿e to byc s³owo kluczowe danego jêzyka

Warunki programistów:
 - nazwa zmiennej plowinna oddawaæ charakter przechowywanych danych
 - jeœli nazwa sk³ada siê z wielu znaków w miejscu spacji podreœlenie lub od 2 s³owa pocz¹tek z du¿ej
 - nazwa po angielsku

*/