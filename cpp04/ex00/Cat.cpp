#include "Cat.hpp"

Cat::Cat():Animal("Cat")
{
	std::cout << "Cat constructor called, type : " << _type << std::endl;
}

Cat::Cat(Cat const& other):Animal(other._type)
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat&	Cat::operator=(Cat const& other)
{
	std::cout << "Cat assignation operator called" << std::endl;
	if (this != &other)
		_type = other._type;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "*Miaaouuuuu*" << std::endl;
}
