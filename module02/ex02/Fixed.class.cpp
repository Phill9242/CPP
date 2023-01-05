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

Fixed Fixed::operator+(Fixed const &rhs)
{
	return (this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const &rhs)
{
	return (this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const &rhs)
{
	return (this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const &rhs)
{
	return (this->toFloat() / rhs.toFloat());
}

bool	Fixed::operator>(Fixed const &rhs) const
{
	return (this->getRawBits() > rhs.getRawBits());
}

bool	Fixed::operator>=(Fixed const &rhs) const
{
	return (this->getRawBits() >= rhs.getRawBits());
}

bool	Fixed::operator<(Fixed const &rhs) const
{
	return (this->getRawBits() < rhs.getRawBits());
}

bool	Fixed::operator<=(Fixed const &rhs) const
{
	return (this->getRawBits() <= rhs.getRawBits());
}

bool	Fixed::operator==(Fixed const &rhs) const
{
	return (this->getRawBits() == rhs.getRawBits());
}

bool	Fixed::operator!=(Fixed const &rhs) const
{
	return (this->getRawBits() != rhs.getRawBits());
}

Fixed	&Fixed::operator++(void)
{
	this->_rawBits++;
	return (*this);
}

Fixed	&Fixed::operator--(void)
{
	this->_rawBits--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed anchor(*this);
	this->_rawBits++;
	return (anchor);
}

Fixed	Fixed::operator--(int)
{
	Fixed anchor(*this);
	this->_rawBits--;
	return (anchor);
}

Fixed const	&Fixed::min(Fixed const &number1, Fixed const &number2)
{
	if (number1 < number2)
		return (number1);
	return (number2);
}

Fixed const	&Fixed::max(Fixed const &number1, Fixed const &number2)
{
	if (number1 > number2)
		return (number1);
	return (number2);
}

Fixed &Fixed::min(Fixed &number1, Fixed &number2)
{
	if (number1 < number2)
		return (number1);
	return (number2);
}

Fixed &Fixed::max(Fixed &number1, Fixed  &number2)
{
	if (number1 > number2)
		return (number1);
	return (number2);
}
// OTHER PUBLIC MEMBER FUNCTIONS
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
