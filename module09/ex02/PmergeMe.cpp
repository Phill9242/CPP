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

void divideInSmallVectors (std::vector<int> &argsVector, std::vector<std::vector<int> > &allVectors)
{	
	std::vector<int> temp;
	for (std::vector<int>::iterator it = argsVector.begin(); it != argsVector.end(); ++it)
	{
		temp.push_back(*it);
		if (temp.size() == 10)
		{
			allVectors.push_back(temp);
			temp.clear();
		}
	}
	if (!temp.empty())
	{
		allVectors.push_back(temp);
	}

}

void swap(std::list<int>::iterator a, std::list<int>::iterator b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}


void swapVector(std::vector<int>::iterator a, std::vector<int>::iterator b)
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

void bubbleSortVector(std::vector<int> &inputVector)
{
	int n = inputVector.size();
	bool swapped = true;

	while (swapped)
	{
		swapped = false;
		std::vector<int>::iterator prev = inputVector.begin();
		std::vector<int>::iterator current = prev;
		++current;

		for (int i = 1; i < n; i++)
		{
			if (*prev > *current)
			{
				swapVector(prev, current);
				swapped = true;
			}
			++prev;
			++current;
		}
		--n;
	}
	return ;
}

void applyBubbleSortInLists(std::list< std::list<int> > &allLists)
{
	for (std::list< std::list<int> >::iterator it = allLists.begin(); it != allLists.end(); ++it)
	{
		bubbleSort(*it);
	}
}


void applyBubbleSortInVectors(std::vector< std::vector<int> > &allVectors)
{
	for (std::vector< std::vector<int> >::iterator it = allVectors.begin(); it != allVectors.end(); ++it)
	{
		bubbleSortVector(*it);
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

void convertArgsToIntVector (int argc, char **argv, std::vector<int> &argsVector)
{
	for (int i = 1; i < argc; i++)
	{	
		int temp = atoi(argv[i]);
		argsVector.push_back(temp);
	}
	
}
void mergeList(std::list<int> &left, std::list<int> &right, std::list<int> &merged)
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

		mergeList(left, right, merged);
		allLists.push_back(merged);
	}

	if (!allLists.empty())
	{
		argsList = allLists.front();
	}
}

void mergeSortedVectors(const std::vector<int>& v1, const std::vector<int>& v2, std::vector<int>& merged)
{
	merged.resize(v1.size() + v2.size());

	std::vector<int>::const_iterator it1 = v1.begin();
	std::vector<int>::const_iterator it2 = v2.begin();
	std::vector<int>::iterator itMerged = merged.begin();

	while (it1 != v1.end() && it2 != v2.end())
	{
		if (*it1 <= *it2)
		{
			*itMerged = *it1;
			++it1;
		}
		else
		{
			*itMerged = *it2;
			++it2;
		}
		++itMerged;
	}

	while (it1 != v1.end())
	{
		*itMerged = *it1;
		++it1;
		++itMerged;
	}

	while (it2 != v2.end())
	{
		*itMerged = *it2;
		++it2;
		++itMerged;
	}
}

void mergeVectors(const std::vector<std::vector<int> >& allVectors, std::vector<int>& argsVector)
{
	if (allVectors.empty())
	{
		return;
	}

	argsVector = allVectors[0];

	for (std::vector<std::vector<int> >::const_iterator it = allVectors.begin() + 1; it != allVectors.end(); ++it)
	{
		std::vector<int> merged;
		mergeSortedVectors(argsVector, *it, merged);
		argsVector = merged;
	}
}


void printList(const std::list<int> &argsList)
{	
	int i = 0;
	for (std::list<int>::const_iterator it = argsList.begin(); it != argsList.end(); ++it)
	{
		if (i++ < 4)
			std::cout << *it << ' ';
	}
	std::cout << std::endl;
}
void printVector(const std::vector<int> &argsList)
{	
	int i = 0;
	for (std::vector<int>::const_iterator it = argsList.begin(); it != argsList.end(); ++it)
	{	
		if (i++ < 4)
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

std::vector<int>    vectorSort (int argc, char **argv)
{
	std::vector<int> argsVector;
	std::vector< std::vector<int> > allVectors;

	convertArgsToIntVector (argc, argv, argsVector);
	divideInSmallVectors (argsVector, allVectors);
	applyBubbleSortInVectors(allVectors);
	mergeVectors(allVectors, argsVector);
	return (argsVector);
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

void    printNotOrdered(char **argv)
{	
	std::cout << "Before: ";
	for (int i = 1; argv[i]; i++)
	{
		std::cout << argv[i] << " ";
		if (i > 4)
		{	
			std::cout << "[...]";
			break;
		}
	}
	std::cout << std::endl;
}


void printOrdered (std::list<int> list)
{
	int i = 0;
	std::cout << "After:  ";
	for (std::list<int>::const_iterator it = list.begin(); it != list.end(); ++it)
	{
		std::cout << *it << ' ';
		if (i++ > 3)
		{	
			std::cout << "[...]";
			break;
		}
	}
	std::cout << std::endl;
}

void	printTimes (std::list<int> list, std::vector<int> vector, double timeVector, double timeList)
{
	std::cout	<< "Time to process a range of " << list.size() 
				<< " elements with std::list :   " << timeList << " us" << std::endl;

	std::cout	<< "Time to process a range of " << vector.size() 
				<< " elements with std::vector : " << timeVector << " us" << std::endl;
	
}


void    printResults (char **argv, std::list<int> list, std::vector<int> vector, double timeVector, double timeList)
{
	printNotOrdered (argv);
	printOrdered (list);
	printTimes (list, vector, timeVector, timeList);
}

void	ft_PmergeMe(int argc, char **argv)
{
	clock_t inicio, fim;
	double timeList, timeVector;

	checkArgv (argc, argv);
	inicio = clock();
	std::list<int> list = listSort (argc, argv);
	fim = clock();
	timeList = (static_cast<double>(fim - inicio) / CLOCKS_PER_SEC) * 1e6;
	inicio = clock();
	std::vector<int> vector = vectorSort (argc, argv);
	fim = clock();
	timeVector = (static_cast<double>(fim - inicio) / CLOCKS_PER_SEC) * 1e6;
	printResults (argv, list, vector, timeVector, timeList);
}