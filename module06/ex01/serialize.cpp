/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:17:55 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/14 15:22:27 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DataStruct.hpp"

uintptr_t serialize(Data* ptr) 
{
	return (reinterpret_cast<uintptr_t>(ptr));
}