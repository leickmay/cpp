#include "Zombie.hpp"

Zombie::Zombie(std::string n, std::string t)
{
	name = n;
	type = t;
}

void	Zombie::advert()
{
	std::cout << "<" << name << " (" << type << ")> Braiiiiiiinnnssss ..." << std::endl;
}

void	Zombie::announce()
{
	std::cout << name << " : \"Raaaaarrgh i'm aaaaaanouncing myseeeeeeelf\"" << std::endl;
}