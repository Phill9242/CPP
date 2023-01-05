/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 22:03:32 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/05 12:23:27 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.class.hpp"
#include "WrongAnimal.class.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat"), _type("WrongCat")
{
	std::cout << "You just addopted a little furious ... wtf is this??" << std::endl;
	return ;
}

WrongCat::WrongCat(WrongCat const& instance) : WrongAnimal(instance)
{
	std::cout << "more ??? I really can't figure out" << std::endl;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout << "Rest in peace, big pile of bones? Maybe skin?" << std::endl;
	return ;
}

WrongCat	&WrongCat::operator=(WrongCat const &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

std::string WrongCat::getType(void)const
{
	return (this->_type);
}

void WrongCat::makeSound(void)const
{
	std::cout <<  ")(*hbsaf%&B2" << std::endl;
	return ;
}

std::ostream &operator<<(std::ostream &outputFile, WrongCat const *instance)
{
	outputFile << instance->getType() << std::endl;
	return (outputFile);
}
