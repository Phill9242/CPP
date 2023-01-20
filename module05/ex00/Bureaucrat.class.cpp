/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 14:28:03 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/07 14:59:14 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(void) : _name("Mediocre"), _grade(75)
{
	std::cout << "Mediocre, the bureaucrat was hired. Grade : " << this->_grade << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << this->_name << ", the bureaucrat was hired. Grade : " << this->_grade << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const& instance) : _name(instance.getName())
{
	*this = instance;
	std::cout << "Bureaucrat " << this->_name << " duplicated" << std::endl;
	return ;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat " << this->_name << " fired" << std::endl;
	return ;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &rhs)
{	
	this->_grade = rhs.getGrade();
	return (*this);
}

std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::upgradeGrade(void)
{
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
	std::cout << this->_name << " promoted !" << std::endl ;
	return ;
}

void	Bureaucrat::downgradeGrade(void)
{
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
	std::cout << this->_name << " demoted ..." << std::endl ;
	return ;
}

std::ostream &operator<<(std::ostream &outputFile, Bureaucrat const &instance)
{
	outputFile << instance.getName() << ", bureaucrat grade " << instance.getGrade() << std::endl;
	return (outputFile);
}
