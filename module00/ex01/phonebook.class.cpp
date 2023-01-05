/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:25:01 by phiolive          #+#    #+#             */
/*   Updated: 2022/12/15 14:38:43 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phonebook.class.hpp"

Phonebook::Phonebook(void)
{	
	this->_lastIntroduce = -1;
	for (int i = 0; i < 8; i++)
	{
		this->_contacts[i].empty = true;
	}
	return;
}

Phonebook::~Phonebook(void)
{
	return;
}

void    Phonebook::add(void)
{   
	if (this->_lastIntroduce == 7)
		this->_lastIntroduce = 0;
	else
		this->_lastIntroduce += 1;
	this->_contacts[this->_lastIntroduce].empty = false;
	this->_contacts[this->_lastIntroduce].set_firstName();
	this->_contacts[this->_lastIntroduce].set_lastName();
	this->_contacts[this->_lastIntroduce].set_nickname();
	this->_contacts[this->_lastIntroduce].set_phoneNumber();
	this->_contacts[this->_lastIntroduce].set_darkestSecret();
}

static std::string ft_return_first_ten_characters (std::string str)
{	
	if (str.length() <= 10)
		return (str);
	return (str.substr(0, 9) + '.');
}

static void	ft_display_contact_header ()
{
	std::cout << std::right << std::setw(10) << "\nINDEX" << " |";
	std::cout << std::right << std::setw(10) << "FIRSTNAME" << " |";
	std::cout << std::right << std::setw(10) << "LASTNAME" << " |";
	std::cout << std::right << std::setw(10) << "NICKNAME" << "\n";
}

void    Phonebook::_displayFullSingleContact(void)
{	
	std::string index_str;
	int			index_int;
	
	std::cout << "Type the index you wanna access:" << std::endl;
	std::getline (std::cin, index_str);
	index_int = (atoi (index_str.c_str())) - 1;
	if (index_int < 0  || index_int > 7 || this->_contacts[index_int].empty == true)
	{
		std::cout << "\nInvalid index !\nThis index is out of range or it's a empty contact!\n" << std::endl;
		return ;
	}
	std::cout << "\nThis your result: \n\nFIRSTNAME: " << this->_contacts[index_int].get_firstName() << "\n";
	std::cout << "LASTNAME : " << this->_contacts[index_int].get_lastName() << "\n";
	std::cout << "NICKNAME : " << this->_contacts[index_int].get_nickname() << "\n";
	std::cout << "PHONE NUMBER : " << this->_contacts[index_int].get_phoneNumber() << "\n";
	std::cout << "DARKEST SECRET : " << this->_contacts[index_int].get_darkestSecret() << "\n" << std::endl;
}

void    Phonebook::_displayAllContacts(void)
{	
	int i;

	i = 0;
	ft_display_contact_header ();
	while (i < 8 && this->_contacts[i].empty == false)
	{	
		std::cout << std::right << std::setw(10) << i + 1 << " |" ;
		std::cout << std::right << std::setw(10) << ft_return_first_ten_characters (this->_contacts[i].get_firstName()) << " |";
		std::cout << std::right << std::setw(10) << ft_return_first_ten_characters (this->_contacts[i].get_lastName()) << " |";
		std::cout << std::right << std::setw(10) << ft_return_first_ten_characters (this->_contacts[i].get_nickname()) << "\n";
		i++;
	}
	std::cout << std::endl;
}

void    Phonebook::search(void)
{   
	this->_displayAllContacts();
	this->_displayFullSingleContact();
}