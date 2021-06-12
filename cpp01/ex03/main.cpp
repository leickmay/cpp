#include "ZombieHorde.hpp"
#include "Zombie.hpp"

int	main()
{
	srand(time(NULL));
	ZombieHorde horde(10);
	horde.announce();
	return 0;
}