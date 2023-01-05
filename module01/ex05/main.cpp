/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 17:27:23 by phiolive          #+#    #+#             */
/*   Updated: 2022/12/18 18:53:51 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.class.hpp"

int main (void)
{
	Harl talk;

	talk.complain("DEBUG");
	talk.complain("INFO");
	talk.complain("WARNING");
	talk.complain("ERROR");
	talk.complain("WARNING2");
}