#ifndef HARL_HPP
# define HARL_HPP

# include <string>

# define LEVELSIZE 4

typedef enum e_level{
	DEBUG = 0,
	INFO,
	WARINING,
	ERROR
}	t_level;

class Harl
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		void	murmur(void);
		std::string	level_array[LEVELSIZE];
	public:
		Harl();
		void	complain(std::string level);
};

#endif