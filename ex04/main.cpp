
#include "FileProcessor.hpp"

#include <iostream>
#include <fstream>

// #include <cstdlib>

// int	test_creator(const char name[], const char string[])
// {
// 	std::fstream		test;
// 	std::string			target = string;
// 	int	min = 32;
// 	int	max = 126;
// 	int	range = max - min + 1;
// 	int	len = target.length();

// 	test.open(name, std::fstream::trunc | std::fstream::out);
// 	if (!test.is_open())
// 	{
// 		std::cout << "test file create error" << std::endl;
// 		return (1);
// 	}
// 	for (int i = 0; i < 1000; i++)
// 	{
// 		if (std::rand() % 100 == 0)
// 			test.put('\n');
// 		if (std::rand() % 10 == 0)
// 			test.write(string, len);
// 		else
// 			test.put((std::rand() % range) + min);
// 	}
// 	test.close();
// 	return (0);
// }

int	main(int argc, char *argv[])
{
	FileProcessor	file;

	if (argc != 4)
	{
		std::cout << "invalid parameter" << std::endl;
		return (1);
	}

	// if (test_creator(argv[1], argv[2]) == 1)
	// 	return (1);

	if (file.iofile_initializer(argv[1]) == 1)
		return (1);
	file.string_replace(argv[2], argv[3]);
	file.iofile_close();
	return (0);
}
