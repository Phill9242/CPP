/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 11:12:28 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/04 12:00:23 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CLASS_HPP
#define SCAVTRAP_CLASS_HPP

#include "ClapTrap.class.hpp"
#include <iostream>

class ScavTrap : public virtual ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const& instance);
		~ScavTrap(void);

		ScavTrap	&operator=(ScavTrap const &rhs);

		void	attack(std::string const & target);
		void	guardGate(void);

	private:
};

std::ostream &operator<<(std::ostream &outputFile, ScavTrap const &i);

#endif
