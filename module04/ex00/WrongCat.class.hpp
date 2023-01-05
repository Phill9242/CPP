/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 22:05:35 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/04 22:06:38 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_CLASS_HPP
# define WRONGCAT_CLASS_HPP

# include "WrongAnimal.class.hpp"
# include <iostream>

class WrongCat : public WrongAnimal
{
	public:
		WrongCat (void);
		WrongCat (WrongCat const &instance);
		~WrongCat (void);
		
		WrongCat	&operator=(WrongCat const &rhs);
		
		void makeSound(void)const;
		std::string getType(void)const;

	private:
		std::string _type;

};

std::ostream &operator<<(std::ostream &outputFile, WrongCat const &instance);

#endif