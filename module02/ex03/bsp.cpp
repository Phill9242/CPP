/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 15:27:47 by phiolive          #+#    #+#             */
/*   Updated: 2022/12/23 19:28:33 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.class.hpp"

Fixed ft_calculate_total_area_of_triangle(Point const a, Point const b, Point const c)
{
	Fixed x1 = a.getXValue() * (b.getYValue() - c.getYValue());
	Fixed x2 = b.getXValue() * (c.getYValue() - a.getYValue());
	Fixed x3 = c.getXValue() * (a.getYValue() - b.getYValue());

	return (Fixed ((x1 + x2 + x3) / 2));
}

bool ft_check_edges (Point const a, Point const b, Point const point)
{
	
	Fixed slope1 = (point.getYValue() - a.getYValue()) / (point.getXValue() - a.getXValue());
	Fixed slope2 = (b.getYValue() - a.getYValue()) / (b.getXValue() - a.getXValue());
	
	if (slope1 == slope2)
		return (true);
	return (false);
}

bool ft_its_on_the_edge (Point const a, Point const b, Point const c, Point const point)
{	
	if (ft_check_edges (a, b, point))
		return (true);
	if (ft_check_edges (a, c, point))
		return (true);
	if (ft_check_edges (b, c, point))
		return (true);
	return (false);
}

bool ft_its_a_vertex (Point const a, Point const point)
{
	if (point.getXValue() == a.getXValue() && point.getYValue() == a.getYValue())
		return (true);
	return (false);
}

bool ft_check_vertices(Point const a, Point const b, Point const c, Point const point)
{
	if (ft_its_a_vertex(a, point))
		return (true);
	if (ft_its_a_vertex(b, point))
		return (true);
	if (ft_its_a_vertex(c, point))
		return (true);
	return (false);
}

bool ft_is_inside_the_triangle(Point p0, Point p1, Point p2, Point p)
{
    Fixed s = (p0.getXValue() - p2.getXValue()) * (p.getYValue() - p2.getYValue()) - (p0.getYValue() - p2.getYValue()) * (p.getXValue() - p2.getXValue());
    Fixed t = (p1.getXValue() - p0.getXValue()) * (p.getYValue() - p0.getYValue()) - (p1.getYValue() - p0.getYValue()) * (p.getXValue() - p0.getXValue());
    if ((s < 0) != (t < 0) && s != 0 && t != 0)
        return false;
    Fixed d = (p2.getXValue() - p1.getXValue()) * (p.getYValue() - p1.getYValue()) - (p2.getYValue() - p1.getYValue()) * (p.getXValue() - p1.getXValue());
    return d == 0 || (d < 0) == (s + t <= 0);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{	
	if (ft_check_vertices(a, b, c, point))
	{	
		std::cout << "It's a vertex!" << std::endl;
		return (false);
	}
	if (ft_its_on_the_edge (a, b, c, point))
	{	
		std::cout << "On edge of area" << std::endl;
		return (false);
	}
	if ((ft_is_inside_the_triangle (a, b, c, point) == false))
	{	
		std::cout << "Outside the triangle!" << std::endl;
		return (false);
	}
	std::cout << "Inside the triangle" << std::endl;
	return (true);
}

