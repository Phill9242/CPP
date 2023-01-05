/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 21:51:36 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/04 22:23:00 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP

# include "Animal.class.hpp"
# include <iostream>

class Dog : public Animal
{
	public:
		Dog (void);
		Dog (Dog const &instance);
		virtual ~Dog (void);
		
		Dog	&operator=(Dog const &rhs);
		
		void makeSound(void)const;
		std::string getType(void)const;

	private:
		std::string _type;

};

std::ostream &operator<<(std::ostream &outputFile, Dog const &instance);

#endif