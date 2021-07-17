#include "Animal.hpp"

Animal::Animal(std::string type):_type(type)
{
	std::cout << "Animal constructor called, type : " << _type << std::endl;
}

Animal::Animal(Animal const& other):_type(other._type)
{
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal&	Animal::operator=(Animal const& other)
{
	std::cout << "Animal assignation operator called" << std::endl;
	if (this != &other)
		_type = other._type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

std::string	Animal::getType() const
{
	return _type;
}
