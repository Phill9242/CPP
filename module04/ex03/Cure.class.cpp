/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 18:15:54 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/05 19:28:05 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.class.hpp"

Cure::Cure (void) : AMateria("cure")
{	
	std::cout << "Who need's a hand?" << std::endl;
	return ;
}

Cure::Cure(Cure const & src ) : AMateria("cure")
{
	*this = src;
	std::cout << "Are sure that you don't wanna go to the Hospital?" << std::endl;
	return ;
}

Cure::~Cure(void)
{
	std::cout << "I hope you don't die by yourself" << std::endl;
	return ;
}

Cure	&Cure::operator=( Cure const & rhs )
{
	*this = rhs;
	return (*this);
}

std::string const &Cure::getType() const
{
	return (this->_type);
}

Cure* Cure::clone(void) const
{	
	Cure *cureClone = new Cure(*this);
	return (cureClone);
}

void Cure::use(ICharacter& target)
{	
	// message
	(void)target;
	return ;
}