
#include "Weapon.hpp"
	
#include "iostream"

Weapon::Weapon(){}

Weapon::Weapon(std::string type)
{
	this->type = type;
}

const std::string&	Weapon::getType()
{
	return (this->type);
}

void	Weapon::setType(std::string type)
{
	std::cout << this->type << " has changed to ";
	this->type = type;
	std::cout << this->type << std::endl;
}
