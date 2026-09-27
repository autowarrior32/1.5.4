#include <iostream>
#include <string>
#include <windows.h>
#include <cstdlib>
#include <ctime>

#define MASS_MAX_I 10


int mass[MASS_MAX_I];

int main(void)
{
	int tmp{ 0 };
	int count{ MASS_MAX_I };

	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	std::srand(static_cast<unsigned int>(std::time(nullptr)));

	for (int i = 0; i < MASS_MAX_I; i++)
	{
		
			mass[i] = rand();

	}


	std::cout << "Массив: " << std::endl;
	for (auto& num_mass_i : mass)
	{
		std::cout << num_mass_i << "\t";
	}
	std::cout << std::endl;


	do
	{
		count--;
		for (int8_t i = MASS_MAX_I-1; i >= 0; i--)
		{
			if ((mass[i] < mass[i-1])  && (i != 0))
			{
				tmp = mass[i];
				mass[i] = mass[i-1];
				mass[i-1] = tmp;
			}
		}
		
	} while (count > 0);

	for (uint8_t i = 0; i < MASS_MAX_I; i ++) 
	{
		std::cout << mass[i] << "\t";
	}
	std::cout << std::endl;

	//
	//std::cout << "Массив: " << std::endl;
	//for (auto& num_mass_i : mass)
	//{
	//	std::cout << num_mass_i << "\t";
	//}
	std::cout << std::endl;

	return(EXIT_SUCCESS);
}
