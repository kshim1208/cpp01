#include "Harl.hpp"

#include <iostream>
#include <string>

Harl::Harl()
{
	level_array[0] = "DEBUG"; 
	level_array[1] = "INFO";
	level_array[2] = "WARNING";
	level_array[3] = "ERROR";
}

void	Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::murmur()
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void	Harl::complain(std::string level)
{
	int	iter = 0;

	while (iter < LEVELSIZE)
	{
		if (this->level_array[iter] == level)
			break ;
		iter++;
	}
	switch (iter)
	{
		case DEBUG:
			this->debug();
		case INFO:
			this->info();
		case WARINING:
			this->warning();
		case ERROR:
			this->error();
			break ;
		default:
			this->murmur();
	}
}
