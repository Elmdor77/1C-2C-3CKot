using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PractitalTasks.Styczeń_2023_1;

class Notatka
{
    private static int ilość_notatek = 0;
    private int id = 0;
    protected string tytuł_notatki = "";
    protected string treść_notatki = "";

    public Notatka(string tytuł, string treść)
    {
        tytuł_notatki = tytuł;
        treść_notatki = treść;
        ilość_notatek += 1;
        id = ilość_notatek;
    }

    public void pokaż_notatke()
    {
        Console.WriteLine($"Tytuł notatki: {tytuł_notatki}");
        Console.WriteLine($"Treść notatki: {treść_notatki}");
    }

    public void dane_notatki()
    {
        Console.Write($"Tytuł notatki: {tytuł_notatki}; ");
        Console.Write($"Treść notatki: {treść_notatki}; ");
        Console.Write($"Id notatki: {id}; ");
        Console.Write($"Ilość notatek: {ilość_notatek}\n");
    }

}
internal class Task1_5
{
    public void Task()
    {
        string tytuł = "";
        string treść = "";
        Console.Write("Wpisz tytuł notatki: ");
        tytuł = Console.ReadLine();
        Console.Write("\nWpisz treść notatki: ");
        treść = Console.ReadLine();
        Notatka notatka = new Notatka(tytuł, treść);
        notatka.pokaż_notatke();
        notatka.dane_notatki();


        Console.Write("Wpisz tytuł notatki: ");
        tytuł = Console.ReadLine();
        Console.Write("\nWpisz treść notatki: ");
        treść = Console.ReadLine();
        Notatka notatka2 = new Notatka(tytuł, treść);
        notatka2.pokaż_notatke();
        notatka2.dane_notatki();

    }
}
