#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle():AWeapon("Plasma Rifle", 5, 21), _attackoutput("* piouuu piouuu piouuu *")
{
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const& other):AWeapon(other._name, other._apcost, other._damage), _attackoutput(other._attackoutput)
{
}

PlasmaRifle	&PlasmaRifle::operator=(PlasmaRifle const& other)
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

PlasmaRifle::~PlasmaRifle()
{
}

void	PlasmaRifle::attack() const
{
	std::cout << _attackoutput << std::endl;
}

