/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:38:01 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/10 18:38:19 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Intern.class.hpp"
#include "PresidentialPardonForm.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"


Intern::Intern(void)
{
	std::cout << "New intern hired" << std::endl;
}

Intern::~Intern(void)
{
	std::cout << "intern mess up and got fired" << std::endl;
}

Intern::Intern(Intern const& instance)
{
	*this = instance;
	std::cout << "intern has a twin" << std::endl;
}

Intern	&Intern::operator=(Intern const &rhs)
{
	(void)rhs;
	return (*this);
}

AForm	*Intern::makeForm(std::string name, std::string target)
{
	std::string formsList[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	
	AForm	*(Intern::*createForm[3])(std::string target) = {	&Intern::_createShrubberyForm,
																&Intern::_createRobotomyForm,
																&Intern::_createPresidentialForm};
	
	for(int i = 0; i < 3; i++)
	{
		if(name == formsList[i])
		{
			std::cout << "Intern creates: " << name << std::endl;
			return ((this->*createForm[i])(target));
		}
	}
	std::cout << name << " : intern does not recognize this form." << std::endl;
	return (NULL);
}

AForm *Intern::_createPresidentialForm(std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm *Intern::_createRobotomyForm(std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm *Intern::_createShrubberyForm(std::string target)
{
	return (new ShrubberyCreationForm(target));
}
