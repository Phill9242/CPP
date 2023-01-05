/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 13:48:58 by phiolive          #+#    #+#             */
/*   Updated: 2022/12/17 20:27:45 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"
#include <iostream>

Zombie::Zombie(std::string name) : _name(name)
{	
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " just died !" << std::endl;
}


void Zombie::announce( void )
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}