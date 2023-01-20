#include <iostream>
#include "Bureaucrat.class.hpp"
#include "AForm.class.hpp"

#include <iostream>
#include <cstdlib>
#include "PresidentialPardonForm.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"

int main(void)
{	
	std::srand(time(0));
	std::cout << "CREATE 3 BUREAUCRATS:\n" << std::endl;
	Bureaucrat Medium ("Medium", 72);
	Bureaucrat Lower ("Lower", 150);
	Bureaucrat Max ("Max", 1);

	std::cout << "\nCREATE 3 FORMS:\n" << std::endl;
	PresidentialPardonForm pres("Pardon");
	ShrubberyCreationForm shub("Tree");
	RobotomyRequestForm robot("robotomization");
	
	std::cout << "\nEXECUTE WITHOUT SIGN:\n" << std::endl;	
	Max.executeForm(pres);
	Lower.executeForm(shub);

	std::cout << "\nSIGN WITHOUT ENOUGH GRADE:\n" << std::endl;
	Lower.signForm(robot);
	
	std::cout << "\nSIGN ALL FORMS:\n" << std::endl;
	Max.signForm(robot);
	Max.signForm(shub);
	Max.signForm(pres);

	std::cout << "\nEXECUTE FORMS WITHOUT ENOUGH GRADE:\n" << std::endl;
	Lower.executeForm(robot);

	std::cout << "\nEXECUTE PRESIDENTIAL FORM:\n" << std::endl;
	Max.executeForm(pres);

	std::cout << "\nEXECUTE ROBOTOMY FORM:\n" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		Max.executeForm(robot);
	}

	std::cout << "\nEXECUTE SHURUBBERY FORM:\n" << std::endl;
	Max.executeForm(shub);

	std::cout << "\nDESTROY ALL FORMS AND FIRE BUREAUCRATS:\n" << std::endl;
	return (0);
}
