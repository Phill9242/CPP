/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 21:04:34 by phiolive          #+#    #+#             */
/*   Updated: 2022/12/17 23:03:50 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANB_CLASS_HPP_
# define _HUMANB_CLASS_HPP_

# include "Weapon.class.hpp"

class HumanB
{
	private:
		std::string	_name;
		Weapon		*_weapon;
		
	public:
		HumanB(std::string name);
		~HumanB(void);
		void		attack(void);
		void		setWeapon(Weapon &weapon);
};

#endif
