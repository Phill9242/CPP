#include "RPN.hpp"

int main(int argc, char** argv)
{
    if (argc != 2)
    {
        std::cout << "Error: you must use only one argument" << std::endl ; 
        return (1);
    }
    
    return (reversePolishNotationCalculator(argv[1]));
}

