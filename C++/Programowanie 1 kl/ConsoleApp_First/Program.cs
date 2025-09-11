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
    Console.WriteLine($"GRAH 1.1 {p}");
    p++;
    Console.WriteLine($"GRAH 1.2 {p}");
}

firstNumber = 21;
firstParamentTest(firstNumber);
Console.WriteLine(firstNumber);
Console.WriteLine();
void firstParamentTestV2(ref int p)
{
    Console.WriteLine($"GRAH 2.1 {p}");
    p++;
    Console.WriteLine($"GRAH 2.2 {p}");
}

firstNumber = 21;
firstParamentTestV2(ref firstNumber);
Console.WriteLine(firstNumber);
Console.WriteLine();

void firstParamentTestV3(out int p)
{
    //Console.WriteLine($"GRAH 3.1 {p}");
    p= 23;
    Console.WriteLine($"GRAH 3.2 {p}");
}

firstNumber = 21;
int thirdNumber;
firstParamentTestV3(out thirdNumber);
Console.WriteLine(thirdNumber);
Console.WriteLine();