/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 21:23:20 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/05 14:24:36 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.class.hpp"
# include "Cat.class.hpp"
# include "Dog.class.hpp"
# include "WrongAnimal.class.hpp"
# include "WrongCat.class.hpp"
#include <unistd.h>

int main()
{	
	std::cout << "Animal 1: Generic Animal instance" << std::endl;
	const Animal* generic = new Animal();
	std::cout << std::endl;
	usleep (1200000);
	std::cout << "Animal 2 :Cat instance" << std::endl;
	const Animal* cat = new Cat();
	std::cout << std::endl;
	usleep (1200000);
	std::cout << "Animal 3 :Dog instance" << std::endl;
	const Animal* dog = new Dog();
	std::cout << std::endl;
	usleep (1200000);
	std::cout << "Animal 1 type" << std::endl;
	std::cout << generic->getType() << " " << std::endl;
	std::cout << std::endl;
	usleep (1200000);
	std::cout << "Animal 2 type" << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << std::endl;
	usleep (1200000);
	std::cout << "Animal 3 type" << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << std::endl;
	usleep (1200000);
	std::cout << "Animal 1 sound" << std::endl;
	generic->makeSound();
	std::cout << std::endl;
	usleep (1200000);
	std::cout << "Animal 2 sound" << std::endl;
	cat->makeSound();
	std::cout << std::endl;
	usleep (1200000);
	std::cout << "Animal 3 sound" << std::endl;
	dog->makeSound();
	std::cout << std::endl;
	usleep (1200000);
	std::cout << "Animal 1 delete" << std::endl;
	delete generic;
	std::cout << std::endl;
	usleep (1200000);
	std::cout << "Animal 2 delete" << std::endl;
	delete cat;
	std::cout << std::endl;
	usleep (1200000);
	std::cout << "Animal 3 delete" << std::endl;
	delete dog;
	std::cout << std::endl;
	std::cout << "______ WRONG ANIMALS TEST ______\n" << std::endl;
	usleep (1200000);
	const WrongAnimal* genericWrong = new WrongAnimal();
	std::cout << std::endl;
	usleep (1200000);
	const WrongAnimal* catWrong = new WrongCat();
	std::cout << std::endl;
	usleep (1200000);
	const WrongCat* catWronginst = new WrongCat();
	std::cout << std::endl;
	usleep (1200000);
	std::cout << "Wrong Animal sound" << std::endl;
	genericWrong->makeSound();
	std::cout << std::endl;
	usleep (1200000);
	std::cout << "Wrong Cat sound" << std::endl;
	catWrong->makeSound();
	std::cout << std::endl;
	usleep (1200000);
	std::cout << "Wrong Cat sound (instance)" << std::endl;
	catWronginst->makeSound();
	std::cout << std::endl;
	usleep (1200000);
	std::cout << "Wrong Animal type" << std::endl;
	std::cout << genericWrong->getType() << " " << std::endl;
	std::cout << std::endl;
	usleep (1200000);
	std::cout << "Wrong Cat type" << std::endl;
	std::cout << catWrong->getType() << " " << std::endl;
	std::cout << std::endl;
	usleep (1200000);
	std::cout << "Wrong Cat instance type" << std::endl;
	std::cout << catWronginst->getType() << " " << std::endl;
	std::cout << std::endl;
	usleep (1200000);
	std::cout << "Wrong Animal delete" << std::endl;
	delete genericWrong;
	std::cout << std::endl;
	usleep (1200000);
	std::cout << "Wrong Cat delete" << std::endl;
	delete catWrong;
	std::cout << std::endl;
	usleep (1200000);
	std::cout << "Wrong Cat delete" << std::endl;
	delete catWronginst;
}