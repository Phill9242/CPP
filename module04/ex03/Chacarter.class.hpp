/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Chacarter.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 14:20:26 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/06 14:34:58 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CLASS_HPP
# define CHARACTER_CLASS_HPP

#include <iostream>
#include "ICharacter.class.hpp"
#include "AMateria.class.hpp"

class Character
{

	public:
		std::string const & getName() const;
		void equip(AMateria* materia);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

	private:
		AMateria *_slots[4];
}


#endif