
#include "FileProcessor.hpp"

#include <iostream>
#include <fstream>

FileProcessor::FileProcessor()
{
	this->opened = 0;
}

int	FileProcessor::iofile_initializer(const char name[])
{
	if (this->opened == 1)
	{
		this->iofile_close();
	}
	this->infile.open(name, std::fstream::in);
	if (!this->infile.is_open())
	{
		std::cout << "open infile error" << std::endl;
		return (1);
	}
	this->outfile_name = name;
	this->outfile_name.append(".replace");
	this->outfile.open(this->outfile_name.c_str(), std::fstream::trunc | std::fstream::out);
	if (!this->outfile.is_open())
	{
		this->infile.close();
		std::cout << "open outfile error" << std::endl;
		return (1);
	}
	this->opened = 1;
	return (0);
}

int	FileProcessor::iofile_close()
{
	this->infile.close();
	this->outfile.close();
	this->opened = 0;
	return (0);
}

void	FileProcessor::string_replace(const std::string from, const std::string to)
{
	char from_start = from.at(0);
	int	from_length = from.length();
	int	to_length = to.length();
	const char	*to_c_str = to.c_str();

	while (this->infile.peek() != EOF)
	{
		if (this->infile.peek() == from_start)
		{
			int	iter = 0;
			while (iter < from_length)
			{
				if (this->infile.get() != from.at(iter))
					break ;
				iter++;
			}
			if (iter == from_length)
			{
				this->outfile.write(to_c_str, to_length);
			}
			else
			{
				for (int i = 0; i <= iter; i++)
					this->infile.unget();
				this->outfile.put(this->infile.get());
			}
		}
		else
		{
			this->outfile.put(this->infile.get());
		}
	}
}
