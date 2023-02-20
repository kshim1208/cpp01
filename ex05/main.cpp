#include "Harl.hpp"

#include <iostream>

int	main()
{
	Harl	angry;

	std::cout << "input DEBUG" << std::endl;
	angry.complain("DEBUG");
	std::cout << std::endl;

	std::cout << "input INFO" << std::endl;
	angry.complain("INFO");
	std::cout << std::endl;

	std::cout << "input WARNING" << std::endl;
	angry.complain("WARNING");
	std::cout << std::endl;

	std::cout << "input ERROR" << std::endl;
	angry.complain("ERROR");
	std::cout << std::endl;

	std::cout << "input FAIL" << std::endl;
	angry.complain("FAIL");
	std::cout << std::endl;
}
