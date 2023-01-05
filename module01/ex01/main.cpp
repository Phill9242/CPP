/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 20:04:31 by phiolive          #+#    #+#             */
/*   Updated: 2022/12/17 20:32:28 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"


int main (void)
{
	Zombie *bigZombieHorde = zombieHorde(2, "Bizonho");
	delete [] bigZombieHorde;
}