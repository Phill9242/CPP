/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 15:10:52 by phiolive          #+#    #+#             */
/*   Updated: 2022/12/23 16:01:45 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.class.hpp"

// CONSTRUCTORS AND DESTRUCTORS ---------------------------------
Point::Point(void) : _x(Fixed(0)) , _y(Fixed(0))
{
	return ;
}

Point::Point(Point const & instance)
{
	*this = instance;
	return ;
}

Point::Point (float x, float y) : _x(Fixed(x)) , _y(Fixed(y))
{
	return ;
}

Point::~Point(void)
{
	return ;
}

// OPERATORS --------------------------------------------------------
Point &Point::operator=(Point const &rhs)
{
	if (this != &rhs)
	{
		this->_x = rhs.getXValue();
		this->_y = rhs.getYValue();
	}
	return (*this);
}

// GETTERS AND SETTERS------------------------------------------------
Fixed	Point::getXValue(void) const
{
	return (this->_x);
}

Fixed	Point::getYValue(void) const
{
	return (this->_y);
}

// void	Point::setXValue(Fixed const value)
// {
// 	this->_x = value;
// 	return ;
// }

// void	Point::setYValue(Fixed const value)
// {
// 	this->_y = value;
// 	return ;
// }