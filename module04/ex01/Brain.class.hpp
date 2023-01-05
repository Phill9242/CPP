/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 13:00:25 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/05 13:58:08 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CLASS_HPP
# define BRAIN_CLASS_HPP
# include <iostream>

class Brain
{
	public:
		Brain (void);
		Brain (Brain const &instance);
		~Brain (void);
		
		void	operator=(Brain const &rhs);
		std::string 		myIdeas[100];
		
	private:
		static std::string	_allIdeas[4];
};

#endif