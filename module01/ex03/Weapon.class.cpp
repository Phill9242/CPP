/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 20:57:08 by phiolive          #+#    #+#             */
/*   Updated: 2022/12/17 22:55:37 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.class.hpp"

Weapon::Weapon ()
{
	return ;
}

Weapon::Weapon (std::string type) : _type (type)
{
	return ;
}

Weapon::~Weapon (void)
{
	return ;
}

std::string const &Weapon::getType(void)
{
	return (this->_type);
}

void	Weapon::setType (std::string type)
{	
	this->_type = type;
	return ;
}