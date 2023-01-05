/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 13:30:13 by phiolive          #+#    #+#             */
/*   Updated: 2022/12/18 16:13:32 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"

static void	ft_check_number_of_arguments (int argc)
{
	if (argc != 4)
	{
		std::cout	<< "You need pass three (3) arguments to the programn:\n"
					<< "1: the 'filename' (with his path, if it's the case);\n"
					<< "2: the string you want replace;\n"
					<< "3: the string that will replace the previous one." << std::endl;
		exit (2);
	}
	return ;
}

static void	ft_check_filestream (char *filestream)
{
	std::ifstream file(filestream);
	if (file.is_open())
	{	
		file.close();
		return ;
	}
	file.close();
	std::cout << "Invalid filestream" << std::endl;
	exit (3);
}

static void	ft_check_first_string (char *string1)
{	
	if (!strlen(string1))
	{
		std::cout << "Nothing to be replaced" << std::endl;
		exit (4);
	}
	return ;
}

void	ft_parse_arguments(int argc, char **argv)
{
	ft_check_number_of_arguments (argc);
	ft_check_filestream (argv[1]);
	ft_check_first_string (argv[2]);
	return ;
}