/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 20:33:44 by phiolive          #+#    #+#             */
/*   Updated: 2022/12/17 20:46:24 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main (void)
{
	std::string stringVAR = "HI THIS IS BRAIN";
	std::string *stringPTR = &stringVAR;
	std::string &stringREF = stringVAR;

	std::cout << "\nINITIAL VALUES:\n\n";
	std::cout << "          ADRESS OF STRING:" << &stringVAR<< "\n";
	std::cout << "  ADRESS OF STRING POINTER:" << stringPTR << "\n";
	std::cout << "ADRESS OF STRING REFERENCE:" << &stringREF << std::endl;
	std::cout << "          VALUE OF STRING:" << stringVAR<< "\n";
	std::cout << "  VALUE OF STRING POINTER:" << *stringPTR << "\n";
	std::cout << "VALUE OF STRING REFERENCE:" << stringREF << std::endl;

	stringVAR = "HI THIS IS ZOMBIE";

	std::cout << "\nAFTER CHANGE stringVAR value:\n\n";
	std::cout << "          ADRESS OF STRING:" << &stringVAR<< "\n";
	std::cout << "  ADRESS OF STRING POINTER:" << stringPTR << "\n";
	std::cout << "ADRESS OF STRING REFERENCE:" << &stringREF << std::endl;
	std::cout << "          VALUE OF STRING:" << stringVAR<< "\n";
	std::cout << "  VALUE OF STRING POINTER:" << *stringPTR << "\n";
	std::cout << "VALUE OF STRING REFERENCE:" << stringREF << std::endl;

}