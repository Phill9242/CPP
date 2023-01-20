/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 16:02:17 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/14 16:31:28 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_CLASS_H
# define BASE_CLASS_H

# include <iostream>
# include <stdlib.h>


class Base
{
	public:
		virtual ~Base();
};

Base	*generate(void);
void	identify(Base* p);
void	identify(Base& p);

#endif