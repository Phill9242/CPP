/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 10:42:16 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/04 12:15:53 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.class.hpp"

DiamondTrap::DiamondTrap(void) 
{   
	this->_name = "void";
	ClapTrap::_name = this->_name + "_clap_name";
	std::cout << "Another jane or john doe DiamondTrap" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{   
	this->setHitPoints(FragTrap::getHitPoints());
	this->setEnergyPoints(ScavTrap::getEnergyPoints());
	this->setAttackDamage(FragTrap::getAttackDamage());
	std::cout << "I'm " << this->_name << " , a new DiamondTrap, the science miracle! 💎" << std::endl;
	return ;
}


DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << this->_name << " just died!⚰️" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const& instance) : ClapTrap(instance), ScavTrap (instance), FragTrap(instance)
{
	std::cout << this->_name << ", a cloned DiamondTrap, it's among us!" << std::endl;
	return ;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rhs)
{
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints = rhs.getHitPoints();
	this->_attackDamage = rhs.getAttackDamage();
	return (*this);
}

std::string	DiamondTrap::getName(void)const
{
	return (this->_name);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "I'm " << this->_name << " also knowed as " << ClapTrap::_name << std::endl;
}

void	DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
}

std::ostream &operator<<(std::ostream &outputFile, DiamondTrap const &instance)
{
	outputFile	<< "DiamondTrap " << instance.getName() << " have :\n"
				<< instance.getHitPoints()
				<< " hit points ♥ \n"
				<< instance.getEnergyPoints()
				<< " energy points ⚡\n"
				<< instance.getAttackDamage()
				<< " attack damage 🥊 \n"
				<< std::endl;
	return (outputFile);
}