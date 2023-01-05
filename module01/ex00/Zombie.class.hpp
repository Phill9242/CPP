/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 13:38:42 by phiolive          #+#    #+#             */
/*   Updated: 2022/12/17 14:05:54 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_CLASS_HPP_
# define _ZOMBIE_CLASS_HPP_

# include <string>

class Zombie {

	public:
		Zombie(std::string name);
		~Zombie(void);
		void		announce( void );

	private:
		std::string _name;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif