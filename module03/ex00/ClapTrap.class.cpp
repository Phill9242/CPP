/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 10:03:52 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/04 10:00:14 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"
#include <iostream>


ClapTrap::ClapTrap(void) : _name("void"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Standard void ClapTrap it's ALIIIVE!" << std::endl;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << this->_name << " just died!" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Well done, Mr. Frankstein! You just made your own " << this->getName() << " ClapTrap" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const& instance)
{
	*this = instance;
	std::cout << "Humm, so now you're in taking a cloning approach? " << this->getName() << " just have a twin!" << std::endl;
	return ;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints = rhs.getHitPoints();
	this->_attackDamage = rhs.getAttackDamage();
	return (*this);
}

void	ClapTrap::attack(std::string const & target)
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
	std::cout << "ClapTrap " << this->getName() << " punches 🥊 " << target << " causing " << this->getAttackDamage() << " points of damage! " << std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{	
	if (amount > this->_hitPoints)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;
	std::cout	<< "ClapTrap " << this->_name << " takes " << amount << " of damage"<< std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{   
	if (!this->_energyPoints)
	{
		std::cout << this->getName() << "it's to tired" << std::endl;
		return;
	}
	this->_energyPoints--;
	if (this->_hitPoints + amount < CLAPTRAP_MAX_HITPOINTS)
		this->_hitPoints += amount;
	else
		this->_hitPoints = CLAPTRAP_MAX_HITPOINTS;
	std::cout << this->getName() << " get repaired! Now this piece of junk has " << this->_hitPoints << " points of Energy!" << std::endl;
	return ;
}

void	ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void	ClapTrap::setHitPoints(unsigned int amount)
{
	this->_hitPoints = amount;
}

void		ClapTrap::setEnergyPoints(unsigned int amount)
{
	this->_energyPoints = amount;
}

void		ClapTrap::setAttackDamage(unsigned int amount)
{
	this->_attackDamage = amount;
}

std::string	ClapTrap::getName(void)const
{
	return (this->_name);
}

unsigned int	ClapTrap::getHitPoints(void)const
{
	return (this->_hitPoints);
}

unsigned int	ClapTrap::getEnergyPoints(void)const
{
	return (this->_energyPoints);
}

unsigned int	ClapTrap::getAttackDamage(void)const
{
	return (this->_attackDamage);
}

std::ostream &operator<<(std::ostream &outputFile, ClapTrap const &instance)
{
	outputFile	<< "ClapTrap " <<instance.getName() << " have :\n"
				<< instance.getHitPoints()
				<< " hit points ♥ \n"
				<< instance.getEnergyPoints()
				<< " energy points ⚡\n"
				<< instance.getAttackDamage()
				<< " attack damage 🥊 \n"
				<< std::endl;
	return (outputFile);
}