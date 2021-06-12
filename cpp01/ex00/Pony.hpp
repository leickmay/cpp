#ifndef PONY_HPP
# define PONY_HPP
# include <string>
# include <iostream>

class Pony
{
	public:

	Pony(std::string n, std::string c, int a, int h, int w);
	
	void	display_info();
	void	run();
	void	die();

	private:

	std::string	name;
	std::string	color;
	int			age;
	int			height;
	int			weight;

};

#endif