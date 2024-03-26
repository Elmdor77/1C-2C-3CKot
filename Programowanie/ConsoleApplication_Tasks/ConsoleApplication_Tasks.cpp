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
#pragma endregion Calc
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
#pragma endregion Temp_convert
#pragma region Zad 3
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
void menu_dice()
{
    std::cout << "1 - 6D dice\n";
    std::cout << "2 - 10D dice\n";
    std::cout << "3 - 20D dice\n";
}
void dice_how_much(int roll_number, int dice_number, int roll_result)
{
    std::cout << "Give how many times to roll the dice\n";
    std::cin >> roll_number;
    srand(time(0));
    for (int i = 1; i <= roll_number; i++)
    {
        roll_result = roll_result + rand() % (dice_number - 1 + 1) + 1;
    }
    std::cout << "roll_result = "<<roll_result;

}
void what_dice_number(int dice_type, int& dice_number)
{
    std::cin >> dice_type;
    switch (dice_type)
    {

    case 1:
        dice_number = 6;
        break;
    case 2:
        dice_number = 10;
        break;
    case 3:
        dice_number = 20;
        break;
    default:
        break;
    }
}
void task3()
{
    int dice_number = 0;
    int dice_type = 0;
    int roll_number = 0;
    int roll_result = 0;
    menu_dice();
    what_dice_number(dice_type, dice_number);
    dice_how_much(roll_number, dice_number, roll_result);
}
#pragma endregion Dice
#pragma region Zad 4
/*
ZADANIE
Konwerter jednostek

Napisz program konwertuj¹cy jednostki miar. Program powinien umo¿liwiaæ konwersjê miêdzy ró¿nymi jednostkami (np. metry na centymetry, kilogramy na funty) oraz obs³ugiwaæ ró¿ne typy jednostek.

Instrukcje:

Zdefiniuj zestaw jednostek, które chcesz obs³ugiwaæ (np. d³ugoœæ: metry, centymetry, cale; masa: kilogramy, funty).
Poproœ u¿ytkownika o wybór jednostki wejœciowej i jednostki wyjœciowej oraz podanie wartoœci do konwersji.
Przekonwertuj wartoœæ z jednostki wejœciowej na jednostkê wyjœciow¹ na podstawie ustalonego wspó³czynnika konwersji.
Wyœwietl wynik konwersji.
Przyk³adowe dzia³anie programu:

Konwerter jednostek
-------------------

Wybierz jednostkê wejœciow¹:
1. Metry
2. Centymetry
3. Cale
Wybór: 1

Wybierz jednostkê wyjœciow¹:
1. Metry
2. Centymetry
3. Cale
Wybór: 2

Podaj wartoœæ do konwersji: 5

Wynik konwersji: 500 centymetrów
*/
void menu_measurements()
{
    std::cout << "1.Centimeters\n2.Meters\n3.Inches\n";
}
void mesurement_base(int mesurement, std::string& base_mesurement)
{
    std::cout << "Give a base mesurement\n";
    std::cin >> mesurement;
    switch (mesurement)
    {
    case 1:
        base_mesurement = "Centemeters";
        break;
    case 2:
        base_mesurement = "Meters";
        break;
    case 3:
        base_mesurement = "Inches";
        break;
    default:
        break;
    }
}
void mesurement_output(int mesurement, std::string& output_mesurement)
{
    std::cout << "Give an output mesurement\n";
    std::cin >> mesurement;
    switch (mesurement)
    {
    case 1:
        output_mesurement = "Centemeters";
        break;
    case 2:
        output_mesurement = "Meters";
        break;
    case 3:
        output_mesurement = "Inches";
        break;
    default:
        break;
    }
}
void mesurement_amount(float& amount_mesurement)
{
    std::cout << "How much base mesurement to convert\n";
    std::cin >> amount_mesurement;

}
void mesurement_convert(std::string base_mesurement, std::string output_mesurement, float amount_mesurement, float mesurement_converted)
{
    if (base_mesurement == "Centemeters" && output_mesurement == "Centemeters")
        std::cout << "Mesurement converted - " << amount_mesurement;
    if (base_mesurement == "Meters" && output_mesurement == "Meters")
        std::cout << "Mesurement converted - " << amount_mesurement;
    if (base_mesurement == "Inches" && output_mesurement == "Inches")
        std::cout << "Mesurement converted - " << amount_mesurement;
    if (base_mesurement == "Centemeters" && output_mesurement == "Meters")
        std::cout << "Mesurement converted - " << amount_mesurement / 100;
    if (base_mesurement == "Centemeters" && output_mesurement == "Inches")
        std::cout << "Mesurement converted - " << amount_mesurement * 0.393700787;
    if (base_mesurement == "Meters" && output_mesurement == "Centemeters")
        std::cout << "Mesurement converted - " << amount_mesurement * 100;
    if (base_mesurement == "Meters" && output_mesurement == "Inches")
        std::cout << "Mesurement converted - " << amount_mesurement * 39.3700787;
    if (base_mesurement == "Inches" && output_mesurement == "Centemeters")
        std::cout << "Mesurement converted" << amount_mesurement * 2.54;
    if (base_mesurement == "Inches" && output_mesurement == "meters")
        std::cout << "Mesurement converted - " << amount_mesurement * 0.0254;

}
void task4()
{
    int mesurement = 0; 
    float amount_mesurement;
    float mesurement_converted = 0;
    std::string base_mesurement, output_mesurement;
    menu_measurements();
    mesurement_base(mesurement, base_mesurement);
    mesurement_output(mesurement, output_mesurement);
    mesurement_amount(amount_mesurement);
    mesurement_convert(base_mesurement, output_mesurement, amount_mesurement, mesurement_converted);
}
#pragma endregion Mesurements
    

int main()
{
    task4();
}