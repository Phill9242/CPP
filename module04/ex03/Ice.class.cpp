/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 18:07:53 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/05 20:18:29 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.class.hpp"

Ice::Ice (void) : AMateria("ice")
{	
	std::cout << "Let's frozen this bastards!" << std::endl;
	return ;
}

Ice::Ice(Ice const & src ) : AMateria("ice")
{
	*this = src;
	std::cout << "Hailstorm" << std::endl;
	return ;
}

Ice::~Ice(void)
{
	std::cout << "Now it's just water" << std::endl;
	return ;
}

Ice	&Ice::operator=( Ice const & rhs )
{
	(void) rhs;
	return (*this);
}

std::string const &Ice::getType() const
{
	return (this->_type);
}

Ice* Ice::clone(void) const
{	
	Ice *iceClone = new Ice(*this);
	return (iceClone);
}
void Ice::use(ICharacter& target)
{	
	// message
	(void)target;
	return ;
}