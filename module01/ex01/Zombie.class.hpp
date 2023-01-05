/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 13:38:42 by phiolive          #+#    #+#             */
/*   Updated: 2022/12/17 20:28:38 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_CLASS_HPP_
# define _ZOMBIE_CLASS_HPP_

# include <string>

class Zombie {

	public:
		Zombie(std::string name);
		Zombie();
		~Zombie(void);
		void	announce( void );
		void	set_name(std::string name);

	private:
		std::string _name;
};

Zombie* zombieHorde(int N, std::string name);

#endif