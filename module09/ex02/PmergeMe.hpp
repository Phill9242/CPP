#include <iostream>
#include <list>
#include <vector>
#include <stdlib.h>
#include <iterator>
#include <time.h>

void                ft_PmergeMe(int argc, char **argv);
void                convertArgsToIntList (int argc, char **argv, std::list<int> &argsList);
std::list<int>      listSort (int argc, char **argv);