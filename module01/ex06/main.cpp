/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 17:27:23 by phiolive          #+#    #+#             */
/*   Updated: 2022/12/18 18:53:18 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.class.hpp"
#include <iostream>

int main (int argc, char **argv)
{
	Harl talk;
	if (argc != 2)
	{
		std::cout	<< "Please, use one (and just one) of the following levels:\n"
					<< "DEBUG\n"
					<< "INFO\n"
					<< "WARNING\n"
					<< "ERROR" << std::endl;
		return (1);
	}
	talk.complain(std::string (argv[1]));

}
