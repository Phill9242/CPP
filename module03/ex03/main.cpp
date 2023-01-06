/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 10:50:43 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/04 12:12:38 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.class.hpp"
#include "FragTrap.class.hpp"
#include "DiamondTrap.class.hpp"

int main(void)
{	
	ScavTrap	scav("Pedrin Scav");
	FragTrap	frag("Junin Frag");
	DiamondTrap	diamond("Big Diamond");
	DiamondTrap	diamond_clone;

	diamond.attack(frag.getName());
	frag.takeDamage(diamond.getAttackDamage());
	scav.attack(diamond.getName());
	diamond.takeDamage(scav.getAttackDamage());
	std::cout << scav;
	std::cout << frag;
	std::cout << diamond;
	diamond.whoAmI();
}
