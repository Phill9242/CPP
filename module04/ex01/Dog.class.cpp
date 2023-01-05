/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 21:52:07 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/05 14:09:48 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.class.hpp"
#include "Animal.class.hpp"

Dog::Dog(void) : Animal("Dog"), _type("Dog")
{	
	this->_brain = new Brain ();
	std::cout << "You just addopted a little silly Dog" << std::endl;
	return ;
}

Dog::Dog(Dog const& instance) : Animal(instance)
{	
	*this = instance;
	std::cout << "more Dogs" << std::endl;
	return ;
}

Dog::~Dog(void)
{	
	delete this->_brain;
	std::cout << "Rest in peace, little Dog" << std::endl;
	return ;
}

Dog	&Dog::operator=(Dog const &rhs)
{	
	this->_brain = new Brain ();
	this->_type = rhs._type;
	return (*this);
}

std::string Dog::getIdea(int index)
{
	return (this->_brain->myIdeas[index]);
}

void Dog::setIdea(int index, std::string newIdea)
{
	this->_brain->myIdeas[index] = newIdea;
	return ;
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
