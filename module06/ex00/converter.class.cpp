/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:25:58 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/13 15:26:14 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "converter.class.hpp"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <stdint.h>
#include <float.h>
#include <iomanip>

Converter::Converter (std::string str) : 	_pureArgument (str), 
											_identifier (INVALIDTYPE),
											_overflowChar(false),
											_overflowFloat(false),
											_overflowInt(false)
{	
	this->_findType();
	this->_convertInitialType();
	if (_identifier == INVALIDTYPE || _identifier == OVERFLOW)
		return;
	this->_convertAllTypes();
	return ;
}

Converter::Converter(Converter const &instance)
{
	*this = instance;
	return ;
}

Converter::~Converter (void)
{
	return ;
}

Converter  &Converter::operator=(Converter const &rhs)
{
	this->_pureArgument = rhs._pureArgument;
	this->_identifier = rhs._identifier;
	this->_intType = rhs._intType;
	this->_charType = rhs._charType;
	this->_floatType = rhs._floatType;
	this->_pseudoType = rhs._pseudoType;
	this->_overflowChar = rhs._overflowChar;
	this->_overflowFloat = rhs._overflowFloat;
	this->_overflowInt = rhs._overflowInt;
	return (*this);
}

void	Converter::_findType()
{	
	if (this->_isAPseudoValue() == true)
		return;
	if (this->_isAValidParameter() == false)
		return ;
}

bool	Converter::_isAPseudoValue(void)
{
	if (this->_pureArgument == "-inff" || this->_pureArgument == "+inff" || this->_pureArgument == "nanf")
	{	
		this->_identifier = PSEUDOFLOATTYPE;
		this->_pseudoType = this->_pureArgument.substr(0, this->_pureArgument.length() - 1);
		return (true);
	}
	if (this->_pureArgument == "-inf" || this->_pureArgument == "+inf" || this->_pureArgument == "nan")
	{	
		this->_identifier = PSEUDODOUBLETYPE;
		this->_pseudoType = this->_pureArgument;
		return (true);
	}
	return (false);
}

bool	Converter::_isAValidParameter(void)
{	
	int point = 0;
	int letters= 0;
	long unsigned int strSize = this->_pureArgument.length();

	// CHECK IF IT'S CHAR
	if (strSize == 1 && !isdigit(this->_pureArgument[0]))
	{	
		this->_identifier = CHARTYPE;
		return (true);
	}
	
	// CHECK ALL STRING PARAMETER TO CHECK EVERY CHAR INSIDE IT
	for (long unsigned int i = 0; i < strSize; i++)
	{
		if (isdigit(this->_pureArgument[i]))
			continue ;
		if (this->_pureArgument[i] == '.')
		{
			point++;
			continue ;
		}
		if (this->_pureArgument[i] == '-' && i == 0)
			continue;
		if (this->_pureArgument[i] == 'f' && i == strSize - 1)
			continue;
		else
			letters ++;
	}
	if (letters || point > 1 )
		return (false);
	this->_identifier = INTTYPE;
	if	(point)
		this->_identifier = DOUBLETYPE;
	if	(this->_pureArgument[strSize - 1] == 'f')
		this->_identifier = FLOATTYPE;
	return (true);
}

void	Converter::_convertInitialType(void)
{	
	switch (this->_identifier)
	{
		case INTTYPE:
			long int holder;
			holder	= strtol (this->_pureArgument.c_str(), NULL, 10);
			if (holder > INT32_MAX || holder < INT32_MIN || errno )
			{
				this->_identifier = OVERFLOW;
				return ;
			}
			this->_intType = static_cast <int> (holder);
			return ;
		case CHARTYPE:	
			this->_charType = this->_pureArgument[0];
			return ;
		case FLOATTYPE:
			this->_floatType = strtof (this->_pureArgument.c_str(), NULL);
			if (errno)
			{	
				this->_identifier = OVERFLOW;
				return ;
			}
			return ;
		case DOUBLETYPE:
			this->_doubleType = strtod (this->_pureArgument.c_str(), NULL);
			if (errno)
			{	
				this->_identifier = OVERFLOW;
				return ;
			}
			return ;
		default:
			return ;
	}
	return ;
}

void	Converter::_convertAllTypes(void)
{	
	switch (this->_identifier)
	{
		case INTTYPE :
			this->_convertFromASpecificType (this->_intType);
			return;
		case CHARTYPE :	
			this->_convertFromASpecificType (this->_charType);
			return;
		case FLOATTYPE :
			this->_convertFromASpecificType (this->_floatType);
			return;
		case DOUBLETYPE :
			this->_convertFromASpecificType (this->_doubleType);
			return;
		default:
			return ;
	}
	return ;
}

void	Converter::_convertFromASpecificType(int type)
{	
	if (type < 0 || type > 255)
		this->_overflowChar = true;
	this->_charType = static_cast <char> (type);
	this->_floatType = static_cast <float> (type);
	this->_doubleType = static_cast <double> (type);
	return ;
}

void	Converter::_convertFromASpecificType(double type)
{	
	if (type < 0 || type > 255)
		this->_overflowChar = true;
	if (type < INT32_MIN || type > INT32_MAX)
		this->_overflowInt = true;
	if (type < -FLT_MIN || type > FLT_MAX)
		this->_overflowFloat = true;
	this->_intType = static_cast <int> (type);
	this->_charType = static_cast <char> (type);
	this->_floatType = static_cast <float> (type);
	return ;
}

void	Converter::_convertFromASpecificType(char type)
{	
	this->_intType = static_cast <int> (type);
	this->_floatType = static_cast <float> (type);
	this->_doubleType = static_cast <double> (type);
	return ;
}

void	Converter::_convertFromASpecificType(float type)
{	
	if (type < 0 || type > 255)
		this->_overflowChar = true;
	this->_charType = static_cast <char> (type);
	if (type < INT32_MIN || type > INT32_MAX)
		this->_overflowInt = true;
	this->_intType = static_cast <int> (type);
	this->_doubleType = static_cast <double> (type);
	return ;
}

void	Converter::chooseDisplay(void)
{
	switch (this->_identifier)
	{
		case INVALIDTYPE:
			this->_displayInvalidArg();
			return;
		case OVERFLOW:
			this->_displayOverflow();
			return;
		case PSEUDODOUBLETYPE :
			this->_displayPseudos();
			return;
		case PSEUDOFLOATTYPE :
			this->_displayPseudos();
			return;
		default :
			this->_displayAllInfos();
			return;
	}
	return ;
}

void	Converter::_displayInvalidArg(void)
{
	std::cout	<< "Invalid argument used. \n"
				<< "You need to use one of the follow arguments: \n"
				<< "Char : Just one character that's not a number \n"
				<< "Int: A number between -2147483648 and 2147483647\n"
				<< "Double: A number between 2.2250738585072014E-308 and 1.79769313486231570e+308d with a dot  (.)\n"
				<< "Float: A number between 1.175494351E-38 and 3.402823466E+38 with a letter \"f\" at the end as a identifier\n" << std::endl;
}

void	Converter::_displayOverflow(void)
{
	std::cout	<< "Invalid number used. \n"
				<< "Remember the limits of each type: \n"
				<< "Int: A number between -2147483648 and 2147483647\n"
				<< "Float: A number between 1.175494351E-38 and 3.402823466E+38\n" 
				<< "Double: A number between 2.2250738585072014E-308 and 1.79769313486231570e+308d\n" << std::endl;
}

void	Converter::_displayPseudos(void)
{
	std::cout	<< "char: impossible \n"
				<< "int: impossible\n"
				<< "float: " << this->_pseudoType << "f\n"
				<< "double: " << this->_pseudoType << std::endl;
	return ;
}
void	Converter::_displayAllInfos(void)
{	
	// CHECK CHAR PRINT
	std::cout << std::fixed;
	if (this->_overflowChar == true)
		std::cout	<< "char: overflow (Min value: 0 / Max value: 255)" << std::endl;
	else if (isprint(this->_charType))
		std::cout	<< "char: " << this->_charType << std::endl;
	else	
		std::cout	<< "char: Non displayable" << std::endl;

	// CHECK INT PRINT
	if (this->_overflowInt == true)
		std::cout	<< "int: overflow (Min value: -2147483648 / Max value: 2147483647)" << std::endl;
	else 
		std::cout	<< "int: " << this->_intType << std::endl;

	// CHECK FLOAT PRINT
	if (this->_overflowFloat == true)
		std::cout << "float: overflow (Min value: 1.175494351E-38 / Max value: 3.402823466E+38)" << std::endl;
	else 
		std::cout << std::setprecision(1) << "float: " << this->_floatType << "f" <<std::endl;

	// PRINT DOUBLE
	std::cout << std::setprecision(1) << "double: " << this->_doubleType << std::endl;

	return ;
}