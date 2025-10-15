namespace PractitalTasks.Styczeń_2023_1;

internal class Task1
{
    public void Task()
    {
        Console.WriteLine("Podaj pierwszą liczbe");
        int a = int.Parse(Console.ReadLine());
        Console.WriteLine("Podaj drugą liczbe");
        int b = int.Parse(Console.ReadLine());
        SprawdzNWD(a, b);
        Console.WriteLine("NWD podanych liczb:");
        Console.WriteLine(a);
    }
    private int SprawdzNWD(int a, int b)
    {
        while (a!=b)
        {
            if (a > b)
            {
                a = a - b;
            }
            else
                b = b - a;
        }
        return a;
    }
}

/*
 nazwa funkcji: <SprawdzNWD>
opis funkcji: <Pobiera dwie liczby typu int i odnajduje ich NWD>
parametry: <a - pierwsza liczba sprawdzana>
           <b - druga liczba sprawdzana>
zwracany typ i opis:  <int, zmienna a (pierwsza liczba przekształcona na NWD zmiennych a oraz b>
autor: <01234567890>
 */