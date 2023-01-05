/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 21:04:34 by phiolive          #+#    #+#             */
/*   Updated: 2022/12/17 23:07:18 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANA_CLASS_HPP_
# define _HUMANA_CLASS_HPP_

# include "Weapon.class.hpp"

class HumanA{

	public:
		HumanA (std::string name, Weapon &weapon);
		~HumanA(void);
		void	attack(void);
		
	private:
		std::string _name;
		Weapon &_weapon;
};

#endif
