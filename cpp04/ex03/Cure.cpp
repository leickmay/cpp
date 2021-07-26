#include "Cure.hpp"
#include "Character.hpp"

Cure::Cure():AMateria("cure")
{
}

Cure::Cure(Cure const& other):AMateria("cure")
{
	(void)other;
}

Cure&	Cure::operator=(Cure const& other)
{
	(void)other;
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