/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 15:19:58 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/28 15:29:03 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T, std::deque<T> >
{
	private:

	public:
		MutantStack(void) {};
		~MutantStack(void) {};
		MutantStack(MutantStack const *copy) : std::stack<T, std::deque<T> >(copy){}
		
		MutantStack &operator=(MutantStack const &rhs) 
		{
			std::stack<T, std::deque<T> >::operator=(rhs);
			return *this;
		}

		typedef typename std::deque<T> ::iterator iterator;
		typedef typename std::deque<T> ::reverse_iterator reverse_iterator;
		
		iterator begin() {return this->c.begin();}
		iterator end() {return this->c.end();}
		reverse_iterator rbegin() {return this->c.rbegin();}
		reverse_iterator rend() {return this->c.rend();}
};

#endif
