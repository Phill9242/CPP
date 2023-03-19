#include "RPN.hpp"

static int  checkCharacter (char c)
{
	if (c >= '0' && c <= '9')
		return NUMBER;
	if (c == '*' || c == '-' || c == '/' || c == '+')
		return OPERATOR;
	if (c == ' ')
		return SPACE;
	else
	{
		std::cout << "Invalid character: " << c << std::endl;
		exit (1);
	}	
	return (1);
}

void	calculateStack (std::stack<int> &stack, char c)
{	
	if (stack.size() < 2)
	{
		std::cout << "Error: check your expression" << std::endl;
		exit (1);
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
			stack.push(secondToLast / last);
			break;
	}
	return ;
}	

int	reversePolishNotationCalculator(char *stringRPN)
{   
	int actualChar, previousChar;
	std::stack<int> stack;

	for (int i = 0; stringRPN[i]; i++)
	{
		actualChar = checkCharacter (stringRPN[i]);

		if (actualChar != SPACE && previousChar != SPACE && i != 0)
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
				calculateStack(stack, stringRPN[i]);
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
