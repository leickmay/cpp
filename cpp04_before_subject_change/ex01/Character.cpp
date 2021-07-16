#include "Character.hpp"

Character::Character(std::string const& name):_name(name), _ap(40), _weapon(NULL)
{
}

Character::~Character()
{
}

Character::Character(Character const& other):_name(other._name), _ap(other._ap), _weapon(other._weapon)
{
}

Character&	Character::operator=(Character const& other)
{
	if (this != &other)
	{
		_name = other._name;
		_ap = other._ap;
		_weapon = other._weapon;
	}
	return *this;
}

//Getters

std::string	Character::getName() const
{
	return _name;
}

int	Character::getAP() const
{
	return _ap;
}

AWeapon*	Character::getWeapon() const
{
	return _weapon;
}

//Methods

void	Character::recoverAP()
{
	_ap += 10;
	if (_ap > 40)
		_ap = 40;
}

void	Character::equip(AWeapon *w)
{
	_weapon = w;
}

void	Character::attack(Enemy *e)
{
	if (_weapon && _ap >= _weapon->getAPCost())
	{
		_ap -= _weapon->getAPCost();
		std::cout << _name << " attacks " << e->getType() << " with a " << _weapon->getName() << std::endl;
		_weapon->attack();
		e->takeDamage(_weapon->getDamage());
		if (e->getHP() <= 0)
			e->~Enemy();
	}
}

//operator

std::ostream &operator<<(std::ostream &out, Character &src)
{
	if (src.getWeapon())
		out << src.getName() << " has " << src.getAP() << " AP and wields a " << src.getWeapon()->getName() << std::endl;
	else
		out << src.getName() << " has " << src.getAP() << " AP and is unarmed" << std::endl;
	return out;
}