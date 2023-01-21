/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 23:40:07 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/21 00:02:19 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int main (void)
{	

	// CHAR TESTS
	char k = 'k';
	char z = 'z';

	std::cout << "\nCREATE TWO CHARS: 'k' and 'z' \n" << std::endl;

	std::cout << "bigger char : " << ::max(z, k) << std::endl;

	std::cout << "minor char : " << ::min(z, k) << std::endl;
	
	//SWAP
	std::cout << "\nValues before swap : " << z << " and "<< k << std::endl;
	swap(k, z);
	std::cout << "\nValues after swap : " << z << " and "<< k << std::endl;

	// INT TESTS
	int zero = 0;
	int fourteen = -14;

	std::cout << "\nCREATE TWO INTS: '0' and '-14' \n" << std::endl;

	std::cout << "bigger int : " << ::max(fourteen, zero) << std::endl;

	std::cout << "minor int : " << ::min(fourteen, zero) << std::endl;
	
	//SWAP
	std::cout << "\nValues before swap : " << fourteen << " and "<< zero << std::endl;
	swap(fourteen, zero);
	std::cout << "\nValues after swap : " << fourteen << " and "<< zero << std::endl;

	// FLOAT TESTS
	float one = 1.1f;
	float four = -4.2f;

	std::cout << "\nCREATE TWO FLOATS: '1.1' and '-4.2' \n" << std::endl;

	std::cout << "bigger float : " << ::max(four, one) << std::endl;

	std::cout << "minor float : " << ::min(four, one) << std::endl;

	//SWAP
	std::cout << "\nValues before swap : " << four << " and "<< one << std::endl;
	swap(four, one);
	std::cout << "\nValues after swap : " << four << " and "<< one << std::endl;

	
	// STRING TESTS
	std::string morango = "morango";
	std::string uva = "uva";

	std::cout << "\nCREATE TWO STRINGS: 'uva' and 'morango' \n" << std::endl;

	std::cout << "bigger STRING : " << ::max(morango, uva) << std::endl;
	std::cout << "minor STRING : " << ::min(morango, uva) << std::endl;

	//SWAP
	std::cout << "\nValues before swap : " << morango << " and "<< uva << std::endl;
	swap(morango, uva);
	std::cout << "\nValues after swap : " << morango << " and "<< uva << std::endl;
	
}