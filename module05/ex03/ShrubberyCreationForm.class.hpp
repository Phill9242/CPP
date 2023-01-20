/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.class.hpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:19:24 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/09 19:08:19 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_CLASS_HPP
#define SHRUBBERYCREATIONFORM_CLASS_HPP

#include "AForm.class.hpp"

class ShrubberyCreationForm : public AForm
{	
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const& instance);
		~ShrubberyCreationForm(void);

		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &rhs);
		
		bool	execute(Bureaucrat const &executor) const;
		void	makeTree(void) const;

};

std::ostream &operator<<(std::ostream &outputFile, ShrubberyCreationForm const &instance);

#endif
