/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 14:48:16 by phiolive          #+#    #+#             */
/*   Updated: 2022/12/23 15:15:34 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>
#include <cmath>

int const	Fixed::_fractionalBits = 8;

// CONSTRUCTORS -----------------------------------------------------

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

Fixed::Fixed(int const number)
{
	std::cout << "Int constructor called" << std::endl;
	this->_rawBits = number << Fixed::_fractionalBits;
}

Fixed::Fixed(float const number)
{
	std::cout << "Float constructor called" << std::endl;
	this->_rawBits = (int)roundf(number * (1 << Fixed::_fractionalBits));
}

// OPERATORS ------------------------------------------------
Fixed &Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_rawBits = rhs.getRawBits();
	return (*this);
}

// PUBLIC MEMBER FUNCTIONS
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

int	Fixed::toInt (void)const
{
	return (this->_rawBits >> Fixed::_fractionalBits);
}

float	Fixed::toFloat (void)const
{
	return ((float)this->_rawBits / (float) (1 << Fixed::_fractionalBits));
}

// STREAM OVERLOADS

std::ostream &operator<<(std::ostream &outfile, Fixed const &instance)
{
	outfile << instance.toFloat();
	return (outfile);
}
