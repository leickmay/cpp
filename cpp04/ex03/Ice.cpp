#include "Ice.hpp"
#include "Character.hpp"

Ice::Ice():AMateria("ice")
{
}

Ice::Ice(Ice const& other):AMateria("ice")
{
	(void)other;
}

Ice&	Ice::operator=(Ice const& other)
{
	(void)other;
	return *this;
}

Ice::~Ice()
{
}

AMateria*	Ice::clone() const
{
	Ice *clone = new Ice(*this);
	return clone;
}

void		Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}