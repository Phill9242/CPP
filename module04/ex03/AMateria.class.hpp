/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 17:46:38 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/05 19:55:54 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AMATERIA_CLASS_HPP
# define AMATERIA_CLASS_HPP

#include <iostream>
// #include "ICharacter.class.hpp"

class ICharacter ;
class AMateria
{
	public:
		AMateria(void);
		AMateria(std::string const & type);
		AMateria(AMateria const & src );
		virtual ~AMateria(void);
		
		AMateria	&operator=(AMateria const &rhs);
		std::string const & getType() const;
		
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
		
	protected:
		std::string _type;

};

#endif