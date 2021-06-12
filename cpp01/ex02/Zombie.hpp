#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>

class Zombie
{
	public:

	Zombie(std::string n, std::string t);
	void	advert();
	void	announce();

	private:

	std::string	name;
	std::string	type;
};

#endif