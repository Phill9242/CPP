#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stack>
#include <stdlib.h>

#define OPERATOR 1
#define NUMBER 2
#define SPACE 3

int		reversePolishNotationCalculator(char *stringRPN);
void	calculateStack (std::stack<int> &stack, char c);

#endif