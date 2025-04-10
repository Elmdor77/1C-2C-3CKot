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

	std::cout << "\nZadanie 4.1:\n";

	int num_reversed = 0;
	std::vector<int> num_reversed_devidedby_17;
	for (int num : numbers)
	{
		int tmp_num = num;
		int tmp_num2 = num;
		int num_reversed = 0;
		int num_symbols = 0;

		while (tmp_num > 10)
		{
			tmp_num = tmp_num / 10;
			num_symbols++;
		}
		int x = 1;
		while (num_symbols >= 0)
		{
			int a = pow(10, x);
			tmp_num2 = num % a;
			while (tmp_num2 >= 10)
			{
				tmp_num2 = tmp_num2 / 10;
			}
			if (num_symbols == 0)
				num_reversed = num_reversed + tmp_num2;
			else
				num_reversed = num_reversed + tmp_num2 * pow(10, num_symbols);
			x++;
			num_symbols--;
		}
		std::cout << "\n" << num_reversed;
		if (num_reversed % 17 == 0)
		{
			std::cout << " - Odbicie podzielne przez 17";
			num_reversed_devidedby_17.push_back(num_reversed);
		}

	}
	if (num_reversed_devidedby_17.size() != 0)
	{
		std::cout << "\nOdbicia liczb podzielne przez 17:";
		for (int num : num_reversed_devidedby_17)
		{
			std::cout << "\n" << num;
		}
	}
	std::cout << "\n\nZadanie 4.2:\n";
	int highest_difference_num_num_reversed = 0;
	int num_with_highest_difference_num_num_reversed = 0;
	for (int num : numbers)
	{
		int tmp_num = num;
		int num_reversed = 0;
		int num_symbols = 0;
		int difference_num_num_reversed = 0;

		while (tmp_num > 10)
		{
			tmp_num = tmp_num / 10;
			num_symbols++;
		}
		int x = 1;
		tmp_num = num;
		while (num_symbols >= 0)
		{
			int a = pow(10, x);
			tmp_num = num % a;
			while (tmp_num >= 10)
			{
				tmp_num = tmp_num / 10;
			}
			if (num_symbols == 0)
				num_reversed = num_reversed + tmp_num;
			else
				num_reversed = num_reversed + tmp_num * pow(10, num_symbols);
			x++;
			num_symbols--;
		}
		difference_num_num_reversed = num - num_reversed;
		if (difference_num_num_reversed < 0)
			difference_num_num_reversed = difference_num_num_reversed * -1;
		std::cout << "\n" << difference_num_num_reversed;
		if (difference_num_num_reversed > highest_difference_num_num_reversed) {
			num_with_highest_difference_num_num_reversed = num;
			highest_difference_num_num_reversed = difference_num_num_reversed;
		}

	}
	std::cout << "\n" << "Liczba i jej odbicie z najwieksza wartoscia bezwzgledna ich roznicy:\n";
	std::cout << num_with_highest_difference_num_num_reversed << ", " << highest_difference_num_num_reversed;

	std::cout << "\n\nZadanie 4.3:\n";
	std::vector<int> prime_num;
	std::vector<int> prime_num_reversed;
	for (int num : numbers)
	{
		int tmp_num = num;
		int tmp_num2 = num;
		int num_reversed = 0;
		int num_symbols = 0;
		bool is_num_prime = true;
		bool is_num_reversed_prime = true;


		while (tmp_num > 10)
		{
			tmp_num = tmp_num / 10;
			num_symbols++;
		}
		int x = 1;
		while (num_symbols >= 0)
		{
			int a = pow(10, x);
			tmp_num2 = num % a;
			while (tmp_num2 >= 10)
			{
				tmp_num2 = tmp_num2 / 10;
			}
			if (num_symbols == 0)
				num_reversed = num_reversed + tmp_num2;
			else
				num_reversed = num_reversed + tmp_num2 * pow(10, num_symbols);
			x++;
			num_symbols--;
		}
		for (int i = 2; i < num; i++)
		{
			if (num % i == 0)
				is_num_prime = false;
		}
		for (int i = 2; i < num_reversed; i++)
		{
			if (num_reversed % i == 0)
				is_num_reversed_prime = false;
		}
		if (is_num_prime == true && is_num_reversed_prime == true)
		{
			prime_num.push_back(num);
			prime_num_reversed.push_back(num_reversed);
		}
	}
	std::cout << "\nLiczby piersze z odbiciami rowniez bedace liczbami pierwszymi:";
	for (int num : prime_num )
	{
		std::cout << "\n" << num;
	}


	std::cout << "\n\nZadanie 4.4:\n";
	int different_numbers = 0;
	int times_no_dups = 0;
	int times_one_dups = 0;
	int times_two_dups = 0;
	int how_much_num_dups = 0;
	bool counted_itself = false;
	for (int num : numbers)
	{
		for (int num2 : numbers)
		{
			if (num == num2) {
				if (counted_itself == true)
					how_much_num_dups++;
				counted_itself = true;

			}
		}
		if (how_much_num_dups == 0)
			times_no_dups++;
		if (how_much_num_dups == 1)
			times_one_dups++;
		if (how_much_num_dups == 2)
			times_two_dups++;
		counted_itself = false;
		how_much_num_dups = 0;



	}
	different_numbers = different_numbers + times_no_dups;
	different_numbers = different_numbers + times_one_dups / 2;

	different_numbers = different_numbers + times_two_dups / 3;
	std::cout << "Ilosc roznych liczb: " << different_numbers << "\n";
	std::cout << "Ilosc liczb wystepujacych tylko raz: " << times_no_dups << "\n";
	std::cout << "Ilosc liczb wystepujacych dwa razy: " << times_one_dups / 2 << "\n";
	std::cout << "Ilosc liczb wystepujacych trzy razy: " << times_two_dups / 3 << "\n";

}
