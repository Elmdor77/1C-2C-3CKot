Console.WriteLine("Hello, World!");
string name = Console.ReadLine();
Console.WriteLine(name);
string surname = Console.ReadLine();
Console.WriteLine(surname);
Console.WriteLine("Grah {0} {1} Grah", name, surname);
Console.WriteLine($"Grah {name} {surname} Grah");
Console.WriteLine(@"Prędkość 67\km\musztarde");
Console.WriteLine("Prędkość 67\\km\\musztarde");

int firstNumber = 6;
int secondNumber = firstNumber;
secondNumber++;
Console.WriteLine(firstNumber);
Console.WriteLine(secondNumber);

void firstParamentTest(int p)
{
    Console.WriteLine(p);
    p++;
    Console.WriteLine(p);
}

firstNumber = 21;
firstParamentTest(firstNumber);
Console.WriteLine(firstNumber);
Console.WriteLine();