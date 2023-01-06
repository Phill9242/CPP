/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 18:03:20 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/05 19:35:35 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ICE_CLASS_HPP
# define ICE_CLASS_HPP

# include <iostream>
# include "AMateria.class.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(Ice const & src );
		~Ice(void);
		
		Ice	&operator=(Ice const &rhs);
		std::string const & getType() const;
		
		Ice* clone() const;
		void use(ICharacter& target);
};

#endif