#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "include.hpp"

class Contact{

	public:
		Contact(void);
		~Contact(void);
		bool	empty;

		std::string get_firstName(void);
		std::string get_lastName(void);
		std::string get_nickname(void);
		std::string get_phoneNumber(void);
		std::string get_darkestSecret(void);

		void set_firstName(void);
		void set_lastName(void);
		void set_nickname(void);
		void set_phoneNumber(void);
		void set_darkestSecret(void);

	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
};

#endif