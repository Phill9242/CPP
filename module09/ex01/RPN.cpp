#include "RPN.hpp"

static int  checkCharacter (char c)
{
	if (c >= '0' && c <= '9')
		return NUMBER;
	if (c == '*' || c == '-' || c == '/' || c == '+')
		return OPERATOR;
	if (c == ' ')
		return SPACE;
	std::cout << "Invalid character: " << c << std::endl;
	return (INVALID);

}

bool	calculateStack (std::stack<int> &stack, char c)
{	
	if (stack.size() < 2)
	{
		std::cout << "Error: check your expression" << std::endl;
		return (false);
	}
	int secondToLast, last;

	last = stack.top();
	stack.pop();
	secondToLast = stack.top();
	stack.pop();
	switch (c)
	{
		case ('*'):
			stack.push(secondToLast * last);
			break;
		case ('-'):
			stack.push(secondToLast - last);
			break;
		case ('+'):
			stack.push(secondToLast + last);
			break;
		case ('/'):
			if (last == 0)
			{   
				std::cout << "Invalid operation: a number cannot be divided by 0" << std::endl;
				return (false);
			}
			stack.push(secondToLast / last);
			break;
	}
	return (true);
}	

int	reversePolishNotationCalculator(char *stringRPN)
{   
	int actualChar, previousChar;
	std::stack<int> stack;

	for (int i = 0; stringRPN[i]; i++)
	{
		actualChar = checkCharacter (stringRPN[i]);
		if (actualChar == INVALID)
			return (1);
		if (actualChar != SPACE && i != 0 && previousChar != SPACE)
		{	
			std::cout << "Error: your numbers and operators must be separeted by a space !" << std::endl;
			return (1);
		}

		switch (actualChar)
		{
			case (NUMBER):
				stack.push(stringRPN[i] - '0');
				break;
			case (OPERATOR):
				if (calculateStack(stack, stringRPN[i]) == false)
					return (1);
				break;
			default:
				break;
		}
		previousChar = actualChar;
	}

	if (stack.size() != 1)
	{
		std::cout << "Error: check your expression" << std::endl;
		return (1);
	}


	std::cout << stack.top() << std::endl;

	return (0);
}
