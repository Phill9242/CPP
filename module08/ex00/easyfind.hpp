/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 18:12:58 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/24 18:17:33 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASEFIND_HPP

#include <iostream>
#include <algorithm>

class NotFoundException : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return ("Couldn't find the number");
		}
};

template<typename T>
typename T::iterator easyfind(T &holder, int object)
{
	typename T::iterator iterator = std::find(holder.begin(), holder.end(), object);
	if (iterator == holder.end())
		throw NotFoundException();
	return (iterator);
}

#endif