
#include "IoFileStatus.hpp"

#include <iostream>

int	main(int argc, char *argv[])
{
	IoFileStatus file_data;

	if (argc != 4)
	{
		std::cout << "invalid parameter" << std::endl;
		return (1);
	}
	if (file_data.infile_open(argv[1]) == 1
		|| file_data.outfile_open(argv[1]) == 1)
		return (1);


	return (0);
}
