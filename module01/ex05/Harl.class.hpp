/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 17:27:21 by phiolive          #+#    #+#             */
/*   Updated: 2022/12/18 17:35:32 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HARL_CLASS_HPP_
# define _HARL_CLASS_HPP_

# include <string>
class Harl
{
	public:
		Harl(void);
		~Harl(void);
		void	complain (std::string level);
		
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

#endif