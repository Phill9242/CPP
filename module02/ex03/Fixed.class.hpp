/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 14:42:44 by phiolive          #+#    #+#             */
/*   Updated: 2022/12/23 15:08:40 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>
class Fixed
{

	public:
		// constructors && destructors
		Fixed(void);
		Fixed(Fixed const &instance);
		Fixed(int const number);
		Fixed(float const number);
		~Fixed();

		// comparison
		bool	operator>(Fixed const &rhs) const;
		bool	operator<(Fixed const &rhs)const;
		bool	operator>=(Fixed const &rhs)const;
		bool	operator<=(Fixed const &rhs)const;
		bool	operator==(Fixed const &rhs)const;
		bool	operator!=(Fixed const &rhs)const;
		
		// arithmetic
		Fixed	&operator=(Fixed const &rhs);
		Fixed	operator+(Fixed const &rhs);
		Fixed	operator-(Fixed const &rhs);
		Fixed	operator/(Fixed const &rhs);
		Fixed	operator*(Fixed const &rhs);
		Fixed	&operator++(void);
		Fixed	&operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);
		
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;
		static const Fixed	&min(Fixed const &value1, Fixed const &value2);
		static const Fixed	&max(Fixed const &value1, Fixed const &value2);
		static Fixed		&min(Fixed &value1, Fixed &value2);
		static Fixed		&max(Fixed &value1, Fixed &value2);
		
	private:
		int					_rawBits;
		static int const	_fractionalBits;
		
};

std::ostream &operator<<(std::ostream &outputFile, Fixed const &instance);

#endif