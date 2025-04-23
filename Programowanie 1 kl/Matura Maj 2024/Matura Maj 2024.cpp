#include <iostream>
#include <fstream>
#include <vector>
int main()
{
	std::ifstream file("skrot_przyklad.txt");
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

	std::cout << "\nZadanie3.2\n";
	std::vector<int>odd_num_shortcuts;
	for (int num : numbers)
	{
		std::vector<int> odd_nums_in_num;

		int tmp_num = num;
		int tmp_num2 = num;
		int num_symbols = 0;
		int odd_num_shortcut = 0;

		while (tmp_num > 10)
		{
			tmp_num = tmp_num / 10;
			num_symbols++;
		}
		int x = 0;
		while (num_symbols >= 0)
		{
			int a = pow(10 ,x);
			if(a > 0)
			tmp_num2 = num / a ;
			if (tmp_num2 % 2 != 0)
			{
				if (tmp_num2 > 10)
				{
					odd_nums_in_num.push_back(tmp_num2 % 10);
				}
				else
					odd_nums_in_num.push_back(tmp_num2);
			}
			x++;
			num_symbols--;
		}
		int y = 1;
		for (int num : odd_nums_in_num)
		{
			odd_num_shortcut += num * y;
			if (y == 1)
				y += 9;
			else
				y += 10;
		}
		odd_num_shortcuts.push_back(odd_num_shortcut);

	}
	for (int num : odd_num_shortcuts)
	{
		std::cout << num <<"\n";
	}





}
