/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 14:42:44 by phiolive          #+#    #+#             */
/*   Updated: 2022/12/22 16:25:04 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>
class Fixed
{

	public:
		Fixed(void);
		Fixed(Fixed const &instance);
		Fixed(int const int_number);
		Fixed(float const float_number);
		~Fixed();

		Fixed	&operator=(Fixed const &rhs);
		

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		
	private:
		int					_rawBits;
		static int const	_fractionalBits;
		
};

std::ostream &operator<<(std::ostream &outputFile, Fixed const &instance);

#endif