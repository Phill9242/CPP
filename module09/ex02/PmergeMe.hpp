#ifndef PMERGE_ME_HPP
# define PMERGE_ME_HPP
#include <iostream>
#include <list>
#include <vector>
#include <stdlib.h>
#include <iterator>
#include <time.h>
#include <set>

void	ft_PmergeMe(int argc, char **argv);
void	checkArgv (int argc, char **argv);
void    areNumbersUnique(char **argv);

void	divideInSmallVectors (std::vector<int> &argsVector, std::vector<std::vector<int> > &allVectors);
void	divideInSmallLists (std::list<int> &argsList, std::list<std::list<int> > &allLists);

void	mergeLists(std::list<int> &left, std::list<int> &right, std::list<int> &merged);
void	mergeAllLists(std::list< std::list<int> > &allLists, std::list<int> &argsList);
void	mergeVectors(const std::vector<int>& v1, const std::vector<int>& v2, std::vector<int>& merged);
void    mergeAllVectors(const std::vector<std::vector<int> >& allVectors, std::vector<int>& argsVector);

std::list<int>		listSort (int argc, char **argv);
std::vector<int>	vectorSort (int argc, char **argv);

void    printNotOrdered(char **argv);
void    printOrdered (std::list<int> list);
void	printTimes (std::list<int> list, std::vector<int> vector, double timeVector, double timeList);
void	printResults (char **argv, std::list<int> list, std::vector<int> vector, double timeVector, double timeList);


// TEMPLATES ------------------------------------------------------
template <typename Container>
void convertArgs (int argc, char **argv, Container &args);

template <typename Container>
void swap(typename Container::iterator a, typename Container::iterator b);

template <typename Container>
void insertionSort(Container &inputList);

template <typename OuterContainer>
void applyInsertionSort(OuterContainer &allContainers);

#endif