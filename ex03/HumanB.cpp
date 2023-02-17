#include "HumanB.hpp"
#include "Weapon.hpp"

#include <string>
#include <iostream>

HumanB::HumanB(std::string name)
{
	this->name = name;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
	std::cout << this->getName() << " equipped " << this->weapon->getType() << std::endl;
}

void	HumanB::attack(void)
{
	std::cout << this->getName() << " attacks with their " << this->weapon->getType() << std::endl;
}

const std::string&	HumanB::getName()
{
	return (this->name);
}