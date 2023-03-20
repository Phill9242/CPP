#include "PmergeMe.hpp"

void divideInSmallLists (std::list<int> &argsList, std::list<std::list<int> > &allLists)
{

	if (argsList.size() < 10)
	{	
		allLists.push_back(argsList);
		return;
	}
	std::list<int>::iterator middle = argsList.begin();
	std::advance(middle, argsList.size() / 2);

	std::list<int> list1;
	std::list<int> list2;
	list1.splice(list1.begin(), argsList, argsList.begin(), middle);
	list2.splice(list2.begin(), argsList, middle, argsList.end());

	divideInSmallLists(list1, allLists);
	divideInSmallLists(list2, allLists);
	return ;
}


void swap(std::list<int>::iterator a, std::list<int>::iterator b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(std::list<int> &inputList)
{
    int n = inputList.size();
    bool swapped = true;

    while (swapped)
    {
        swapped = false;
        std::list<int>::iterator prev = inputList.begin();
        std::list<int>::iterator current = prev;
        ++current;

        for (int i = 1; i < n; i++)
        {
            if (*prev > *current)
            {
                swap(prev, current);
                swapped = true;
            }
            ++prev;
            ++current;
        }
        --n;
    }
}


void applyBubbleSortInLists(std::list< std::list<int> > &allLists)
{
    for (std::list< std::list<int> >::iterator it = allLists.begin(); it != allLists.end(); ++it)
    {
        bubbleSort(*it);
    }
}

void convertArgsToIntList (int argc, char **argv, std::list<int> &argsList)
{
	for (int i = 1; i < argc; i++)
	{	
		int temp = atoi(argv[i]);
		argsList.push_back(temp);
	}
	
}

void merge(std::list<int> &left, std::list<int> &right, std::list<int> &merged)
{
    std::list<int>::iterator left_it = left.begin();
    std::list<int>::iterator right_it = right.begin();

    while (left_it != left.end() && right_it != right.end())
    {
        if (*left_it <= *right_it)
        {
            merged.splice(merged.end(), left, left_it++);
        }
        else
        {
            merged.splice(merged.end(), right, right_it++);
        }
    }

    merged.splice(merged.end(), left);
    merged.splice(merged.end(), right);
}

void mergeLists(std::list< std::list<int> > &allLists, std::list<int> &argsList)
{
    while (allLists.size() > 1)
    {
        std::list<int> merged;
        std::list<int> left(allLists.front());
        allLists.pop_front();
        std::list<int> right(allLists.front());
        allLists.pop_front();

        merge(left, right, merged);
        allLists.push_back(merged);
    }

    if (!allLists.empty())
    {
        argsList = allLists.front();
    }
}

void printList(const std::list<int> &argsList)
{
    for (std::list<int>::const_iterator it = argsList.begin(); it != argsList.end(); ++it)
    {
        std::cout << *it << ' ';
    }
    std::cout << std::endl;
}

std::list<int>    listSort (int argc, char **argv)
{
	std::list<int> argsList;
	std::list< std::list<int> > allLists;

	convertArgsToIntList (argc, argv, argsList);
    divideInSmallLists (argsList, allLists);
	applyBubbleSortInLists(allLists);
	mergeLists(allLists, argsList);
    return (argsList);
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

void	ft_PmergeMe(int argc, char **argv)
{
    clock_t inicio, fim;
    double tempoDeExecucao1;

	checkArgv (argc, argv);
    inicio = clock();
	std::list<int> list = listSort (argc, argv);
    fim = clock();

    tempoDeExecucao1 = (fim - inicio);
    std::cout << tempoDeExecucao1 << std::endl;
    
	// printList(list);
}