using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PractitalTasks.Styczeń_2025_1;

class Urządzenie
{
    public void wyświetl_komunikat(string komunikat )
    {
        Console.WriteLine(komunikat);
    }
}

class Pralka : Urządzenie
{
    private int nr_prania = 0;

    public int ustaw_pranie(int nr_prania)
    {
        if (nr_prania > 0  && nr_prania <= 12)
        {
            Console.WriteLine("Program został ustawiony");
            this.nr_prania = nr_prania;
        }
        else
        {
            Console.WriteLine("Podano niepoprawny numer programu");
            this.nr_prania = 0;
        }
            return nr_prania;
    }
}
class Odkurzacz : Urządzenie
{
    private bool stan_odkurzacza = false;

    public void on()
    {
        if (stan_odkurzacza == false)
        {
            stan_odkurzacza = true;
            wyświetl_komunikat("Odkurzacz włączono");

        }
    }
    public void off()
    {
        if (stan_odkurzacza == true)
        {
            stan_odkurzacza = false;
            wyświetl_komunikat("Odkurzacz wyłączono");

        }
    }

}
internal class Task4
{
    public void Task()
    {
        int nr_prania = 0;
        Pralka pralka = new Pralka();

        Console.WriteLine("Podaj numer prania 1...12");
        nr_prania = int.Parse(Console.ReadLine());
        pralka.ustaw_pranie(nr_prania);
        Console.WriteLine("Podaj numer prania 1...12");
        nr_prania = int.Parse(Console.ReadLine());
        pralka.ustaw_pranie(nr_prania);


        Odkurzacz odkurzacz = new Odkurzacz();

        odkurzacz.on();
        odkurzacz.on();
        odkurzacz.on();
        odkurzacz.wyświetl_komunikat("Odkurzacz wyładował się");
        odkurzacz.off();
    }
}
