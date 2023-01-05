/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 14:49:22 by phiolive          #+#    #+#             */
/*   Updated: 2022/12/23 19:32:29 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.class.hpp"
#include <iostream>

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void ) 
{	
	Point a = Point (4.0f, 1.0f);
	Point b = Point (1.0f, 3.0f);
	Point c = Point (6.0f, 4.0f);

	Point t = Point (1.5f, 2.5f);
	std::cout << "Test 1 : Point 1.5 and 2.5" << std::endl;
	std::cout << bsp(a, b, c, t) << "\n" <<  std::endl;

	t = Point (2.4f, 2.4f);
	std::cout << "Test 2 : Point 2.4 and 2.4" << std::endl;
	std::cout << bsp(a, b, c, t) << "\n" <<  std::endl;

	t = Point (4.8f, 2.0f);
	std::cout << "Test 3 : Point 4.8 and 2.0" << std::endl;
	std::cout << bsp(a, b, c, t) << "\n" <<  std::endl;
	
	t = Point (4.0f, 3.5f);
	std::cout << "Test 4 : Point 4.0 and 3.5" << std::endl;
	std::cout << bsp(a, b, c, t) << "\n" << std::endl;

	t = Point (4.0f, 4.0f);
	std::cout << "Test 5 : Point 4.0 and 4.0 (EDGE)" << std::endl;
	std::cout << bsp(a, b, c, t) << "\n" << std::endl;

	t = Point (2.0f, 3.0f);
	std::cout << "Test 6 : Point 2.0 and 3.0" << std::endl;
	std::cout << bsp(a, b, c, t) << "\n" << std::endl;

	t = Point (4.0f, 5.0f);
	std::cout << "Test 7 : Point 4.0 and 5.0 (EDGE)" << std::endl;
	std::cout << bsp(a, b, c, t) << "\n" << std::endl;

	t = Point (4.0f, 1.0f);
	std::cout << "Test 8 : Point 4.0 and 4.0 (VERTEX)" << std::endl;
	std::cout << bsp(a, b, c, t) << "\n" << std::endl;
	
	return 0;
}