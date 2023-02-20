
#include "HumanA.hpp"
#include "Weapon.hpp"

#include <string>
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon):name(name), weapon(weapon){}

void	HumanA::attack(void)
{
	std::cout << this->getName() << " attacks with their " << this->weapon.getType() << std::endl;
}

const std::string&	HumanA::getName()
{
	return (this->name);
}
