/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 23:39:23 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/21 00:03:10 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
T const	&max(T const &x, T const &y) {
	return (x > y ? x : y);
}

template <typename T>
T const	&min(T const &x, T const &y) {
	return (x < y ? x : y);
}

template <typename T>
void	swap(T &x, T &y) {
	T temp = x;
	x = y;
	y = temp;
}

#endif 