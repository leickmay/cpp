#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_materias[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const& other)
{
	//for(int i = 0; i < 4; i++)
	//{
	//	if (other._materias[i])
	//	{
	//		
	//	}
	//}

	// a faire
}

MateriaSource&	MateriaSource::operator=(MateriaSource const& other)
{
	// a faire
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i])
			delete _materias[i];
	}
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_materias[i])
		{
			AMateria	*copy = materia->clone();
			_materias[i] = copy;
			break;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i] && _materias[i]->getType() == type)
		{
			AMateria	*copy = _materias[i]->clone();
			return copy;
		}
	}
	return 0;
}