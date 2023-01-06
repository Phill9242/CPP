/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 10:50:43 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/04 11:18:59 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.class.hpp"
#include "FragTrap.class.hpp"

int main(void)
{	
	ScavTrap	scav("Pedrin Scav");
	FragTrap	frag("Junin Frag");
	FragTrap	x;
	scav.attack(frag.getName());
	frag.takeDamage(scav.getAttackDamage());
	std::cout << scav;
	std::cout << frag;
	frag.attack(scav.getName());
	scav.takeDamage(frag.getAttackDamage());
	std::cout << scav;
	std::cout << frag;
	frag.highFivesGuys();
}
