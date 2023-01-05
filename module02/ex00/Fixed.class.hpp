/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 14:42:44 by phiolive          #+#    #+#             */
/*   Updated: 2022/12/22 14:47:54 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

class Fixed
{

	public:
		Fixed(void);
		Fixed(Fixed const &instance);
		~Fixed();

		Fixed	&operator=(Fixed const &rhs);

		int		getRawBits(void)const;
		void	setRawBits(int const raw);

	private:
		int					_rawBits;
		static int const	_fractionalBits;
};

#endif