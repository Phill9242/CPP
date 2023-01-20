/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:25:54 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/13 15:24:37 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_CLASS_HPP
# define CONVERTER_CLASS_HPP

#include <iostream>

#define	POSSIBLETYPES 8
#define INVALIDTYPE 0
#define INTTYPE 1
#define CHARTYPE 2
#define FLOATTYPE 3
#define DOUBLETYPE 4
#define PSEUDOFLOATTYPE 5
#define PSEUDODOUBLETYPE 6
#define OVERFLOW 7

class Converter
{
	public:
		Converter (std::string str);
		Converter (Converter const & instance);
		~Converter (void);
		
		Converter	&operator=(Converter const &rhs);

		void		chooseDisplay (void);
		
	private:

		// POSSIBLE TYPES :
		std::string	_pureArgument;
		int			_identifier;
		int 		_intType;
		char		_charType;
		float		_floatType;
		double		_doubleType;
		std::string	_pseudoType;

		// OVERFLOW CONVERTIONS AND CONTROL

		bool	_overflowChar;
		bool	_overflowFloat;
		bool	_overflowInt;
		
		// CONVERTERS MEMBER FUNCTIONS:

		void	_findType(void);
		bool	_isAValidParameter(void);
		bool	_isAPseudoValue(void);
		void	_convertAllTypes(void);
		void	_convertInitialType(void);

		// SPECIFIC CONVERTERS OVERLOAD

		void	_convertFromASpecificType(int type);
		void	_convertFromASpecificType(char type);
		void	_convertFromASpecificType(float type);
		void	_convertFromASpecificType(double type);

		// DISPLAYS
		
		void		_displayPseudos (void);
		void		_displayOverflow (void);
		void		_displayAllInfos(void);
		void		_displayInvalidArg(void);
};	

#endif