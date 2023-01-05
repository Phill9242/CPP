/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 21:53:49 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/04 22:07:14 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_CLASS_HPP
# define WRONGANIMAL_CLASS_HPP
#include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal (void);
		WrongAnimal(std::string kingdon);
		WrongAnimal (WrongAnimal const &instance);
		~WrongAnimal (void);
		
		WrongAnimal	&operator=(WrongAnimal const &rhs);
		
		void makeSound(void)const;
		std::string getType(void)const;
		
	protected:
		std::string _type;

};

std::ostream &operator<<(std::ostream &outputFile, WrongAnimal const &instance);

#endif