
#include <string>

#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie chump;

	chump.nameZombie(name);
	chump.announce();
}
