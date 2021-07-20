#include "Character.hpp"

Character::Character(std::string name):_name(name)
{
}

Character::Character(Character const& other)
{
	//a faire
}

Character&	Character::operator=(Character const& other)
{
	// a faire
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
	_materias[idx]->use(target);
}