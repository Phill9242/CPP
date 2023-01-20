/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.class.cpp                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:10:58 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/10 15:15:32 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.class.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentialPardonForm", 25, 5)
{
	this->setTarget("No one");
	return ;
}
PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
	this->setTarget(target);
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return ;
}

bool	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (AForm::execute(executor))
	{
		std::cout <<  this->getTarget() << " has been pardoned by Zafod Beeblebrox" <<  std::endl;
		return (true);
	}
	return (false);
}

std::ostream &operator<<(std::ostream &outputFile, PresidentialPardonForm const &instance)
{
	outputFile	<< instance.getName()
				<< " Form.\nGrade to sign: "
				<< instance.getSignGradeRequired()
				<< ".\nGrade to execute: "
				<< instance.getExecuteGradeRequired()
				<< ".\nTarget: "
				<< instance.getTarget()
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
