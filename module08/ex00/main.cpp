/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 18:17:38 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/24 18:30:32 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <deque>
#include <vector>
#include <list>
#include <iostream>

int main (void)
{	
	// VECTOR TESTS--------------------------------------------------------------------------
	std::vector<int> myVector (11);
	std::vector<int>::iterator itVector;
	for (int i = 0; i < 10; i++)
		myVector.push_back(i);
	std::cout << "\n_____________VECTOR TESTS______________\n" << std::endl;
	std::cout << "TRY TO FIND NUMBER 6 INSIDE A VECTOR:" << std::endl;
	try{
		itVector = easyfind(myVector, 6);
		std::cout << *itVector << std::endl;
	}catch (std::exception & error){
		std::cout << error.what() << std::endl;
	}
	std::cout << "\nTRY TO FIND NUMBER -20 INSIDE A VECTOR:" << std::endl;
	try{
		itVector = easyfind(myVector, -20);
		std::cout << *itVector << std::endl;
	}catch (std::exception & error){
		std::cout << error.what() << std::endl;
	}

	// DEQUE TESTS--------------------------------------------------------------------------
	std::deque<int> mydeque (11);
	std::deque<int>::iterator itdeque;
	for (int i = 0; i < 10; i++)
		mydeque.push_back(i);
	std::cout << "\n\n_____________DEQUE TESTS______________\n" << std::endl;
	std::cout << "TRY TO FIND NUMBER 6 INSIDE A DEQUE:" << std::endl;
	try{
		itdeque = easyfind(mydeque, 6);
		std::cout << *itdeque << std::endl;
	}catch (std::exception & error){
		std::cout << error.what() << std::endl;
	}
	std::cout << "\nTRY TO FIND NUMBER -20 INSIDE A DEQUE:" << std::endl;
	try{
		itdeque = easyfind(mydeque, -20);
		std::cout << *itdeque << std::endl;
	}catch (std::exception & error){
		std::cout << error.what() << std::endl;
	}

	// LIST TESTS--------------------------------------------------------------------------
	std::list<int> mylist (11);
	std::list<int>::iterator itlist;
	for (int i = 0; i < 10; i++)
		mylist.push_back(i);
	std::cout << "\n\n_____________LIST TESTS______________\n" << std::endl;
	std::cout << "TRY TO FIND NUMBER 6 INSIDE A LIST:" << std::endl;
	try{
		itlist = easyfind(mylist, 6);
		std::cout << *itlist << std::endl;
	}catch (std::exception & error){
		std::cout << error.what() << std::endl;
	}
	std::cout << "\nTRY TO FIND NUMBER -20 INSIDE A LIST:" << std::endl;
	try{
		itlist = easyfind(mylist, -20);
		std::cout << *itlist << std::endl;
	}catch (std::exception & error){
		std::cout << error.what() << std::endl;
	}
}