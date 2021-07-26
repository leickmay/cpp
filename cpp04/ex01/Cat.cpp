#include "Cat.hpp"

Cat::Cat():Animal("Cat")
{
	std::cout << "Cat constructor called, type : " << _type << std::endl;
	_brain = new Brain();
	_brain->setIdeas("be pretentious", "go outside and don't come back when you need to leave", "wake you up at 4am");
}

Cat::Cat(Cat const& other):Animal("Cat")
{
	std::cout << "Cat copy constructor called" << std::endl;
	_brain = new Brain(*other._brain);
}

Cat&	Cat::operator=(Cat const& other)
{
	std::cout << "Cat assignation operator called" << std::endl;
	if (this != &other)
		_brain = new Brain(*other._brain);
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

void	Cat::displayIdeas() const
{
	_brain->displayIdeas();
}
