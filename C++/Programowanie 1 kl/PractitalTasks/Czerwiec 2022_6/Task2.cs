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
    public void Wypisz_imie(string argument)
    {
        if (imię != "")
            Console.WriteLine($"Cześć {argument}, mam na imię {this.imię}");
        else
            Console.WriteLine("Brak danych");

    }
    public void IlośćInstancji()
    {
        Console.WriteLine($"Liczba zarejestrowanych osób to {licznik}");
    }
 }

  class Task2
{
    public void Task()
    {
        int identifikator = 0;
        string nazwa_osoby = "";
        Osoba osoba = new Osoba();

        //Console.WriteLine("Podaj id;");
        //identifikator = int.Parse(Console.ReadLine());
        //Console.WriteLine("Podaj imię;");
        //nazwa_osoby = Console.ReadLine();
        //Osoba osoba1 = new Osoba(identifikator,nazwa_osoby);
        //osoba1.Wypisz_imie(Console.ReadLine());

        osoba.IlośćInstancji();

        Osoba osoba2 = new Osoba();
        osoba2.Wypisz_imie("Jan");

        Osoba osoba3 = new Osoba(3, Console.ReadLine());
        osoba3.Wypisz_imie("Jan");

        Osoba osoba4 = new Osoba(osoba3);
        osoba4.Wypisz_imie("Jan");

        osoba4.IlośćInstancji();



    }

}
