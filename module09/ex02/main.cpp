#include "PmergeMe.hpp"



int main (int argc, char **argv)
{

    if (argc < 2)
    {
        std::cout << "You need to provide at least one argument"<< std::endl;
        return (1);
    }
    ft_PmergeMe(argc, argv);

}