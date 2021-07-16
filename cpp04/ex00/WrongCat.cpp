#include "WrongCat.hpp"

WrongCat::WrongCat():WrongAnimal("WrongCat")
{
	std::cout << "WrongCat constructor called, type : " << _type << std::endl;
}

WrongCat::WrongCat(WrongCat const& other):WrongAnimal(other._type)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat&	WrongCat::operator=(WrongCat const& other)
{
	std::cout << "WrongCat assignation operator called" << std::endl;
	if (this != &other)
		_type = other._type;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "*Wrong Miaaouuuuu that you won't see anyway*" << std::endl;
}
