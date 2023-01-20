/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 21:23:20 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/10 18:43:17 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.class.hpp"
# include "Cat.class.hpp"
# include "Dog.class.hpp"

#include <unistd.h>
#include <iostream>
#include <cstdlib>
int main()
{	
	// Animal *animalgeneric = new Animal;
	// delete animalgeneric;
	std::srand(time(0));
	Animal *animalArray[6];

	for (int i = 0; i < 6; i++)
	{
		if (i % 2 == 0)
			animalArray[i] = new Cat;
		else
			animalArray[i] = new Dog;
		std::cout << std::endl;
	}
	for (int i = 0; i < 6; i++)
	{
		std::cout	<< animalArray[i]->getType() 
					<< " wanna "  
					<< animalArray[i]->getIdea(rand() % 100) 
					<< std::endl;
	}
	std::cout << "\n\nMemory clone test:" << std::endl;
	Animal *clonecat (animalArray[0]);
	std::cout << "Cloned cat: " <<&clonecat << std::endl;
	std::cout << "Original Cat: " <<&animalArray[0] << std::endl;

	Cat cat;
	Cat cat2 (cat);
	// std::cout << "Cloned dog : "<< &clonedog << std::endl;
	std::cout << "Original dog: " <<&animalArray[1] << std::endl;
	std::cout << "\n\nDeletes:" << std::endl;
	// for (int i = 0; i < 6; i++)
	// 	delete animalArray[i];
	std::cout << &cat.getIdea(1) << std::endl;
	std::cout << &cat2.getIdea(1) << std::endl;
}	