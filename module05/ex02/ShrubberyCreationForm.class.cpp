/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.class.cpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:20:31 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/14 16:19:29 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.class.hpp"
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
	this->setTarget(target);
	std::cout << *this << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationForm", 145, 137)
{
	this->setTarget("No one");
	std::cout << *this << std::endl;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return ;
}

void	ShrubberyCreationForm::makeTree(void)const
{
	std::string draw;
	std::string name = this->getTarget() + "_shrubbery";
	std::ofstream outputFile(name.c_str());
	int max_size = 20;
	if(outputFile)
	{	
		for (int tree_size = 0; tree_size < max_size; tree_size++)
		{	
			if (tree_size % 2 == 0)
			{
				int spaces = (max_size - tree_size) / 2;
				while (spaces--)
					draw+= " ";
				for (int i = 0; i <= tree_size; i++)
				{
					draw+= "O";
				}
				outputFile << draw << std::endl;
				draw = "";
			}
		}
		std::cout  << name << " generated" << std::endl;
	}
	else
		std::cout  << "Error creating file" << std::endl;
	outputFile.close();
}

bool		ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (AForm::execute(executor))
	{
		this->makeTree();
		return (true);
	}
	return (false);
}

std::ostream &operator<<(std::ostream &outputFile, ShrubberyCreationForm const &instance)
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
