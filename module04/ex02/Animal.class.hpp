/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 21:10:10 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/05 17:25:14 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP
# include <iostream>

class Animal
{
	public:	
		virtual void setIdea(int index, std::string newIdea) = 0;
		virtual std::string getIdea(int index) = 0;
		Animal (void);
		Animal(std::string species);
		Animal (Animal const &instance);
		virtual ~Animal (void);
		
		Animal	&operator=(Animal const &rhs);
		
		virtual void makeSound(void)const = 0;
		std::string getType(void)const;
		
	protected:
		std::string _type;
};

std::ostream &operator<<(std::ostream &outputFile, Animal const &instance);

#endif