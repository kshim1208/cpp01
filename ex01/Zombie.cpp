
#include "Zombie.hpp"

#include <iostream>
#include <string>

Zombie::Zombie()
{
	this->name = "Foo";
}
Zombie::~Zombie()
{
	std::cout << this->name << " is destroyed" << std::endl;
}

void	Zombie::nameZombie(std::string name)
{
	this->name = name;
}

void	Zombie::announce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}