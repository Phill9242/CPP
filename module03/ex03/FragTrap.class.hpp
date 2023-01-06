/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 10:04:02 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/04 11:59:23 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGRAP_CLASS_HPP
#define FRAGRAP_CLASS_HPP

#include "ClapTrap.class.hpp"
#include <iostream>

class FragTrap : public virtual ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const& instance);
		~FragTrap(void);

		FragTrap	&operator=(FragTrap const &rhs);

		void	attack(std::string const & target);
		void    highFivesGuys(void);

	private:
};

std::ostream &operator<<(std::ostream &outputFile, FragTrap const &i);

#endif