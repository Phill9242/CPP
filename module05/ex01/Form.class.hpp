/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 15:22:37 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/13 16:52:20 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_CLASS_HPP
# define FORM_CLASS_HPP
# include <iostream>
# include "Bureaucrat.class.hpp"
class Bureaucrat;
class Form
{
	public:
		Form(void);
		Form(std::string name, int gradeToSign, int gradeToExecute);
		Form(Form const& instance);
		~Form(void);

		Form			&operator=(Form const &right_hand_side);

		bool			thereWasAttemptToSign() const;
		int				getBureaucratGradeWhoSign() const;
		std::string		getBureaucratNameWhoSign() const;
		int				getExecuteGradeRequired() const;
		int				getSignGradeRequired() const;
		bool			isThisFormSigned() const;
		std::string		getName () const;
		void			beSigned(Bureaucrat &bureaucrat);

	private:
		std::string const	_name;
		bool				_isSigned;
		int const			_signGradeRequired;
		int const			_executeGradeRequired;
		bool				_attemptToSign;
		int					_bureaucratGradeWhoSign;
		std::string			_bureaucratNameWhoSign;
		

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
};

std::ostream &operator<<(std::ostream &outputFile, Form &instance);

#endif