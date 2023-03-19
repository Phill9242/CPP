#include "RPN.hpp"

static int  checkCharacter (char c)
{
	if (c >= '0' || c <= '9')
		return NUMBER;
	if (c == '*' || c == '-' || c == '/' || c == '+')
		return OPERATOR;
	if (c == ' ')
		return SPACE;
	std::cout << "Invalid character: " << c << std::endl;
	exit (1);
}

int reversePolishNotationCalculator(char *stringRPN)
{   
	int actualChar;

	for (int i = 0; stringRPN[i]; i++)
	{
		actualChar = checkCharacter (stringRPN[i]);
		switch (actualChar)
		{
			case (NUMBER):

				break;
			case (OPERATOR):

                break;
			case (SPACE):

                break;
		}

	}
}
