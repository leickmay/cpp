#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	m_horde = new Zombie[n];
	m_n = n;
}

ZombieHorde::~ZombieHorde()
{
	delete [] m_horde;
}

void	ZombieHorde::announce()
{
	int	i(0);

	while (i < m_n)
	{
		m_horde[i].announce();
		i++;
	}
}