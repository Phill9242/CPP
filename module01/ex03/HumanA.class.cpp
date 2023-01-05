/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 21:49:36 by phiolive          #+#    #+#             */
/*   Updated: 2022/12/17 22:20:05 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.class.hpp"
#include <iostream>

HumanA::HumanA (std::string name, Weapon &weapon) : _name (name), _weapon (weapon)
{	
	return ;
}

HumanA::~HumanA (void)
{
	return;
}

void	HumanA::attack (void)
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
