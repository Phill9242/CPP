/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 17:50:22 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/05 19:55:57 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.class.hpp"

AMateria::AMateria (void) : _type ("void")
{	
	std::cout << "New void materia created" << std::endl;
	return ;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "New "<< type << " materia created" << std::endl;
	return ;
}

AMateria::AMateria(AMateria const & src )
{	
	std::cout << "New "<< this->_type << " materia duplicated" << std::endl;
	*this = src;
	return ;
}

AMateria::~AMateria(void)
{
	std::cout << this->_type << " materia destroyed" << std::endl;
	return ;
}

AMateria	&AMateria::operator=( AMateria const & rhs )
{
	*this = rhs;
	return (*this);
}

std::string const &AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	return ;
}
