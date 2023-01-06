/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 09:57:09 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/03 11:12:58 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CLASS_HPP
# define CLAPTRAP_CLASS_HPP

# define CLAPTRAP_MAX_HITPOINTS 10

# include <iostream>

class ClapTrap
{
	private:
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;
        
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const& instance);
		~ClapTrap(void);

		ClapTrap	&operator=(ClapTrap const &rhs);

		void		attack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

		void			setName(std::string name);
		void			setHitPoints(unsigned int amount);
		void			setEnergyPoints(unsigned int amount);
		void			setAttackDamage(unsigned int amount);

		std::string		getName(void)const;
		unsigned int	getHitPoints(void)const;
		unsigned int	getEnergyPoints(void)const;
		unsigned int	getAttackDamage(void)const;
};

std::ostream &operator<<(std::ostream &outputFile, ClapTrap const &i);

#endif