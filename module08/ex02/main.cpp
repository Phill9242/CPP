/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 15:24:14 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/28 15:38:30 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>

int main (void)
{
		
	std::cout << "Create Stack and add 3 numbers (1, 2 and 3)" << std::endl;
	MutantStack<int> mutant;
	mutant.push(1);
	mutant.push(2);
	mutant.push(3);
	std::cout << "\nUse top to print last number" << std::endl;
	std::cout << mutant.top() << std::endl;

	std::cout << "\nSize before pop:" << std::endl;
	std::cout << mutant.size() << std::endl;
	mutant.pop();
	std::cout << "\nSize after pop:" << std::endl;
	std::cout << mutant.size() << std::endl;
	mutant.push(3);
	MutantStack<int>::iterator begin = mutant.begin();
	MutantStack<int>::iterator end = mutant.end();
	std::cout << "\nUse Iterator to print all list:" << std::endl;
	while (begin != end)
	{
		std::cout << *begin << std::endl;
		begin++;
	}
	MutantStack<int>::reverse_iterator rbegin = mutant.rbegin();
	MutantStack<int>::reverse_iterator rend = mutant.rend();
	std::cout << "\nUse reverse Iterator to print all in reverse mode list:" << std::endl;
	while (rbegin != rend)
	{
		std::cout << *rbegin << std::endl;
		rbegin++;
	}
	
	std::cout << "\nPrint if the stack it's empty:" << std::endl;
	std::cout << std::boolalpha <<mutant.empty() << std::endl;

}