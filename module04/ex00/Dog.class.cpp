/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 21:52:07 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/04 21:53:29 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.class.hpp"
#include "Animal.class.hpp"

Dog::Dog(void) : Animal("Dog"), _type("Dog")
{
	std::cout << "You just addopted a little silly Dog" << std::endl;
	return ;
}

Dog::Dog(Dog const& instance) : Animal(instance)
{
	std::cout << "more Dogs" << std::endl;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "Rest in peace, little Dog" << std::endl;
	return ;
}

Dog	&Dog::operator=(Dog const &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

std::string Dog::getType(void)const
{
	return (this->_type);
}

void Dog::makeSound(void)const
{
	std::cout << "woof" << std::endl;
	return ;
}

std::ostream &operator<<(std::ostream &outputFile, Dog const *instance)
{
	outputFile << instance->getType() << std::endl;
	return (outputFile);
}
