#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage):_name(name), _apcost(apcost), _damage(damage)
{
}

AWeapon::~AWeapon()
{
}

AWeapon::AWeapon(AWeapon const& other):_name(other._name), _apcost(other._apcost), _damage(other._damage)
{
}

AWeapon&	AWeapon::operator=(AWeapon const& other)
{
	if (this != &other)
	{
		_name = other._name;
		_apcost = other._apcost;
		_damage = other._damage;
	}
	return *this;
}

std::string const	AWeapon::getName() const
{
	return _name;
}

int	AWeapon::getAPCost() const
{
	return _apcost;
}

int	AWeapon::getDamage() const
{
	return _damage;
}