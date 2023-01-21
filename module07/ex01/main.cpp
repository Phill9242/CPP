#include "iter.hpp"

#include <iostream>


int main(void)
{
	// ITER WITH INTS----------------------------------------------
	int numbers[10];
	for (int i = 0; i < 10; i++)
		numbers[i] = i * 12;

	std::cout << "	\nPRINT ORIGINAL NUMBERS:" << std::endl;
	for (int i = 0; i < 10; i++)
		std::cout << numbers[i] << " ";
 	std::cout << std::endl ;
	for (int i = 0; i < 10; i++)
		numbers[i] = i * 12;
	iter(numbers, 10, doubleNumber);

	std::cout << "	\nPRINT DOUBLED NUMBERS:" << std::endl;
	for (int i = 0; i < 10; i++)
		std::cout << numbers[i] << " ";
 	std::cout << std::endl ;
	
	// ITER WITH CHARS-------------------------------------------------
	char chars[10];
	for (int i = 0; i < 10; i++)
		chars[i] = i + 97;

	std::cout << "\nPRINT ORIGINAL CHARS: \n" << std::endl;
	for (int i = 0; i < 10; i++)
		std::cout << chars[i];
 	std::cout << std::endl ;

	std::cout << "\nPRINT CAPITALIZED CHARS: \n" << std::endl;
	iter(chars, 10, upperChar);
	for (int i = 0; i < 10; i++)
		std::cout << chars[i];
 	std::cout << "\n" <<std::endl ;
}