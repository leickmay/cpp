#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle():AWeapon("PlasmaRifle", 5, 21), _attackoutput("* piouuu piouuu piouuu *")
{
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const& other):AWeapon(other._name, other._apcost, other._damage)
{
}

PlasmaRifle	&PlasmaRifle::operator=(PlasmaRifle const& other)
{
	return *this;
}

PlasmaRifle::~PlasmaRifle()
{
}

