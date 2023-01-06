/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 10:50:43 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/04 09:56:27 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.class.hpp"

int main(void)
{
	ClapTrap	nameless;
	ClapTrap	juca("juca");
	ClapTrap	clone(juca);
	nameless.attack("juca");
	juca.takeDamage(nameless.getAttackDamage());
	for (int i = 0; i < 11; i++)
		nameless.attack("juca");
	std::cout << nameless;
	std::cout << juca;
	juca.takeDamage(12);
	juca.attack("his own butt");
	juca.beRepaired(6);
	juca.attack("his own butt");
	std::cout << juca;
}