/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 15:22:33 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/13 16:59:32 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.class.hpp"
#include "Bureaucrat.class.hpp"
#include <iostream>

Form::Form(void) :	_name("Standard"), 
					_isSigned(false), 
					_signGradeRequired(75),
					_executeGradeRequired(75),
					_attemptToSign (false)
{
	std::cout << "Form generated. \n" << *this << std::endl;
	return ;
}

Form::Form(std::string name, int gradeToSign, int gradeToexecute) :		_name(name), 
																		_isSigned(false), 
																		_signGradeRequired(gradeToSign),
																		_executeGradeRequired(gradeToexecute),
																		_attemptToSign (false)
{
	if (this->_signGradeRequired < 1 || this->_executeGradeRequired < 1 )
		throw Form::GradeTooHighException();
	if (this->_signGradeRequired > 150 || this->_executeGradeRequired > 150 )
		throw Form::GradeTooLowException();
	std::cout << "Form generated. \n" << *this << std::endl;
	return ;
}

Form::Form(Form const & instance) : _name(instance.getName()),
									_signGradeRequired(instance._signGradeRequired),
									_executeGradeRequired(instance._executeGradeRequired)
{	
	*this = instance;
	std::cout << "Form copied: " << *this << std::endl;
	return ;
}

Form::~Form(void)
{
	std::cout << "Form destroyed: " << *this << std::endl;
	return ;
}

Form	&Form::operator=(Form const & rhs)
{	
	this->_attemptToSign = rhs.thereWasAttemptToSign();
	this->_isSigned = rhs.isThisFormSigned();
	if (this->_attemptToSign == true)
	{
		this->_bureaucratGradeWhoSign = rhs._bureaucratGradeWhoSign;
		this->_bureaucratNameWhoSign = rhs._bureaucratNameWhoSign;
	}
	(void)rhs;
	return (*this);
}

std::string	Form::getName(void) const
{
	return (this->_name);
}

bool Form::thereWasAttemptToSign(void) const
{
	return (this->_attemptToSign);
}
int	Form::getBureaucratGradeWhoSign(void) const
{
	return (this->_bureaucratGradeWhoSign);
}

std::string Form::getBureaucratNameWhoSign(void) const
{
	return (this->_bureaucratNameWhoSign);
}
		
int	Form::getSignGradeRequired(void) const
{
	return (this->_signGradeRequired);
}

int	Form::getExecuteGradeRequired(void) const
{
	return (this->_executeGradeRequired);
}

bool Form::isThisFormSigned(void) const
{
	return (this->_isSigned);
}

void Form::beSigned(Bureaucrat &bureaucrat)
{	
	this->_attemptToSign = true;
	if (this->_isSigned == false || bureaucrat.getGrade() <= this->getSignGradeRequired())
	{
		this->_bureaucratGradeWhoSign = bureaucrat.getGrade();
		this->_bureaucratNameWhoSign = bureaucrat.getName();
	}
	if (bureaucrat.getGrade() > this->getSignGradeRequired())
		throw Form::GradeTooLowException();
	else
	{
		this->_isSigned = true;
		std::cout << "form " << this->getName() << " signed by: " << bureaucrat.getName() << std::endl;
	}
	return ;
}

std::ostream &operator<<(std::ostream &outputFile, Form &instance)
{
	outputFile	<< instance.getName()
				<< " Form.\nGrade to sign: "
				<< instance.getSignGradeRequired()
				<< ".\nGrade to execute: "
				<< instance.getExecuteGradeRequired()
				<< "\nIs signed ? ";
	if (instance.isThisFormSigned())
		outputFile	<< "Yes. Signed by: "
					<< instance.getBureaucratNameWhoSign() 
					<< " with a Grade of "
					<< instance.getBureaucratGradeWhoSign()
					<< std::endl;
	else
	{	
		outputFile << "No. " ;
		if (instance.thereWasAttemptToSign())
		{
			outputFile	<< "But there was an attempt to sign by: "
						<< instance.getBureaucratNameWhoSign() 
						<< " with a Grade of "
						<< instance.getBureaucratGradeWhoSign();
		}	
		outputFile << std::endl;
	}
	return (outputFile);
}
