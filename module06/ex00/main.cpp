/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:42:04 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/20 23:30:31 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "converter.class.hpp"
#include <cstdio>
int main (int argv, char **argc)
{

	if (argv != 2)
	{	
		std::cout << "Invalid number of arguments: You need exactly 1 (one) argument\n" << std::endl ;
		return (1);
	}
	std::string str = argc[1];
	Converter convertedArg (str);
	convertedArg.chooseDisplay();
}
