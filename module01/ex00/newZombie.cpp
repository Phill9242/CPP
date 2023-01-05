#include "Zombie.class.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie *newZombie = new Zombie (name);
	return (newZombie);
}