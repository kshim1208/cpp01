
#include "Zombie.hpp"
#include "Zombie.h"

int main()
{
	{
		Zombie stack_zombie;
		stack_zombie.announce();
	}
	Zombie *malloc_zombie;

	malloc_zombie = newZombie("malloced");
	malloc_zombie->announce();
	delete malloc_zombie;
	
	randomChump("chump");
	return (0);
}