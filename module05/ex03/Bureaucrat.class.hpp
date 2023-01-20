/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 14:25:52 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/10 18:40:20 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CLASS_HPP
# define BUREAUCRAT_CLASS_HPP

# include <iostream>
class AForm;

class Bureaucrat
{

	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const& instance);
		~Bureaucrat(void);

		Bureaucrat	&operator=(Bureaucrat const &rhs);

		std::string	getName(void) const;
		int			getGrade(void) const;
		void		upgradeGrade(void);
		void		downgradeGrade(void);
		void		signForm(AForm &form);
		void		executeForm(AForm const & form);
		
	private:
		std::string const	_name;
		int					_grade;

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade too high");
			}
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade too low");
			}
	};
};

std::ostream &operator<<(std::ostream &outputFile, Bureaucrat const &instance);

#endif