#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int	main()
{
	ZombieEvent	event;
	Zombie		jeanmi("Jean Michel", "Runner");
	Zombie		*marco;
	Zombie		*rand;

	srand(time(NULL));
	jeanmi.advert();
	jeanmi.announce();
	event.setZombieType("Rampant");
	marco = event.newZombie("Marco");
	marco->advert();
	marco->announce();
	delete marco;
	event.setZombieType("Sleepy");
	rand = event.randomChump();
	rand->advert();
	delete rand;
	rand = event.randomChump();
	rand->advert();
	delete rand;
	event.setZombieType("Dancing");
	rand = event.randomChump();
	rand->advert();
	delete rand;
	return 0;

}

//clang++ -Wall -Wextra -Werror -std=c++98 main.cpp Zombie.cpp ZombieEvent.cpp