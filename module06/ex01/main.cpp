/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:24:31 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/14 15:40:10 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DataStruct.hpp"

int main (void)
{
	Data *mydata = new Data;
	Data *copydata;
	uintptr_t serialized_uint;

	// CREATE THE DATA;
	mydata->stringData = "Sorvete de Morango";

	// SERIALIZE TO THE UINT
	serialized_uint = serialize(mydata);

	// DESERIALIZE TO DATA TYPE
	copydata = deserialize(serialized_uint);

	// COMPARE BOTH : ORIGINAL AND COPY

	std::cout << "SERIALIZED VALUE: " << serialized_uint << std::endl;
	std::cout << "\nORIGINAL MEMORY: " << mydata << " \nSTRING: " << mydata->stringData << std::endl;
	std::cout << "\nCOPY MEMORY: "<< copydata << " \nSTRING: " << copydata->stringData << std::endl;
}