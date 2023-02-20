#ifndef FILEPROCESSOR_HPP
# define FILEPROCESSOR_HPP

# include <fstream>
# include <string>

class FileProcessor
{
	private:
		int				opened;
		std::fstream	infile;
		std::fstream	outfile;
		std::string		outfile_name;
	public:
		FileProcessor();
		int iofile_initializer(const char name[]);
		int	iofile_close();
		void	string_replace(const std::string from, const std::string to);
};

#endif