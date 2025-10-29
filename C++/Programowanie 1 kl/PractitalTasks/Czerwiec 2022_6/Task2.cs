using System;
using System.Reflection.Metadata;
using System.Xml.Linq;

namespace PractitalTasks.Czerwiec_2022_6;

 class Osoba
 {
    private int id = 0;
    private string imię = "";
    public static int licznik = 0;

    public Osoba()
    {
        id = 0;
        imię = "";
        licznik++;
    }
    public Osoba(int id, string imię)
    {
        this.id = id;
        this.imię = imię;
        licznik++;
    }
    public Osoba(Osoba poprzedniaOsoba)
    {
        id = poprzedniaOsoba.id;
        imię = poprzedniaOsoba.imię;
        licznik++;
    }
    public void Wpisz_Imię(string argument)
    {
        if (imię != "")
            Console.WriteLine($"Cześć {argument}, mam na imię {this.imię}");
        else
            Console.WriteLine("Brak danych");

    }
    public void IlośćInstancji()
    {
        Console.WriteLine($"Liczba zarejestrowanych osób to {licznik}");
    }
 }

  class Task2
{
    public void Task()
    {

        Osoba osoba1 = new Osoba(int.Parse(Console.ReadLine()),(Console.ReadLine()));
        osoba1.Wpisz_Imię(Console.ReadLine());
        Osoba osoba2 = new Osoba();
        osoba2.Wpisz_Imię(Console.ReadLine());
        Osoba osoba3 = new Osoba(3, "Arek");
        osoba3.Wpisz_Imię(Console.ReadLine());
        Osoba osoba4 = new Osoba(osoba3);
        osoba4.Wpisz_Imię(Console.ReadLine());

    }

}
