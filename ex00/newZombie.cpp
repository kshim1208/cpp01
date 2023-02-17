
#include <string>

#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie *tmp = new Zombie;

	tmp->nameZombie(name);
	return (tmp);
}
