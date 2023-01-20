/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.class.hpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:16:11 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/09 19:07:53 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_CLASS_HPP
#define ROBOTOMYREQUESTFORM_CLASS_HPP

#include "AForm.class.hpp"

class RobotomyRequestForm : public AForm
{	
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const& instance);
		~RobotomyRequestForm(void);

		RobotomyRequestForm	&operator=(RobotomyRequestForm const &rhs);
	
		bool execute(Bureaucrat const &executor) const;
};

std::ostream &operator<<(std::ostream &outputFile, RobotomyRequestForm const &instance);

#endif
