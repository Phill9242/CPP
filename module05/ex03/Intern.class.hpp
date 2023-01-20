/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:37:54 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/10 18:37:55 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef INTERN_CLASS_HPP
#define INTERN_CLASS_HPP

#include <iostream>
#include "AForm.class.hpp"

class Intern
{
	private:

		AForm	*_createPresidentialForm(std::string target);
		AForm	*_createRobotomyForm(std::string target);
		AForm	*_createShrubberyForm(std::string target);

	public:
		Intern(void);
		~Intern(void);
		Intern(Intern const& instance);

		Intern	&operator=(Intern const &rhs);

		AForm	*makeForm(std::string name, std::string target);
};

#endif
