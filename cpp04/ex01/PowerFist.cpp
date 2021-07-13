#include "PowerFist.hpp"

PowerFist::PowerFist():AWeapon("PowerFist", 8, 50), _attackoutput("* pschhh... SBAM! *")
{
}

PowerFist::PowerFist(PowerFist const& other):AWeapon(other._name, other._apcost, other._damage)
{
}

PowerFist	&PowerFist::operator=(PowerFist const& other)
{
	return *this;
}

PowerFist::~PowerFist()
{
}
