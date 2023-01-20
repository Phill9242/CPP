/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.class.cpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:17:37 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/10 15:15:25 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.class.hpp"
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <math.h>

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
	this->setTarget(target);
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RobotomyRequestForm", 72, 45)
{
	this->setTarget("No one");
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return ;
}

bool	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (AForm::execute(executor))
	{
		std::srand((unsigned int)time(NULL));
		if ((rand() % 2) != 0)
			std::cout << "Robotomization Failure" << std::endl;
		else
			std::cout << "bee bop bleeda booop bopp beedlaboop boooopppppp!!!!!! " << this->getTarget() << "  has been robotomized successfully" << std::endl;
		return (true);
	}
	return (false);
}

std::ostream &operator<<(std::ostream &outputFile, RobotomyRequestForm const &instance)
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
