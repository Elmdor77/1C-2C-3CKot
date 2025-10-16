using System;
using System.Reflection.Metadata;
using System.Xml.Linq;

namespace PractitalTasks.Czerwiec_2022_6;

class Osoba
{
    private int id;
    private string imię;
    public Osoba()
    {
        id = 0;
        imię = "";
    }
    public Osoba(int id, string imię)
    {
        this.id = id;
        this.imię = imię;
    }
    public Osoba(Osoba poprzedniaOsoba)
    {
        id = poprzedniaOsoba.id;
        imię = poprzedniaOsoba.imię;
    }
    public void Wpisz_Imię(string argument)
    {
        if (imię != "")
            Console.WriteLine($"Cześć {argument}, mam na imię {imię}");
        else
            Console.WriteLine($"Cześć {argument}, mam na imię Brak danych");

    }
}
    internal class Task2
{
    public void Task()
    {
        Osoba osoba1 = new Osoba();
        osoba1.Wpisz_Imię(Console.ReadLine());
       
    }

}
