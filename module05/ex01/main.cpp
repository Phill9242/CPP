/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 14:36:16 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/13 16:55:18 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.class.hpp"
#include "Form.class.hpp"

int main(void)
{
	std::cout << "CREATE 3 BUREAUCRATS:\n" << std::endl;
	Bureaucrat Medium;
	Bureaucrat Lower ("Lower", 150);
	Bureaucrat Max ("Max", 1);

	std::cout << "TRY TO CREATE 2 FORMS:\n" << std::endl;
	try{
		Form zero ("Zero", 0, 0);
	}catch (std::exception &error){
		std::cerr << error.what() << std::endl;
	}
	try{
		Form thousand ("thousand", 1000, 1000);
	}catch (std::exception &error){
		std::cerr << error.what() << std::endl;
	}
	std::cout << "\nCREATE A FORM WITH GRADE 100:\n" << std::endl;
	Form Hundred ("Hundred", 100, 100);
	Form One ("One", 1, 1);
	std::cout << "\nTRY TO SIGN HUNDRED WITH A LOW GRADE:\n" << std::endl;
	try{
		Hundred.beSigned(Lower);
	}catch (std::exception &error){
		std::cerr << error.what() << std::endl;
	}
	std::cout << "\nTRY TO SIGN ONE WITH A LOW GRADE:\n" << std::endl;
	try{
		One.beSigned(Lower);
	}catch (std::exception &error){
		std::cerr << error.what() << std::endl;
	}
	std::cout << "\nBE SIGNED WITH A HIGHER GRADE:\n" << std::endl;
	Hundred.beSigned(Max);
	std::cout << "\nPRINT FORMS:\n" << std::endl;
	std::cout << Hundred << std::endl;
	std::cout << One << std::endl;
	std::cout << "SIGN FORM \n" << std::endl;
	Max.signForm(One);
	Lower.signForm(One);
	std::cout << "\nDESTROY FORMS \n" << std::endl;
	return (0);
}