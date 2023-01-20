/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 14:36:16 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/07 15:00:54 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <unistd.h>
#include "Bureaucrat.class.hpp"

int main(void)
{
	std::cout << "CREATE 3 BUREAUCRATS:\n" << std::endl;
	Bureaucrat Medium;
	Bureaucrat Lower ("Lower", 150);
	Bureaucrat Max ("Max", 1);
	usleep (3000000);

	
	std::cout << "\nATTEMPT TO CREATE A BUREAUCRAT WITH GRADE 0:" << std::endl;
	try{
		Bureaucrat zero ("Zero", 0);
	}catch (std::exception &error){
		std::cerr << error.what() << std::endl;
	}
	usleep (2100000);

	std::cout << "\nATTEMPT TO CREATE A BUREAUCRAT WITH GRADE 1000:" << std::endl;
	try{
		Bureaucrat thousand ("Thousand", 1000);
	}catch (std::exception &error){
		std::cerr << error.what() << std::endl;
	}
	usleep (2100000);
	std::cout << "\nATTEMPT TO UPGRADE MAX GRADE:" << std::endl;
	try{
		Max.upgradeGrade();
	}catch (std::exception &error){
		std::cerr << error.what() << std::endl;
	}
	usleep (2100000);
	std::cout << "\nATTEMPT TO DOWNGRADE LOWER GRADE:" << std::endl;
	try{
		Lower.downgradeGrade();
	}catch (std::exception &error){
		std::cerr << error.what() << std::endl;
	}
	usleep (2100000);
	std::cout << "\nATTEMPT TO UPGRADE MEDIOCRE GRADE:" << std::endl;
	try{
		Medium.upgradeGrade();
	}catch (std::exception &error){
		std::cerr << error.what() << std::endl;
	}
	usleep (2100000);
	std::cout << "\nBUREAUCRATS LIST :" << std::endl;
	std::cout << Medium << std::endl;
	std::cout << Max << std::endl;
	std::cout << Lower << std::endl;

	return (0);
}