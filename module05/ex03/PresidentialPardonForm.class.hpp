/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.class.hpp                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:10:55 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/09 19:07:15 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_CLASS_HPP
#define PRESIDENTIALPARDONFORM_CLASS_HPP

#include "AForm.class.hpp"

class PresidentialPardonForm : public AForm
{	
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const& instance);
		~PresidentialPardonForm(void);

		PresidentialPardonForm	&operator=(PresidentialPardonForm const &rhs);
	
		bool	execute(Bureaucrat const &executor) const;
};

std::ostream &operator<<(std::ostream &outputFile, PresidentialPardonForm const &instance);


#endif
