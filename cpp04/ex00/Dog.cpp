#include "Dog.hpp"

Dog::Dog():Animal("Dog")
{
	std::cout << "Dog constructor called, type : " << _type << std::endl;
}

Dog::Dog(Dog const& other):Animal(other._type)
{
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog&	Dog::operator=(Dog const& other)
{
	std::cout << "Dog assignation operator called" << std::endl;
	if (this != &other)
		_type = other._type;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "*Waf Waf !*" << std::endl;
}