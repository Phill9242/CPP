/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 11:14:59 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/04 10:32:38 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.class.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "I'm " << this->getName() << " ScavTrap, and I'm stronger than papa !💪" << std::endl;
	return ;
}

ScavTrap::ScavTrap(void)
{
	std::cout << "Behold: void, the second, just born ! " << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->getName() << " just died!\nA father never should bury his son. Rest in peace, little one ⚰️" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const& instance) : ClapTrap(instance)
{
	std::cout << this->_name << ", a cloned ScavTrap, it's among us!" << std::endl;
	return ;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints = rhs.getHitPoints();
	this->_attackDamage = rhs.getAttackDamage();
	return (*this);
}

void	ScavTrap::attack(std::string const & target)
{
	if (!this->getEnergyPoints())
	{
		std::cout << this->getName() << " it's to tired" << std::endl;
		return ;
	}
	if (!this->getHitPoints())
	{
		std::cout << this->getName() << " it's to damaged !" << std::endl;
		return ;
	}
	this->_energyPoints--;
	std::cout << "ScavTrap " << this->getName() << " kick's 🦶 " << target << " causing " << this->getAttackDamage() << " points of damage! " << std::endl;
	return ;
}

void	ScavTrap::guardGate(void)
{
	std::cout	<< "Scavtrap " << this->getName() << " is in Gate keep mode" << std::endl;
    return ;
}

std::ostream &operator<<(std::ostream &outputFile, ScavTrap const &instance)
{
	outputFile	<< "ScavTrap " <<instance.getName() << " have :\n"
				<< instance.getHitPoints()
				<< " hit points ♥ \n"
				<< instance.getEnergyPoints()
				<< " energy points ⚡\n"
				<< instance.getAttackDamage()
				<< " attack damage 🥊 \n"
				<< std::endl;
	return (outputFile);
}
