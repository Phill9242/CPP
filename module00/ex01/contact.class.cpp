# include "contact.class.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void Contact::set_firstName(void)
{	
	std::string	str;
	std::cout << "Firstname:\n";
	std::getline(std::cin, str);
	if (str == "")
		this->set_firstName();
	else
		this->_firstName = str;
}

void Contact::set_lastName(void)
{	
	std::string	str;
	std::cout << "Lastname:\n";
	std::getline(std::cin, str);
	if (str == "")
		this->set_lastName();
	else
		this->_lastName = str;
}
void Contact::set_phoneNumber(void)
{	
	std::string	str;
	std::cout << "Phone Number:\n";
	std::getline(std::cin, str);
	if (str == "")
		this->set_phoneNumber();
	else
		this->_phoneNumber = str;
}

void Contact::set_nickname(void)
{	
	std::string	str;
	std::cout << "Nickname:\n";
	std::getline(std::cin, str);
	if (str == "")
		this->set_nickname();
	else
		this->_nickname = str;
}

void Contact::set_darkestSecret(void)
{	
	std::string	str;
	std::cout << "Darkest Secret:\n";
	std::getline(std::cin, str);
	if (str == "")
		this->set_darkestSecret();
	else
		this->_darkestSecret = str;
}

std::string Contact::get_firstName(void)
{
	return (this->_firstName);
}

std::string Contact::get_lastName(void)
{
	return (this->_lastName);
}

std::string Contact::get_nickname(void)
{
	return (this->_nickname);
}

std::string Contact::get_darkestSecret(void)
{
	return (this->_darkestSecret);
}

std::string Contact::get_phoneNumber(void)
{
	return (this->_phoneNumber);
}