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
		int tmp_num2 = num;
		int num_reversed = 0;
		if (tmp_num >= 10)
		{
			tmp_num = tmp_num / 10;
			num_reversed = num_reversed + tmp_num;
			while (tmp_num > 10)
			{
				std::cout << tmp_num2;
				tmp_num2 = tmp_num2 - 10 * tmp_num;
				tmp_num = tmp_num / 10;
				
			}
		}
		std::cout << num_reversed<<"\n";
	}
}