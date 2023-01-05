/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 14:10:42 by phiolive          #+#    #+#             */
/*   Updated: 2022/12/17 14:32:47 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"


int	main(void)
{	
	randomChump ("Predo");
	Zombie *markin = newZombie ("Markin");
	Zombie *bizonho = newZombie ("Bizonho");
	delete markin;
	bizonho->announce();
	delete bizonho;
	return (0);
}