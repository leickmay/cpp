#include "Brain.hpp"

Brain::Brain()
{
}

Brain::Brain(Brain const& other)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = other._ideas[i];
}

Brain&	Brain::operator=(Brain const &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			_ideas[i] = other._ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
}

void	Brain::displayIdeas() const
{
	for (int i = 0; i < 100; i++)
	{
		if (i == 0 || i % 3 == 0)
			std::cout << BLUE << _ideas[i] << RESET << std::endl;
		if (i % 3 == 1)
			std::cout << RED << _ideas[i] << RESET << std::endl;
		if (i % 3 == 2)
			std::cout << YELLOW << _ideas[i] << RESET << std::endl;
	}
}

void	Brain::setIdeas(std::string i1, std::string i2, std::string i3)
{
	for(int i = 0; i < 100; i++)
	{
		if (i == 0 || i % 3 == 0)
			_ideas[i] = i1;
		if (i % 3 == 1)
			_ideas[i] = i2;
		if (i % 3 == 2)
			_ideas[i] = i3;
	}
}
