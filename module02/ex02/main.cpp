/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 14:49:22 by phiolive          #+#    #+#             */
/*   Updated: 2022/12/22 21:13:16 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>

int main( void ) 
{
	Fixed a (10.1f);
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a.getRawBits() << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	Fixed c (6);
	Fixed d (3);
	std::cout << "\nThat was the mandatory part, for now own let's do our own tests:" << std::endl;


	std::cout << "\nC Current value it's " << c << std::endl;
	std::cout << "The value of C after a pre incremention it's " << ++c << std::endl;
	std::cout << "But if a pos increment you'll just know in the next line" << std::endl;
	c++;
	std::cout << "And now his value it's " << c << std::endl;
	std::cout << "\nNow let's do some comparisons\n" << std::endl;
	std::cout << c.getRawBits() << " = C raw Value"<< std::endl;
	std::cout << d.getRawBits() << " = D raw Value"<< std::endl;
	std::cout << "\nIt's C bigger than D ?" <<std::endl;
	if (c>d)
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;
	std::cout << "\nIt's C equals to D ?" <<std::endl;
	if (c==d)
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;
	std::cout << "\nBut is different then?" <<std::endl;
	if (c!=d)
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;
	std::cout << "\nWhat it's the raw value if we multiply them?" <<std::endl;
	std::cout << c.getRawBits() * d.getRawBits() << std::endl;
	std::cout << "\nAnd the int value?" <<std::endl;
	std::cout << c.toInt() * d.toInt() << std::endl;
	std::cout << "\nAnd the float value?" <<std::endl;
	std::cout << d * c << std::endl;
	return 0;
}