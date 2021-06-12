#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
# include <string>
# include <iostream>
# include "Zombie.hpp"

class ZombieEvent
{
	public:

	ZombieEvent();
	void	setZombieType(std::string type);
	Zombie	*newZombie(std::string name);
	Zombie	*randomChump();

	private:

	std::string	m_type;
};

#endif