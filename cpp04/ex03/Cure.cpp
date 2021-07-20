#include "cure.hpp"

Cure::Cure():AMateria("cure")
{
}

Cure::Cure(Cure const& other):AMateria(other._type)
{
}

Cure&	Cure::operator=(Cure const& other)
{
	if (this != &other)
		_type = other._type;
	return *this;
}

Cure::~Cure()
{
}

AMateria*	Cure::clone() const
{
	Cure *clone = new Cure(*this);
	return clone;
}

void		Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}