/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 18:17:40 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/05 18:28:32 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_CLASS_HPP
# define CURE_CLASS_HPP

# include <iostream>
# include "AMateria.class.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(Cure const & src );
		~Cure(void);
		
		Cure	&operator=(Cure const &rhs);
		std::string const & getType() const;
		
		Cure* clone() const;
		void use(ICharacter& target);
		
	private:
		std::string _type;
};

#endif