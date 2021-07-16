#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called, no type specified" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type):_type(type)
{
	std::cout << "WrongAnimal constructor called, type : " << _type << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& other):_type(other._type)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const& other)
{
	std::cout << "WrongAnimal assignation operator called" << std::endl;
	if (this != &other)
		_type = other._type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "*Weird (and WRONG ?!) random animal noise*" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return _type;
}
