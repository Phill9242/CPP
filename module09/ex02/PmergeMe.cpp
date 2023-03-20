#include "PmergeMe.hpp"

void print(std::list<int> const &list)
{
	std::copy(list.begin(),
			list.end(),
			std::ostream_iterator<int>(std::cout, "\n"));
}


void divideInSmallLists (std::list<int> &argsList, std::list<std::list<int> > allLists)
{
	std::list<int> list1;
	std::list<int> list2;

	if (argsList.size() < 4)
	{	
		allLists.push_back(argsList);
		return;
	}
	std::list<int>::iterator it = argsList.begin();
	for (unsigned int i = 0; i < (argsList.size() / 2) - 1; i++)
		it++;
	list1.splice(list1.begin(), argsList, argsList.begin(), ++it);
	list2.splice(list2.begin(), argsList, it, argsList.end());
	// std::cout << "list1 :" << std::endl;
	// print(list1);
	// std::cout << "list2 :" << std::endl;
	// print(list2);
	divideInSmallLists(list1, allLists);
	divideInSmallLists(list2, allLists);
	return ;
	
}

void sortIntList (std::list<int> &argsList)
{	
	std::list< std::list<int> > allLists;
	divideInSmallLists (argsList, allLists);
	std::list< std::list<int> >::iterator it = allLists.begin();
	// while (it != allLists.end())
	// {

	// }
	return;
}

void convertArgsToIntList (int argc, char **argv, std::list<int> &argsList)
{
	for (int i = 1; i < argc; i++)
	{	
		int temp = atoi(argv[i]);
		argsList.push_back(temp);
	}
	
}

void    listSort (int argc, char **argv)
{
	std::list<int> argsList;
	convertArgsToIntList (argc, argv, argsList);
	sortIntList (argsList);
	print (argsList);
}


void    checkArgv (int argc, char **argv)
{
	for (int i = 1; i < argc; i++)
	{	
		for (int j = 0; argv[i][j]; j++)
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
			{	
				std::cout << "Invalid input" << std::endl;
				exit (1);
			}
		}
	}
}

void    ft_PmergeMe(int argc, char **argv)
{   
	checkArgv (argc, argv);
	listSort (argc, argv);
}