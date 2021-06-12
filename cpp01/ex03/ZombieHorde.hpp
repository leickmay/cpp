#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
# include <string>
# include <iostream>
# include "Zombie.hpp"

class ZombieHorde
{
	public:

	ZombieHorde(int n);
	~ZombieHorde();
	void	announce();

	private:
	int m_n;
	Zombie *m_horde;
};


#endif