#include "SuperMutant.hpp"

SuperMutant::SuperMutant(): Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout <<"Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const& other): Enemy(other._hitPoints, other._type)
{
}

SuperMutant&	SuperMutant::operator=(SuperMutant const& other)
{
	if (this != &other)
	{
		_type = other._type;
		_hitPoints = other._hitPoints;
	}
	return *this;
}

void	SuperMutant::takeDamage(int amount)
{
	if (_hitPoints - 3 - amount <= 0)
		_hitPoints = 0;
	else
		_hitPoints -= (amount - 3);
}