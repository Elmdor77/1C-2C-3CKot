using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PractitalTasks.Czerwiec_2023_6;


class Film
{
    protected string tytuł = "";
    protected int ilość_wypożyczeń = 0;
    public string Tytuł
    {
        get
        {
            return tytuł;
        }

        set 
        {   
            //if(value >= 20)
            tytuł = value;
        }
    }
    public int Ilość_wypożyczeń
    {
        get
        {
            return ilość_wypożyczeń;
        }
    }

    public void Inkrementuj_wypożyczenie()
    {
        this.ilość_wypożyczeń += 1;
    }
}
class Task3
{
    public void Task()
    {
        string film;
        Film film1 = new Film();
        Console.WriteLine("Podaj tytuł filmu; ");
        film1.Tytuł = Console.ReadLine();
        film = film1.Tytuł;
        Console.WriteLine(film);
    }
}
