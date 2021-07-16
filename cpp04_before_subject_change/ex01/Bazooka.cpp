#include "Bazooka.hpp"

Bazooka::Bazooka():AWeapon("Bazooka", 15, 55), _attackoutput("* BOOOOOOOOOOOOOOM *")
{
}

Bazooka::Bazooka(Bazooka const& other):AWeapon(other._name, other._apcost, other._damage), _attackoutput(other._attackoutput)
{
}

Bazooka	&Bazooka::operator=(Bazooka const& other)
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

Bazooka::~Bazooka()
{
}

void	Bazooka::attack() const
{
	std::cout << _attackoutput << std::endl;
}