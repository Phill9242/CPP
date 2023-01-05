/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 13:00:23 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/05 13:58:06 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.class.hpp"
#include <iostream>

std::string	Brain::_allIdeas[4] = {"bite", "run", "eat", "play"};

Brain::Brain(void)
{
	for(int i = 0; i < 100; i++)
		this->myIdeas[i] = Brain::_allIdeas[i % 4];
	std::cout << "Brain : what should we do next?" << std::endl;
	return;
}

Brain::Brain(Brain const& instance)
{
	*this = instance;
	std::cout << "A new brain it's up to you" << std::endl;
	return ;
}

Brain::~Brain(void)
{
	std::cout << "Brain death" << std::endl;
	return;
}

void Brain::operator=(Brain const &rhs)
{
	for(int i = 0; i < 100; i++)
		this->myIdeas[i] = rhs.myIdeas[i];
	return ;
}
