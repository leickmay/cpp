#include "Cat.hpp"

Cat::Cat():Animal("Cat")
{
	std::cout << "Cat constructor called, type : " << _type << std::endl;
	_brain = new Brain();
}

Cat::Cat(Cat const& other):Animal(other._type)
{
	std::cout << "Cat copy constructor called" << std::endl;
	_brain = new Brain();
}

Cat&	Cat::operator=(Cat const& other)
{
	std::cout << "Cat assignation operator called" << std::endl;
	if (this != &other)
	{
		_type = other._type;
		_brain = new Brain();
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}

void	Cat::makeSound() const
{
	std::cout << "*Miaaouuuuu*" << std::endl;
}

