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
	int num_not_odd_shortcuts = 0;
	int biggest_not_odd_shortcut = 0;
	for (int num : numbers)
	{
		//std::vector<int> odd_nums_in_num;

		//int tmp_num = num;
		int tmp_num2 = num;
		//int num_symbols = 0;
		int odd_num_shortcut = 0;


		/*while (tmp_num > 10)
		{
			tmp_num = tmp_num / 10;
			num_symbols++;
		}
		int x = 0;
		while (num_symbols >= 0)
		{
			int a = pow(10, x);
			if (a > 0)
				tmp_num2 = num / a;
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
		}*/

		int poz = 1;
		while (tmp_num2 > 0)
		{
			odd_num_shortcut = tmp_num2 % 10 * poz + odd_num_shortcut;
			tmp_num2 = tmp_num2 / 10;
			poz *= 10;
		}


		/*int y = 1;
		for (int num : odd_nums_in_num)
		{
			odd_num_shortcut += num * y;
			y *= 10;

		}*/
		odd_num_shortcuts.push_back(odd_num_shortcut);
		if (odd_num_shortcut == 0)
		{
			num_not_odd_shortcuts++;
			if (num > biggest_not_odd_shortcut)
				biggest_not_odd_shortcut = num;
		}

	}
	for (int num : odd_num_shortcuts)
	{
		std::cout << num << "\n";
	}
	std::cout << "Ilosc liczb bez nieparzystych skrotow:\n";
	std::cout << num_not_odd_shortcuts << "\n";
	std::cout << "Najwieksza liczba bez nieparzystych skrotow:\n";
	std::cout << biggest_not_odd_shortcut << "\n";


	std::ifstream file2("skrot2_przyklad.txt");
	std::vector<int> numbers2;

	while (file2 >> num)
		numbers2.push_back(num);

	std::cout << "Odczytane liczby:\n";
	for (int num : numbers2)
	{
		std::cout << num << ", ";
	}
	std::cout << "\n";

	std::cout << "\nZadanie3.3\n";
	odd_num_shortcuts.clear();
	int NWD_num = 0;
	int NWD_num_and_num_odd_shortcut = 0;
	for (int num : numbers2)
	{
		std::vector<int> odd_nums_in_num;
		int tmp_num = num;
		int tmp_num2 = num;
		int num_symbols = 0;
		int odd_num_shortcut = 0;
		NWD_num_and_num_odd_shortcut = 0;

		while (tmp_num > 10)
		{
			tmp_num = tmp_num / 10;
			num_symbols++;
		}
		int x = 0;
		while (num_symbols >= 0)
		{
			int a = pow(10, x);
			if (a > 0)
				tmp_num2 = num / a;
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
			y *= 10;

		}
		odd_num_shortcuts.push_back(odd_num_shortcut);
		for (int i = 2; i <= odd_num_shortcut; i++)
		{
			if (num % i == 0 && odd_num_shortcut % i == 0)
			{
				NWD_num_and_num_odd_shortcut = i;
			}


		}
		if (NWD_num_and_num_odd_shortcut == 7)
			std::cout << "Liczba  i jej nieparzysty skrut z NWD = 7: " << num << "\n";
	}
}
