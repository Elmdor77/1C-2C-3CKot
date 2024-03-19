#include <iostream>
#pragma region Zad 1
/*
Zadanie: Tworzenie prostego kalkulatora
Napisz program, który bêdzie dzia³a³ jako prosty kalkulator
i bêdzie umo¿liwia³ u¿ytkownikowi wykonywanie
podstawowych operacji arytmetycznych na dwóch liczbach.
Instrukcje:
Poproœ u¿ytkownika o podanie dwóch liczb oraz wybór operacji (dodawanie, odejmowanie, mno¿enie lub dzielenie).
W zale¿noœci od wyboru u¿ytkownika, wykonaj odpowiedni¹ operacjê arytmetyczn¹.
Wyœwietl wynik operacji.
Przyk³adowe dzia³anie programu:
Prosty Kalkulator
-----------------
1. Dodawanie
2. Odejmowanie
3. Mno¿enie
4. Dzielenie
Wybierz operacjê (1/2/3/4): 3
Podaj pierwsz¹ liczbê: 5
Podaj drug¹ liczbê: 3
Wynik mno¿enia: 15
*/
void task1()
{
    int number_arithmetic_operation;
    int number_result, first_number, second_number;
    std::cout << "1 - dodawanie " << "\n" << "2 - odejmowanie" << "\n" << "3 - mno¿enie" << "\n" << "4 - dzielenie" << "\n" << "0 - koniec programu\n";
    std::cout << "Give a number of aritmetic operation\n";
    std::cin >> number_arithmetic_operation;
    if (number_arithmetic_operation == 0)
        return;
    else if (number_arithmetic_operation == 1 || number_arithmetic_operation == 2 || number_arithmetic_operation == 3 || number_arithmetic_operation == 4)
    {
        std::cout << "Give first number\n";
        std::cin >> first_number;
        std::cout << "Give second number\n";
        std::cin >> second_number;
    }
    if (number_arithmetic_operation == 1)
        number_result = first_number + second_number;
    else if (number_arithmetic_operation == 2)
        number_result = first_number - second_number;
    else if (number_arithmetic_operation == 3)
        number_result = first_number * second_number;
    else if (number_arithmetic_operation == 4)
        number_result = first_number / second_number;
    else
    {
        std::cout << "Give a correct number!!!!!b!!!!1!!!!@!!!1!!!!!&!!!!1!!!";
        return task1();
    }
    std::cout << "Result = " << number_result;
}
#pragma endregion Zad 1
#pragma region Zad 2
/*
ZADANIE
Konwersja temperatury
Napisz program, który bêdzie konwertowaæ temperaturê pomiêdzy skalami : Celsiusza, Fahrenheita i Kelvina.
Instrukcje :
    Poproœ u¿ytkownika o wybór jednostki, z której chce dokonaæ konwersji(C - Celsiusz, F - Fahrenheit, K - Kelvin).
    Poproœ u¿ytkownika o podanie temperatury w wybranej jednostce.
    Przelicz temperaturê na pozosta³e jednostki(z wykorzystaniem odpowiednich wzorów konwersji).
    Wyœwietl przeliczone temperatury.
    Przyk³adowe dzia³anie programu :
Konwerter Temperatur
-------------------- -
Wybierz jednostkê temperatury :
1. Celsiusz(C)
2. Fahrenheit(F)
3. Kelvin(K)
Wybór : C
Podaj temperaturê w stopniach Celsiusza : 25
Przeliczona temperatura :
Fahrenheit: 77.0 °F
Kelvin : 298.15 K
*/
void menu_temp_comvert()
{
    std::cout << "F - Fahrenheit\n";
    std::cout << "C - Celcius\n";
    std::cout << "K - Kelvin\n";
}
void temperature_check(char temperature_type, float number_temperature,float temperature_comverted)
{

    switch (temperature_type)
    {
    case 'F':
        temperature_comverted = (number_temperature - 32) * 5 / 9;
        std::cout << "Converted to Celcius - " << temperature_comverted;
        temperature_comverted = (number_temperature + 459, 67) * 5 / 9;
        std::cout << "Converted to Kelvin - " << temperature_comverted;
        break;
    case'K':
        temperature_comverted = number_temperature * 9/5 - 459,67;
        std::cout << "Converted to Fahrenheit - " << temperature_comverted << "\n";
        temperature_comverted = number_temperature - 273, 15 * 5 / 9;
        std::cout << "Converted to Celcius - " << temperature_comverted << "\n";
        break;
    case'C':
        temperature_comverted = number_temperature * 9 / 5 + 32;
        std::cout << "Converted to Fahrenheit - " << temperature_comverted;
        temperature_comverted = number_temperature + 273, 15;
        std::cout << "Converted to Kelvin - " << temperature_comverted;
        break;
    default:
        break;

    }
}
void task2()
{
    char temperature_type;
    float number_temperature, temperature_comverted;
    temperature_comverted = 0;
    menu_temp_comvert();
    std::cout << "Give a letter which represents a temperature type\n";
    std::cin >> temperature_type;
    std::cout << "Give amount of degrees\n";
    std::cin >> number_temperature;
    temperature_check(temperature_type, number_temperature, temperature_comverted);
}
#pragma endregion Zad 2
/*
ZADANIE
Symulator rzutu kostk¹
Napisz program, który bêdzie symulowa³ rzut kostk¹. Program powinien umo¿liwiaæ u¿ytkownikowi wybór rodzaju kostki (np. 6-œcienna, 10-œcienna, 20-œcienna) oraz iloœæ rzutów. Po wykonaniu rzutów, program powinien wyœwietliæ wyniki oraz sumê otrzymanych wartoœci.
Instrukcje:
Poproœ u¿ytkownika o wybór rodzaju kostki (np. 6-œcienna, 10-œcienna, 20-œcienna).
Poproœ u¿ytkownika o podanie iloœci rzutów.
Wykonaj podan¹ liczbê rzutów wybranej kostk¹, zapisuj¹c wyniki.
Wyœwietl otrzymane wyniki oraz sumê otrzymanych wartoœci.
Przyk³adowe dzia³anie programu:
Symulator rzutu kostk¹
-----------------------
Wybierz rodzaj kostki (6/10/20): 10
Ile rzutów chcesz wykonaæ?: 5
Wyniki rzutów kostk¹ 10-œcienn¹:
1. Rzut 1: 7
2. Rzut 2: 3
3. Rzut 3: 10
4. Rzut 4: 5
5. Rzut 5: 8
Suma wyników: 33
*/
void task3()
{

}

void menu_dice_choose()
{
    std::cout << "1 - 30K dice\n";
    std::cout << "2 - 10K dice\n";
    std::cout << "3 - 20K dice\n";
    std::cin<<
}
int main()
{
    task3();
}
    