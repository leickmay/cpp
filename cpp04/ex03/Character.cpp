#include "Character.hpp"

Character::Character(std::string name):_name(name)
{
	for (int i = 0; i < 4; i++)
		_materias[i] = 0;
	_garbage = NULL;
}

Character::Character(Character const& other):_name(other._name)
{
	for (int i = 0; i < 4; i++)
	{
		if (other._materias[i])
		{
			t_list *elem = ft_lstNew(other._materias[i]->clone());
			_materias[i] = elem->content;
			ft_lstAddBack(&_garbage, elem);
		}
		else
			_materias[i] = 0;
	}
}

Character&	Character::operator=(Character const& other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (other._materias[i])
			{
				t_list *elem = ft_lstNew(other._materias[i]->clone());
				_materias[i] = _garbage->content;
				ft_lstAddBack(&_garbage, elem);
			}
			else
				_materias[i] = 0;
		}
	}
	return *this;
}

Character::~Character()
{
	ft_lstClear(_garbage);
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
			t_list *elem = ft_lstNew(m->clone());
			_materias[i] = elem->content;
			ft_lstAddBack(&_garbage, elem);
			break;
		}
	}
}

void				Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && _materias[idx])
		_materias[idx] = 0;
}

void				Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && _materias[idx])
		_materias[idx]->use(target);
}