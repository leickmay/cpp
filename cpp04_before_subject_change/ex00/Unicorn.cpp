#include "Unicorn.hpp"

Unicorn::Unicorn(std::string name): Victim(name)
{
	std::cout << _name << " : Yipeeee I'm a unicorn !" << std::endl;
}

Unicorn::~Unicorn()
{
	std::cout << "Oh no ! " << _name << " the unicorn is gone..." << std::endl;
}

Unicorn::Unicorn(Unicorn const& other): Victim(other._name)
{
}

Unicorn	&Unicorn::operator=(Unicorn const& other)
{
	if (this != &other)
		_name = other._name;
	return *this;
}

void	Unicorn::getPolymorphed() const
{
	std::cout << _name << " has been turned into a DARK SHADOW WAR HORSE!" << std::endl;
}