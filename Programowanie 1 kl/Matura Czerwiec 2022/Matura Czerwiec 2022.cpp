#include <iostream>
#include <fstream>
#include <vector>

int main()
{
	std::ifstream file("przyklad.txt");
	std::vector<int> numbers;

	int num;
	int firstNumber = 0;

	while (file >> num)
		numbers.push_back(num);

	std::cout << "Odczytane liczby:\n";
	for (int num : numbers)
	{
		std::cout << num << ", ";
	}
	std::cout << "\n";

	std::cout << "Zadanie 4.1:\n";
	
	for (int num : numbers)
	{
		int tmp_num = num;
		int num_reversed = 0;
		int num_symbols;
	while(tmp_num > 10)
	{
		tmp_num = num/10 12 2
		num_symbols++; 1 2
	}
	int x=1;
	while(num_symblols >=0)
	{
		tmp_num2 = num % pow(10,x); 
	while(tmp_num >= 10)
	{
	tmp_num/10;
	}
	num_reversed = tmp_num2 * pow(10,num_symblols);
	x++;
	num_symblols--;
	}
		std::cout << num_reversed<<"\n";
	}
}
