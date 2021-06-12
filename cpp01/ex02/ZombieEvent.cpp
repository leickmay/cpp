#include "ZombieEvent.hpp"
#include "Zombie.hpp"

ZombieEvent::ZombieEvent()
{
	m_type = "Default";
}

void	ZombieEvent::setZombieType(std::string type)
{
	m_type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	Zombie *newZ;

	newZ = new Zombie(name, m_type);
	return (newZ);
}

Zombie	*ZombieEvent::randomChump()
{
	Zombie *newZ;

	std::string	dico[10] = {"Ldevilla", "Deustach", "Ckurt", "Gapoulai", "Jacques Chirac", \
	"Josiane Balasko", "Risitas", "Karim Benzema", "Sebastien Chabal", "Louis XIV"};
	newZ = new Zombie(dico[rand() % 10], m_type);
	newZ->announce();
	return (newZ);
}