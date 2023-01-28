/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 14:06:05 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/28 15:23:47 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# define __STDC_LIMIT_MACROS

#include <iostream>
#include <algorithm>
#include <list>
#include <iterator>
#include <stdint.h>
#include <cstdlib>

class Span
{
	private:
		unsigned int	_storage;
		std::list<int>	_myList;

	public:

		Span();
		Span(unsigned int n);
		Span (Span const & instance);
		~Span();

		Span			&operator=(Span const &rhs);
		
		void			addNumber(int n);
		void			addManyNumbers(std::list<int>::iterator begin, std::list<int>::iterator end);
		unsigned int	shortestSpan() const;
		unsigned int	longestSpan() const;

		class storageFullException : public std::exception
		{
			virtual const char *what() const throw();
		};
		class impossibleComparissonException : public std::exception
		{
			virtual const char *what() const throw();
		};

};


#endif