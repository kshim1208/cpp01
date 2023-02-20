#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

# include <string>

class HumanB
{
	private:
		std::string	name;
		Weapon		*weapon;
	public:
		HumanB();
		HumanB(std::string name);
		void	setWeapon(Weapon& weapon);
		void	attack(void);
		const std::string&	getName();
};

#endif