/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 21:23:38 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/04 22:22:35 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP

# include "Animal.class.hpp"
# include <iostream>

class Cat : public Animal
{
	public:
		Cat (void);
		Cat (Cat const &instance);
		~Cat (void);
		
		Cat	&operator=(Cat const &rhs);
		
		virtual void makeSound(void)const;
		std::string getType(void)const;

	private:
		std::string _type;

};

std::ostream &operator<<(std::ostream &outputFile, Cat const &instance);

#endif