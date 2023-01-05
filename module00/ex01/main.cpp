/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:50:18 by phiolive          #+#    #+#             */
/*   Updated: 2022/12/15 14:34:10 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.hpp"
#include "phonebook.class.hpp"

static void ft_display_basic_instructions(void)
{	
	std::cout << std::endl;
	std::cout << "Invalid command ! Please, use one of the following commands:" << std::endl;
	std::cout << "ADD" << std::endl;
	std::cout << "SEARCH" << std::endl;
	std::cout << "EXIT" << std::endl;
	std::cout << "## Don't forget to capitalize your commands ! ##" 
	<< std::endl << std::endl << std::endl;
	return ;
}

static void	ft_check_command(std::string command, Phonebook *phonebook)
{
	if (command == "EXIT")
		exit(1);
	else if 	(command == "ADD")
		phonebook->add ();
	else if 	(command == "SEARCH")
		phonebook->search ();
	else
		ft_display_basic_instructions ();
}


static std::string ft_read_command_from_terminal (void)
{	
	std::string	command;
	std::cout << "Please, insert a command: " << std::endl;
	std::getline (std::cin, command);
	return (command);
}

int	main (void)
{
	std::string	command;
	Phonebook phonebook;

	while (true)
	{	
		command = ft_read_command_from_terminal ();
		ft_check_command(command, &phonebook);
	}
	return (0);
}
