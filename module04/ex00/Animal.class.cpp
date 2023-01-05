/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 21:09:45 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/04 22:16:14 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"

Animal::Animal(void) : _type("Metazoa")
{
	std::cout << "Give birth to a generic " << this->_type << " Animal" << std::endl;
	return ;
}

Animal::Animal(std::string species) : _type(species)
{
	std::cout << "Give birth to a new " << this->_type << " Animal" << std::endl;
	return ;
}

Animal::Animal(Animal const& instance)
{
	*this = instance;
	std::cout << this->_type << " Animal cloned" << std::endl;
	return ;
}

Animal::~Animal(void)
{
	std::cout << this->_type << " Animal killed" << std::endl;
	return ;
}

Animal	&Animal::operator=(Animal const &rhs)
{
	this->_type = rhs.getType();
	return *this;
}

std::string Animal::getType(void)const
{
	return (this->_type);
}

void Animal::makeSound(void)const
{
	std::cout << " ... total silence ..." << std::endl;
	return ;
}

std::ostream &operator<<(std::ostream &outputFile, Animal const *instance)
{
	outputFile << instance->getType() << std::endl;
	return (outputFile);
}
