using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LinqPracticalTasksConsoleApp;


internal class Task1
{
    void Print<T>(string title, IEnumerable<T> data)
    {
        Console.WriteLine($"\n=== {title} ===");
        foreach (var item in data)
            Console.WriteLine(item); 
    }

    public void DoTasks()
    {
        var people = new List<Person>
        {
            new Person() { Id=1, FirstName="Anna",  LastName="Nowak",    Age=29, Gender=Gender.Female, City="Kielce", Salary=8200m,  Skills=["C#", "LINQ", "SQL"] },
            new() { Id=2, FirstName="Marek", LastName="Kowalski", Age=43, Gender=Gender.Male,   City="Warszawa", Salary=15000m, Skills=["Azure", "C#", "DevOps"] },
            new() { Id=3, FirstName="Ewa",   LastName="Wiśniewska",Age=35, Gender=Gender.Female, City="Kraków", Salary=9800m,  Skills=["JavaScript", "React"] },
            new() { Id=4, FirstName="Jan",   LastName="Zieliński", Age=43, Gender=Gender.Male,   City="Gdańsk", Salary=12000m, Skills=["C#", "SQL"] },
            new() { Id=5, FirstName="Ola",   LastName="Maj",       Age=26, Gender=Gender.Female, City="Kielce", Salary=7200m,  Skills=["Python", "ML"] },
            new() { Id=6, FirstName="Piotr", LastName="Lewandowski",Age=37,Gender=Gender.Male,   City="Warszawa", Salary=13400m, Skills=["C#", "LINQ", "Azure"] },
            new() { Id=7, FirstName="Iga",   LastName="Kowal",     Age=31, Gender=Gender.Female, City="Kraków", Salary=9900m,  Skills=["Go", "Kubernetes"] },
            new() { Id=8, FirstName="Tomek", LastName="Sikora",    Age=29, Gender=Gender.Male,   City="Kielce", Salary=8800m,  Skills=["C#", "MAUI", "Bluetooth"] },
        };







        /*
        ========================================
        == POZIOM 1 – PODSTAWOWY ==
        ========================================

        1. Znajdź wszystkie osoby z Krakowa.
        2. Znajdź osoby pełnoletnie.
        3. Posortuj osoby po wieku rosnąco.
        4. Posortuj osoby po nazwisku malejąco.
        5. Wypisz tylko imię i nazwisko każdej osoby.
        6. Wypisz tylko miasta bez duplikatów.
        7. Oblicz liczbę osób z Warszawy.
        8. Oblicz średnią pensję wszystkich osób.
        9. Znajdź najmłodszą osobę.
        10. Sprawdź, czy jest ktoś z Gdańska.
        */
        /*
        ========================================
        == POZIOM 2 – ŚREDNI ==
        ========================================

        11. Posortuj osoby po mieście, a w ramach miasta po pensji malejąco.
        12. Znajdź osoby w wieku od 25 do 35 lat (włącznie).
        13. Oblicz sumę pensji osób z Kielc.
        14. Znajdź pierwszą osobę, której pensja jest większa niż 10 000.
        15. Znajdź ostatnią osobę w kolejności alfabetycznej po nazwisku.
        16. Wygeneruj dane osób w formacie: "Imię Nazwisko (Miasto)".
        17. Sprawdź, czy wszyscy mają co najmniej 18 lat.
        18. Policz, ile jest kobiet.
        19. Znajdź osoby, które zarabiają więcej niż średnia pensja.
        20. Znajdź najstarszą osobę z Krakowa.
        */
        /*
        ========================================
        == POZIOM 3 – ZAAWANSOWANY ==
        ========================================

        21. Wypisz unikalne umiejętności wszystkich osób posortowane alfabetycznie. nah
        22. Znajdź osoby, które mają skill "C#".
        23. Znajdź osoby, które mają co najmniej trzy skille.
        24. Znajdź osoby z Warszawy, posortuj je po wieku malejąco i wypisz tylko ich imię, nazwisko, wiek i pensję.
        25. Sprawdź, czy ktoś ma skill "Azure".
        26. Sprawdź, czy wszyscy zarabiają co najmniej 4000.
        27. Znajdź osobę o największej pensji.
        28. Znajdź osobę o najmniejszej pensji.
        29. Wypisz osoby, które mają taki sam wiek jak najstarsza osoba.
        30. Wypisz miasta wraz z liczbą osób pochodzących z każdego miasta. nah
        */
        /*
        ========================================
        == POZIOM 4 – EKSTRA / DLA CHĘTNYCH ==
        ========================================

        31. Znajdź osoby, które mają identyczny zestaw skilli. nah
        32. Posortuj osoby według liczby posiadanych skilli.
        33. Podziel osoby na dwie listy: zarabiających przynajmniej 8000 oraz zarabiających mniej niż 8000.
        34. Znajdź osoby, które mieszkają w najczęściej występującym mieście. nah
        35. Przyporządkuj każdą osobę do przedziału wiekowego (np. 20–29, 30–39, 40–49) i wypisz osoby z każdego przedziału.

        */
        /*
                // === POZIOM 1 ===

                // Zadanie 1
                var whereKrawow = people.Where(p => p.City == "Kraków");
                Print("Zadanie 1", whereKrawow);

                // Zadanie 2
                var whereAdult = people.Where(p => p.Age >= 18);
                Print("Zadanie 1", whereAdult);

                // Zadanie 3
                var orderAge = people.OrderBy(p => p.Age);
                Print("Zadanie 3", orderAge);

                // Zadanie 4
                var orderAgeDesc = people.OrderByDescending(p => p.Age);
                Print("Zadanie 4", orderAgeDesc);

                // Zadanie 5
                var FirstAndLastNames = people.Select(p => new { FirstName = p.FirstName , LastName = p.FirstName});
                Print("Zadanie 5", FirstAndLastNames);

                // Zadanie 6
                var DistinctCities = people.Select(p => p.City).Distinct();
                Print("Zadanie 6", DistinctCities);

                // Zadanie 7
                var NumberWarsaw = people.Count(p => p.City == "Warszawa");
                Console.WriteLine($"Ilośc osób mieszkających w Warszawie: {NumberWarsaw}");

                // Zadanie 8
                var AverageSalary = people.Average(p => p.Salary);
                Console.WriteLine($"Średnia wypłata pracowników: {AverageSalary}");

                // Zadanie 9
                var WiekNajmłodszaOsoba = people.Min(p => p.Age);
                var Najmłodszaosoba = people.Where(p => p.Age == WiekNajmłodszaOsoba);
                Print("Zadanie 9", Najmłodszaosoba);

                // Zadanie 10
                var CzyZGańsk = people.Any(p => p.City == "Gdańsk");
                if (CzyZGańsk)
                {
                    var OsobyZGdańska = people.Where(p => p.City == "Gdańsk");
                    Print("Zadanie 10", OsobyZGdańska);
                }
                else
                    Console.WriteLine("Nikt nie jest z Gdańska");

        */
        /*
        //== POZIOM 2 – ŚREDNI ==

        // Zadanie 11
        var ByCitySalary = people.OrderBy(p => p.City).ThenByDescending(p => p.Salary);
        Print("Zadanie 11", ByCitySalary);

        // Zadanie 12
        var Age25to35 = people.Where(p => p.Age >= 25 && p.Age <= 35).OrderBy(people => people.Age);
        Print("Zadanie 12", Age25to35);

        // Zadanie 13
        var SalaryKielce = people.Where(p => p.City == "Kielce").Sum(people => people.Salary);
        Console.WriteLine("=== Zadanie 13 ===");
        Console.WriteLine($"Suma wypłaty osób z Kielc: {SalaryKielce}");

        // Zadanie 14
        var First10K = people.Where(p => p.Salary > 10000).First();
        Console.WriteLine("=== Zadanie 14 ===");
        Console.WriteLine($"Pierwsza osoba z wypłatą ponad 10000: {First10K}");

        // Zadanie 15
        var LastAlphabeticalLastName = people.OrderByDescending(p => p.LastName).First();
        Console.WriteLine("=== Zadanie 15 ===");
        Console.WriteLine($"ostatnia osoba posertowana po nazwisku: {LastAlphabeticalLastName}");

        // Zadanie 16
        var FirstNameLastNameCity = people.Select(p => new { Imię = p.FirstName, Nazwisko = p.LastName, Miasto = "("+p.City+")" });
        Print("Zadanie 16",FirstNameLastNameCity );

        // Zadanie 17
        var AreAllUnderage = people.Any(p => p.Age < 18);
        Console.WriteLine("=== Zadanie 17 ===");
        if (AreAllUnderage)
            Console.WriteLine("Istnieje przynajmniej jedna osoba niepełnoletnia");
        else
            Console.WriteLine("Wszystkie osoby są pełnoletnie");

        Console.WriteLine("Istnieje przynajmniej jedna osoba niepełnoletnia");

        // Zadanie 18
        var WomanCount = people.Count(p => p.Gender == Gender.Female);
        Console.WriteLine("=== Zadanie 18 ===");
        Console.WriteLine($"Ilośc kobiet: {WomanCount}");

        // Zadanie 19
        var AverageSalary = people.Average(p => p.Salary);
        var SalaryMoreThanAvg = people.Where(p => p.Salary >= AverageSalary);
        Print("Zadanie 19", SalaryMoreThanAvg);

        // Zadanie 20
        var OldestFromKraków = people.Where(p => p.City == "Kraków").OrderByDescending(p => p.Age).First();
        Console.WriteLine("=== Zadanie 19 ===");
        Console.WriteLine($"Najstarsza osoba z Krakowa: {OldestFromKraków}");
        */

        //== POZIOM 3 – ZAAWANSOWANY ==

        // Zadanie 22
        var SkillCSharp = people.Where(p => p.Skills.Contains("C#"));
        Print("Zadanie 22", SkillCSharp);

        // Zadanie 23
        var AtLeastThreeSkills = people.Where(p => p.Skills.Count >= 3);
        Print("Zadanie 23", AtLeastThreeSkills);

        // Zadanie 24
        var SortFromWarsow = people.Where(p => p.City == "Warszawa").OrderByDescending(p => p.Age);
        var SelectFromSortFromWarsaw = SortFromWarsow.Select(p => new { FirstName = p.FirstName, LastName = p.LastName, Age = p.Age, Salary = p.Salary});
        Print("Zadanie 24", SelectFromSortFromWarsaw);

        // Zadanie 25
        var IsSkillAzure = people.Any(p => p.Skills.Contains("Azure"));
        Console.WriteLine("=== Zadanie 25 ===");
        if (IsSkillAzure)
            Console.WriteLine("Istnieje osoba prawna umoieszczona w tej bazie danych posiadajaca umiejętność obsługi programu komputerowago o nazwie Azure");
        else
            Console.WriteLine("Baza danych nie zawiera danych o osobie posiadającej umiejętnośc sprawnej obsługi ");

       // Zadanie 26
        var AtLeast4KSalary = people.Any(p => p.Salary < 4000);
        Console.WriteLine("=== Zadanie 26 ===");
        if (AtLeast4KSalary)
            Console.WriteLine("Wygląda na to iż w podanej bazie danych istnieje instancja osoby zarabiającej poniżej 4 tysiące złotych miesięcznie ");
        else
            Console.WriteLine("Każda osoba społeczna która zawarła swe dane osobowe zarabia minimalnie 4 tysiące polskiej waluty miesięcznie");

        //Zadanie 27
        var MaxSalary = people.Max(p => p.Salary);
        var PersonWithMaxSalary = people.Where(p=> p.Salary == MaxSalary);
        Print("Zadanie 27", PersonWithMaxSalary);

        //Zadanie 28
        var MinSalary = people.Min(p => p.Salary);
        var PersonWithMinSalary = people.Where(p => p.Salary == MinSalary);
        Print("Zadanie 28", PersonWithMinSalary);

        // Zadanie 29
        var OldestAge = people.Max(p => p.Age);
        var OldestPeople = people.Where(p => p.Age == OldestAge);
        Print("Zadanie 28", OldestPeople);










    }
}