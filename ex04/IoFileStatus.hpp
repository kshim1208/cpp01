
class IoFileStatus
{
	private:
		std::fstream	infile;
		std::fstream	outfile;
		std::string		outfile_name;
		// infile offset
		// infile start
		// infile end
		// outfile offset
	public:
		int infile_open(const char name[]);
		int outfile_open(const char name[]);
};