/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 10:08:13 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/04 10:25:21 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.class.hpp"
#include <iostream>

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "I'm " << this->getName() << " , a new FragTrap. Better than my brotha !" << std::endl;
	return ;
}

FragTrap::FragTrap(void)
{
	std::cout << "Another jane or john doe FragTrap" << std::endl;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->getName() << " just died!⚰️" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const& instance) : ClapTrap(instance)
{
	std::cout << this->_name << ", a cloned FragTrap, it's among us!" << std::endl;
	return ;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs)
{
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints = rhs.getHitPoints();
	this->_attackDamage = rhs.getAttackDamage();
	return (*this);
}

void	FragTrap::attack(std::string const & target)
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
	std::cout << "FragTrap " << this->getName() << " kick's 🦶 " << target << " causing " << this->getAttackDamage() << " points of damage! " << std::endl;
	return ;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout	<< "FragTrap " << this->getName() << " greeted you!" << std::endl;
    return ;
}

std::ostream &operator<<(std::ostream &outputFile, FragTrap const &instance)
{
	outputFile	<< "FragTrap " <<instance.getName() << " have :\n"
				<< instance.getHitPoints()
				<< " hit points ♥ \n"
				<< instance.getEnergyPoints()
				<< " energy points ⚡\n"
				<< instance.getAttackDamage()
				<< " attack damage 🥊 \n"
				<< std::endl;
	return (outputFile);
}