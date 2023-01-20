/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:42:04 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/13 16:00:42 by phiolive         ###   ########.fr       */
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


    float a = 2;
	  int i;
    int p;

    p = static_cast<int> (a);
    for (i = sizeof(int) * 8 - 1; i >= 0; i--)
    {   
        printf("%d", (p) >> i & 1); 
    }   
}
