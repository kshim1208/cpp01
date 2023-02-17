
#include "Zombie.hpp"
#include "Zombie.h"

int main()
{
	Zombie	*horde;

	horde = zombieHorde(10, "zombie");
	for (int i = 0; i < 10; i++)
		horde[i].announce();
	delete[] horde;
}
