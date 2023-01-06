/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 10:36:31 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/04 12:04:36 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_CLASS_HPP
#define DIAMONDTRAP_CLASS_HPP

#include "ScavTrap.class.hpp"
#include "FragTrap.class.hpp"
#include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const& instance);
		~DiamondTrap(void);

		DiamondTrap	&operator=(DiamondTrap const &rhs);

		std::string		getName(void)const;
		void			attack(std::string const & target);
		void    		whoAmI(void);

	private:
        std::string	_name;
};

std::ostream &operator<<(std::ostream &outputFile, DiamondTrap const &instance);

#endif