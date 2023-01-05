/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 14:35:47 by phiolive          #+#    #+#             */
/*   Updated: 2022/12/17 20:25:46 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *newZombieHorde = new Zombie [N];
	for (int i = 0; i < N; i++)
	{
		newZombieHorde[i].set_name(name);
		newZombieHorde[i].announce();
	}
	return (newZombieHorde);
}