/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 14:25:03 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/28 15:52:06 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main (void)
{	
	// INTRA TESTS--------------------------------------
	std::cout << "INTRA TESTS \n" << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	// MY TESTS ---------------------------------------------

	std::cout << "\nMY TESTS \n" << std::endl;

	std::cout << "\nTEST WITH 4 numbers (-100, 0 ,100 , 2)\n" << std::endl;
	
	Span myShortList(4);
	myShortList.addNumber (-100);
	myShortList.addNumber (0);
	myShortList.addNumber (100);
	myShortList.addNumber (2);
	std::cout << "Longes distance = " << myShortList.longestSpan()  << std::endl;
	std::cout << "Shortest distance= " << myShortList.shortestSpan() << std::endl;

	
	std::cout << "\nTEST WITH ONE HUNDRED THOUSAND AND TWO NUMBERS (WITH MIN AND MAX INT)\n" << std::endl;
	Span myList(100002);
	std::list<int> bigList (100000);
	std::list<int>::iterator listBegin= bigList.begin();
	std::list<int>::iterator listEnd = bigList.end();
	myList.addNumber (INT32_MIN);
	myList.addNumber (INT32_MAX);
	myList.addManyNumbers(listBegin, listEnd);
	std::cout << "Longes distance = " << myList.longestSpan()  << std::endl;
	std::cout << "Shortest distance= " << myList.shortestSpan() << std::endl;

	std::cout << "\nTEST PUT A NUMBER INSIDE A FULL LIST\n" << std::endl;
	try{
		myList.addNumber (INT32_MIN);
	}catch (std::exception & error){
		std::cout << error.what() << std::endl;
	}

	std::cout << "\nCOMPARE A LIST WITH ONE NUMBER\n" << std::endl;
	Span oneNumberList(1);
	oneNumberList.addNumber(1);
	try{
		oneNumberList.longestSpan();
	}catch (std::exception & error){
		std::cout << error.what() << std::endl;
	}
	return 0;
}