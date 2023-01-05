/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 21:26:23 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/04 22:22:53 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.class.hpp"
#include "Animal.class.hpp"

Cat::Cat(void) : Animal("Cat"), _type("Cat")
{
	std::cout << "You just addopted a little furious cat" << std::endl;
	return ;
}

Cat::Cat(Cat const& instance) : Animal(instance)
{
	std::cout << "more cats" << std::endl;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "Rest in peace, little Cat" << std::endl;
	return ;
}

Cat	&Cat::operator=(Cat const &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

std::string Cat::getType(void)const
{
	return (this->_type);
}

void Cat::makeSound(void)const
{
	std::cout <<  "meoow" << std::endl;
	return ;
}

std::ostream &operator<<(std::ostream &outputFile, Cat const *instance)
{
	outputFile << instance->getType() << std::endl;
	return (outputFile);
}
