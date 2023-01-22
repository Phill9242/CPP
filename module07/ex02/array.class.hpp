/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 16:17:48 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/22 16:26:03 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_CLASS_HPP
# define ARRAY_CLASS_HPP

#include <iostream>

template<typename T>
class Array
{

	public:
		// STANDARD CONSTRUCTOR
		Array<T>() : _arrayPointer(NULL), _size(0) 
		{
			return ;
		};

		// CONSTRUCTOR WITH ONE ARG
		Array<T>(const unsigned int n) : _size(n) 
		{
			_arrayPointer = new T[n];
			return ;
		};

		// COPY CONSTRUCTOR 
		Array<T>(Array<T> const &rhs) 
		{
			*this = rhs;
			return ;
		};

		// DESTRUCTOR
		~Array<T>() 
		{
			if (_arrayPointer)
				delete[] _arrayPointer;
		};

		// OVERLOAD [] OPERATOR
		T	&operator[](unsigned int i) 
		{
			if (i >= 0 && i < _size) 
				return _arrayPointer[i];
			throw OutofBoundException();
		};

		// OVERLOAD = OPERATOR
		Array<T> &operator=(Array<T> const &src) 
		{
			_size = src.size();
			_arrayPointer = new T[_size];
			for (unsigned int i = 0; i<_size; i++) 
			{
				_arrayPointer[i] = src._arrayPointer[i];
			}
			return (*this);
		};

		size_t		size() const 
		{ 
			return _size; 
		};

		class OutofBoundException : public std::exception {
			public :
				virtual const char *what() const throw() 
				{
					return "You are trying to access a invalid index\n";
				};
		};
		
	private:
		T		*_arrayPointer;
		size_t	_size;

};

#endif