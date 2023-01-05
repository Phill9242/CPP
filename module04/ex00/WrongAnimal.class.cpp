/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 21:59:32 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/04 22:03:10 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.class.hpp"

WrongAnimal::WrongAnimal(void) : _type("Plantae")
{
	std::cout << "Give birth to a generic " << this->_type << " WrongAnimal" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(std::string kingdom) : _type(kingdom)
{
	std::cout << "Give birth to a new " << this->_type << " WrongAnimal" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const& instance)
{
	*this = instance;
	std::cout << this->_type << " WrongAnimal cloned" << std::endl;
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << this->_type << " WrongAnimal killed" << std::endl;
	return ;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &rhs)
{
	this->_type = rhs.getType();
	return *this;
}

std::string WrongAnimal::getType(void)const
{
	return (this->_type);
}

void WrongAnimal::makeSound(void)const
{
	std::cout << " ... total silence ..." << std::endl;
	return ;
}

std::ostream &operator<<(std::ostream &outputFile, WrongAnimal const *instance)
{
	outputFile << instance->getType() << std::endl;
	return outputFile;
}
