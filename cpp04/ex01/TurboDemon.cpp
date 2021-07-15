#include "TurboDemon.hpp"

TurboDemon::TurboDemon(): Enemy(200, "Turbo Demon")
{
	std::cout << "I'm gonna burn everything of you" << std::endl;
}

TurboDemon::~TurboDemon()
{
	std::cout <<"Noooooooooooo" << std::endl;
}

TurboDemon::TurboDemon(TurboDemon const& other): Enemy(other._hitPoints, other._type)
{
}

TurboDemon&	TurboDemon::operator=(TurboDemon const& other)
{
	if (this != &other)
	{
		_type = other._type;
		_hitPoints = other._hitPoints;
	}
	return *this;
}
