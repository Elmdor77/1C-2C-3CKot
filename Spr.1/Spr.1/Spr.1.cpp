#include <iostream>

void task1()
{
    int base_triangle, height_triangle;
    std::cout << "Give a base of triangle\n";
    std::cin >> base_triangle;
    std::cout << "Give a height of triangle\n";
    std::cin >> height_triangle;
    double area_triangle = (base_triangle * height_triangle) / 2;
    if (base_triangle <= 0 || height_triangle <= 0)
        std::cout << "Any triangle section can't be 0 or below\n";
    else
        std::cout << "Area of triangle = " << area_triangle <<"\n";

}

void task2()
{
    int number_first, number_second;
    std::cout << "Give a first number\n";
    std::cin >> number_first;
    std::cout << "Give a second number\n";
    std::cin >> number_second;
    if (number_first = number_second)
        std::cout << "Numbers are equal\n";
    else
        std::cout << "Numbers not are equal\n";
}

void task3()
{
    int first_number;
    std::cout << "Give a  number\n";
    std::cin >> first_number;
    if (first_number < 7 && first_number >= -5)
        std::cout << "Number is in number range <-5;7)\n";
    else
        std::cout << "Number is not in number range <-5;7)\n";
}

void task4()
{
    int day_number;
    std::cout << "Give a numberc of a day\n";
    std::cin >> day_number;
    if (day_number > 0 && day_number < 8)
    {
        if (day_number == 1)
            std::cout << "It's Monday\n";
        if (day_number == 2)
            std::cout << "It's Tuesday\n";
        if (day_number == 3)
            std::cout << "It's Wednesday\n";
        if (day_number == 4)
            std::cout << "It's Thursday\n";
        if (day_number == 5)
            std::cout << "It's Friday\n";
        if (day_number == 6)
            std::cout << "It's Saturday\n";
        if (day_number == 7)
            std::cout << "It's Sunday\n";
    }
    else
        std::cout << "You gave a wrong number\n";
}
int main()
{
    task1();
    task2();
    task3();
    task4();
}
