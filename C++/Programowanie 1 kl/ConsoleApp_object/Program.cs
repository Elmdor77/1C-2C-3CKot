using ConsoleApp_object;
using System;

PointStruct firstPointStruct;
firstPointStruct.x = 6;
firstPointStruct.y = 7;

Console.WriteLine($"FirstPointStruct({firstPointStruct.x}, {firstPointStruct.y})");

PointStruct secondPointStruct = firstPointStruct;
secondPointStruct.x = 7;

Console.WriteLine($"FirstPointStruct({firstPointStruct.x}, {firstPointStruct.y})");
Console.WriteLine($"SecondPointStruct({secondPointStruct.x}, {firstPointStruct.y})");


void ParametrTestStruct_v1(PointStruct ps)
{
    Console.WriteLine($"Parametr test struct_v1({ps.x}, {ps.y})");
    ps.x = 67;
    Console.WriteLine($"Parametr test struct_v1({ps.x}, {ps.y})");
}
ParametrTestStruct_v1(firstPointStruct);
Console.WriteLine($"FirstPointStruct({firstPointStruct.x}, {firstPointStruct.y})");

void ParametrTestStruct_v2( ref PointStruct ps)
{
    Console.WriteLine($"Parametr test struct_v2({ps.x}, {ps.y})");
    ps.x = 67;
    Console.WriteLine($"Parametr test struct_v2({ps.x}, {ps.y})");
}
ParametrTestStruct_v2(ref firstPointStruct);
Console.WriteLine($"FirstPointStruct({firstPointStruct.x}, {firstPointStruct.y})");

//-----------------------------------------------------------------

PointClass firstPointClass = new PointClass();
//TWORZY ODWOŁANIE DO ADRESU OBIEKTU
firstPointClass.x = 6;
firstPointClass.y = 7;
Console.WriteLine($"FirstPointClass({firstPointClass.x}, {firstPointClass.y})");
PointClass secondPointClass = firstPointClass;
//KOPIUJE ODWOŁANIE DO OBIEKTU NIE OBIEKT
secondPointClass.x = 7; //PONIEWAZ KOPIUJE ADRES OBIEKTU ZMIENI ZECZY W TYM OBIEKCIE (WIEC TO SAMO CO W 1 CLASIE)
Console.WriteLine($"SecondPointClass({secondPointClass.x}, {firstPointClass.y})");
Console.WriteLine($"FirstPointClass({firstPointClass.x}, {firstPointClass.y})");