/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:00:28 by phiolive          #+#    #+#             */
/*   Updated: 2022/12/15 14:29:56 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "include.hpp"
# include "contact.class.hpp"

class Phonebook{

	public:
		Phonebook (void);
		~Phonebook (void);
		void add (void);
		void search (void);

	private:
		Contact	_contacts[8];
		int		_lastIntroduce;
		void	_displayAllContacts(void);
		void	_displayFullSingleContact(void);
};

#endif