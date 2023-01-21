/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 00:03:59 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/21 00:33:47 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

#include <iostream>
template<typename T>
void iter(T *array, unsigned int lenght, void(*f)(T &)) {
	while (lenght--)
	{
		f(*array);
		array++;
	}
};

template<typename T>
void doubleNumber (T & toDouble)
{
	toDouble *= 2;
	return ;
}

template<typename T>
void upperChar (T & toUp)
{
	toUp -= 32;
	return ;
}


#endif 