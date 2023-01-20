/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 15:22:37 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/07 17:35:31 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_CLASS_HPP
# define AFORM_CLASS_HPP
# include <iostream>
# include "Bureaucrat.class.hpp"
class Bureaucrat;

class AForm
{
	public:
		AForm(void);
		AForm(std::string name, int gradeToSign, int gradeToExecute);
		AForm(AForm const& instance);
		virtual ~AForm(void);

		AForm			&operator=(AForm const &ths);

		bool			thereWasAttemptToSign() const;
		int				getBureaucratGradeWhoSign() const;
		std::string		getBureaucratNameWhoSign() const;
		int				getExecuteGradeRequired() const;
		int				getSignGradeRequired() const;
		bool			isThisFormSigned() const ;
		std::string		getName () const;
		void			beSigned(Bureaucrat &bureaucrat);
		std::string		getTarget(void) const;
		void			setTarget(std::string target);
		virtual bool	execute(Bureaucrat const &executor) const = 0;

	private:
		std::string const	_name;
		bool				_isSigned;
		int const			_signGradeRequired;
		int const			_executeGradeRequired;
		bool				_attemptToSign;
		int					_bureaucratGradeWhoSign;
		std::string			_bureaucratNameWhoSign;
		std::string			_target;
		
	protected:
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Error at Form : Grade too High");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Error at Form : Grade too Low");
				}
		};
		class NoSignatureException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("This form is not signed !");
				}
		};
};

std::ostream &operator<<(std::ostream &outputFile, AForm &instance);

#endif