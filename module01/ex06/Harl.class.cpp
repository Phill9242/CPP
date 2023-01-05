/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 17:27:18 by phiolive          #+#    #+#             */
/*   Updated: 2022/12/18 18:52:33 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.class.hpp"
#include <iostream>

Harl::Harl (void)
{
	return ;
}

Harl::~Harl (void)
{
	return ;
}

void	Harl::debug (void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
	return ;
}

void	Harl::info (void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	return ;
}
void	Harl::warning (void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	return ;
}

void	Harl::error (void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	return ;
}

void	Harl::complain (std::string level)
{	
	int		i;

	i = 0;
	void	(Harl::*complain_list[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	std::string messages[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while ( i < 4 && messages [i] != level)
		i++;
	if (i == 4)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	switch (i)
	{
		case 0:
			(this->*complain_list[i])();
			i++;
			// fall through
		case 1:
			(this->*complain_list[i])();
			i++;
			// fall through
		case 2:
			(this->*complain_list[i])();
			i++;
			// fall through
		case 3:
			(this->*complain_list[i])();
			i++;
			// fall through
		default:
			return;
	}
	return ;
}