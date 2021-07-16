#include "Dog.hpp"

Dog::Dog():Animal("Dog")
{
	std::cout << "Dog constructor called, type : " << _type << std::endl;
	_brain = new Brain();
	_brain->setIdeas("eat", "shit", "sleep");
}

Dog::Dog(Dog const& other):Animal(other._type)
{
	std::cout << "Dog copy constructor called" << std::endl;
	//_brain = new Brain(other._brain);
}

Dog&	Dog::operator=(Dog const& other)
{
	std::cout << "Dog assignation operator called" << std::endl;
	if (this != &other)
	{
		_type = other._type;
		_brain = new Brain();
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}

void	Dog::makeSound() const
{
	std::cout << "*Waf Waf !*" << std::endl;
}

void	Dog::displayIdeas() const
{
	_brain->displayIdeas();
}

void	Dog::setIdeas() 
{
	_brain->setIdeas("eat", "shit", "sleep");
}