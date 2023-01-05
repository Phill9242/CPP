/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 14:48:16 by phiolive          #+#    #+#             */
/*   Updated: 2022/12/22 16:31:00 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_rawBits = 0;
	return ;
}

Fixed::Fixed(Fixed const & instance)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = instance;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_rawBits = rhs.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void)const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_rawBits);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_rawBits = raw;
	return ;
}

int const	Fixed::_fractionalBits = 8;
