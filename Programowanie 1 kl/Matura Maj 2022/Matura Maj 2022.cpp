
#include <iostream>
#include <fstream>
#include <vector>

int main()
{
	std::ifstream file("przyklad.txt");

	/*
	int numbers[200];

	for (int i = 0; i < 200; i++)
	{
		file >> numbers[i];
	}

	std::cout << "Odczytane liczby: \n";
	for (int i = 0; i < 200; i++)
	{
		std::cout << numbers[i] << ", ";
	}
	std::cout << "\n";
	*/

	std::vector<int> numbers;

	int num;
	int firstNumber = 0;

	while (file >> num)
		numbers.push_back(num);

	/*
	for (int i = 0; i < numbers.size(); i++)
	{
		std::cout << numbers[i] << ", ";
	}
	std::cout << "\n";
	*/
	std::cout << "Odczytane liczby:\n";
	for (int num : numbers)
	{
		std::cout << num << ", ";
	}
	std::cout << "\n";

	std::cout << "Zadanie 4.1:\n";

	int count = 0;
	for (int num : numbers)
	{
		int firstDigit;
		int lastDigit = num % 10;

		int tmpNum = num;
		do
		{
			firstDigit = tmpNum % 10;
			tmpNum = tmpNum / 10;
		} while (tmpNum != 0);

		if (firstDigit == lastDigit)
		{
			count++;
		}
	}

	firstNumber = numbers[0];
	std::cout << count << " " << firstNumber << "\n";

	std::cout << "Zadanie 4.2:\n";
	
	int highest_prime_factor_count = 0;
	int number_with_the_most_prime_factors = 0;
	int highest_unique_prime_factor_count = 0;
	int number_with_the_most_unique_prime_factors = 0;
	for (int num : numbers)
	{
		int prime_factor = 2;
		int prime_factor_count = 0;
		bool is_unique_prime_factor = true;
		int unique_prime_factors_count = 0;

		
		//std::cout << num << "=";
		int temp_num = num;
		while (temp_num > 1)
		{
			if (temp_num % prime_factor == 0)
			{
			
				temp_num = temp_num / prime_factor;
				prime_factor_count++;
				//std::cout << prime_factor << ",";
				if (is_unique_prime_factor == true)
					unique_prime_factors_count++;
				is_unique_prime_factor = false;
			}
			else
			{
				prime_factor++;
				is_unique_prime_factor = true;
			}
				

		}
		if (prime_factor_count > highest_prime_factor_count)
		{
			highest_prime_factor_count = prime_factor_count;
			number_with_the_most_prime_factors = num;
			
		}
		if (unique_prime_factors_count > highest_unique_prime_factor_count)
		{
			highest_unique_prime_factor_count = unique_prime_factors_count;
			number_with_the_most_unique_prime_factors = num;

		}
		
		//std::cout << "  Ilosc czynnikow pierwszych:" << prime_factor_count << "  Ilosc unikalnych czynnikow pierwszych:" << number_unique_prime_factors << "\n";
	}
	std::cout << "Liczba:" << number_with_the_most_prime_factors << "Ilosc czynnikow pierwszych:" << highest_prime_factor_count << "\n";
	std::cout << "Liczba:" << number_with_the_most_unique_prime_factors << "Ilosc unikalnych czynnikow pierwszych:" << highest_unique_prime_factor_count << "\n";
	
	
	std::cout << "Zadanie 4.3:\n";




}
