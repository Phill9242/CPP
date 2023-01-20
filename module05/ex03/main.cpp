#include <iostream>
#include "Bureaucrat.class.hpp"
#include "AForm.class.hpp"
#include "PresidentialPardonForm.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"
#include "Intern.class.hpp"


int main(void)
{	
	std::cout << "HIRE A NEW INTERN: " << std::endl;
	Intern intern;
	
	std::cout << "\nLET'S SEE IF THE INTERN CAN MAKE THINGS RIGHT: " << std::endl;
	std::cout << "FIRST, HIRE A NEW BUREUCRAT: " << std::endl;
	Bureaucrat max("Max", 1);

	std::cout << "\nGENERATE A NEW PRESIDENTIAL PARDON: " << std::endl;
	AForm *formPresidential = intern.makeForm("presidential pardon", "Jaiminho");

	std::cout << "SIGN AND EXECUTE THE PRESIDENTIAL FORM: " << std::endl;
	max.signForm(*formPresidential);
	max.executeForm(*formPresidential);

	std::cout << "DESTROY THE PRESIDENTIAL FORM: " << std::endl;
	delete formPresidential;

	std::cout << "GENERATE A NEW SHRUBBERY: " << std::endl;
	AForm *formShrubbery = intern.makeForm("shrubbery creation", "Apple Tree");

	std::cout << "SIGN AND EXECUTE THE SHRUBBERY FORM: " << std::endl;
	max.signForm(*formShrubbery);
	max.executeForm(*formShrubbery);

	std::cout << "DESTROY THE SHRUBBERY FORM: " << std::endl;
	delete formShrubbery;

	std::cout << "GENERATE A NEW ROBOTOMY: " << std::endl;
	AForm *formRobotomy = intern.makeForm("robotomy request", "Megaman X");

	std::cout << "SIGN AND EXECUTE THE ROBOTOMY FORM: " << std::endl;
	max.signForm(*formRobotomy);
	max.executeForm(*formRobotomy);

	std::cout << "DESTROY THE ROBOTOMY FORM: " << std::endl;
	delete formRobotomy;

	std::cout << "GENERATE A NEW LIBRARY CARD: " << std::endl;
	AForm *libraryCard = intern.makeForm("library card", "Seu Zé");
	(void) libraryCard;
	
	std::cout << "\nSO, YOU COULDN'T DO IT... ? YOU MADE US LOSE OUR JOBS !\n" << std::endl;
	
	return (0);
}


