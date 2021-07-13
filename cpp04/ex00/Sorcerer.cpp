#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title):_name(name), _title(title)
{
	std::cout << _name << ", " << _title << " is born !" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << _name << ", " << _title << " is dead. Consequences will never be the same!" <<std::endl;
}

Sorcerer::Sorcerer(Sorcerer const& other):_name(other._name), _title(other._title)
{
}

Sorcerer	&Sorcerer::operator=(Sorcerer const& other)
{
	_name = other._name;
	_title = other._title;
	return *this;
}

void	Sorcerer::introduce() const
{
	std::cout << "I am " << _name << ", " << _title << ", and I like ponies!" <<std::endl;
}

std::string	Sorcerer::getName() const
{
	return _name;
}

std::string	Sorcerer::getTitle() const
{
	return _title;
}

void	Sorcerer::polymorph(Victim const &other) const
{
	other.getPolymorphed();
}

std::ostream &operator<<(std::ostream &out, Sorcerer &src)
{
	out << "I am " << src.getName() << ", " << src.getTitle() << ", and I like ponies!" << std::endl;
	return out;
}