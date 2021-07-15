#include "PowerFist.hpp"

PowerFist::PowerFist():AWeapon("Power Fist", 8, 50), _attackoutput("* pschhh... SBAM! *")
{
}

PowerFist::PowerFist(PowerFist const& other):AWeapon(other._name, other._apcost, other._damage)
{
}

PowerFist	&PowerFist::operator=(PowerFist const& other)
{
	if (this != &other)
	{
		_name = other._name;
		_apcost = other._apcost;
		_damage = other._damage;
		_attackoutput = other._attackoutput;
	}
	return *this;
}

PowerFist::~PowerFist()
{
}

void	PowerFist::attack() const
{
	std::cout << _attackoutput << std::endl;
}