/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 20:49:20 by phiolive          #+#    #+#             */
/*   Updated: 2022/12/17 22:56:10 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WEAPON_CLASS_HPP_
# define _WEAPON_CLASS_HPP_
#include <string>

class Weapon{

	public:
		Weapon(std::string type);
		Weapon(void);
		~Weapon(void);
		std::string const	&getType(void);
		void				setType (std::string type);
		
	private:
		std::string _type;
};

#endif
