/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 10:50:43 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/03 12:22:50 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.class.hpp"
#include "ScavTrap.class.hpp"

int main(void)
{	
	ClapTrap	juca("juca");
	ScavTrap	scav("Juca's son");
	ScavTrap	copyScav(scav);
	for (int i = 0; i < 2; i++)
	{
		scav.attack("juca");
		juca.takeDamage(scav.getAttackDamage());
	}
	juca.attack("scav");
	std::cout << scav;
	std::cout << juca;
	scav.guardGate();
}
