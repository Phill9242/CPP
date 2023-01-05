/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 15:04:33 by phiolive          #+#    #+#             */
/*   Updated: 2022/12/23 19:14:56 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_CLASS_HPP
# define POINT_CLASS_HPP
# include "Fixed.class.hpp"

class Point
{
	public:
		Point (void);
		Point (float x, float y);
		Point (Point const &instance);
		~Point (void);
		Point	&operator=(Point const &rhs);

		Fixed	getXValue (void) const;
		Fixed	getYValue (void) const;

	private:
		Fixed _x;
		Fixed _y;
};

#endif