/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 14:14:37 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/28 15:51:55 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span() 
{
	return;
}

Span::~Span() 
{	
	return;
}

Span::Span(unsigned int n) : _storage(n) 
{
	return;
}

void	Span::addNumber(int n) {
	if (this->_myList.size() == this->_storage)
		throw storageFullException();
	this->_myList.push_back(n);
	return ;
}

// REMEMBER TO ADD A TEMPLATE AT THIS ONE
void	Span::addManyNumbers(std::list<int>::iterator begin, std::list<int>::iterator end) 
{
	while (begin != end) 
	{
		if (this->_myList.size() == this->_storage)
			throw storageFullException();
		this->addNumber(*begin);
		begin++;
	}
}

unsigned int	Span::shortestSpan() const {
	
	std::list<int> sorted = this->_myList;
	sorted.sort();
	std::list<int>::const_iterator begin = sorted.begin();
	std::list<int>::const_iterator end = sorted.end();
	int prev = *begin;
	unsigned int diff = static_cast<unsigned> (INT32_MAX);
	while (++begin != end)
	{	
		if (static_cast<unsigned>(*begin - prev) < diff)
			diff = *begin - prev;
		prev = *begin;
	}
	return (diff);
}

unsigned int	Span::longestSpan() const {
	if (this->_myList.size() < 2)
		throw impossibleComparissonException();
	std::list<int>::const_iterator  begin = this->_myList.begin();
	std::list<int>::const_iterator  end = this->_myList.end();
	std::list<int>::const_iterator min, max;
	min = std::min_element (begin, end);
	max = std::max_element (begin, end);
	return (*max - *min);
}

const char *Span::storageFullException::what() const throw() {
	return "The storage doesn't have capacity to store a new number";
}

const char *Span::impossibleComparissonException::what() const throw() {
	return "You need have at least two (2) numbers inside the storage to compare";
}
