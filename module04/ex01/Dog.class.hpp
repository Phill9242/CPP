/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 21:51:36 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/05 14:09:54 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP

# include "Animal.class.hpp"
# include <iostream>
# include "Brain.class.hpp"

class Dog : public Animal
{
	public:
		Dog (void);
		Dog (Dog const &instance);
		virtual ~Dog (void);
		
		Dog	&operator=(Dog const &rhs);
		
		void makeSound(void)const;
		std::string getType(void)const;
		std::string getIdea(int index);
		void		setIdea(int index, std::string newIdea);

	private:
		std::string _type;
		Brain *_brain;

};

std::ostream &operator<<(std::ostream &outputFile, Dog const &instance);

#endif