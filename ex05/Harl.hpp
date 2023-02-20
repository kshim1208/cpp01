#ifndef HARL_HPP
# define HARL_HPP

# include <string>

# define LEVELSIZE 4

class Harl
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		void	murmur(void);
		void	(Harl::*level_ptr[LEVELSIZE])(void);
		std::string	level_array[LEVELSIZE];
	public:
		Harl();
		void	complain(std::string level);
};

#endif