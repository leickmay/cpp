#include "Character.hpp"

Character::Character(std::string name):_name(name)
{
}

Character::Character(Character const& other):_name(other._name)
{
	//a faire
}

Character&	Character::operator=(Character const& other)
{
	// a faire
	(void)other._name;
	return *this;
}

Character::~Character()
{
	// a faire
}

std::string const&	Character::getName() const
{
	return _name;
}

void				Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_materias[i])
		{
			if (m->getType() == "cure" || m->getType() == "ice")
				_materias[i] = m;
			break;
		}
	}
}

void				Character::unequip(int idx)
{
	_materias[idx] = NULL;
}

void				Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4)
		_materias[idx]->use(target);
}