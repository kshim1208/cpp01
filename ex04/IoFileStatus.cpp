
#include "IoFileStatus.hpp"
\
#include <iostream>
#include <fstream>

int	IoFileStatus::infile_open(const char name[])
{
	this->infile.open(name, std::fstream::in);
	if (!this->infile.is_open())
	{
		std::cout << "open file error" << std::endl;
		return (1);
	}
	return (0);
}

int	IoFileStatus::outfile_open(const char name[])
{
	this->outfile_name = name;
	this->outfile_name.append(".replace");
	this->outfile.open(this->outfile_name, std::fstream::out);
	if (!this->outfile.is_open())
	{
		this->infile.close();
		std::cout << "open file error" << std::endl;
		return (1);
	}
	return (0);
}