#include "RadScorpion.hpp"

RadScorpion::RadScorpion(): Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout <<"* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const& other): Enemy(other._hitPoints, other._type)
{
}

RadScorpion&	RadScorpion::operator=(RadScorpion const& other)
{
	if (this != &other)
	{
		_type = other._type;
		_hitPoints = other._hitPoints;
	}
	return *this;
}
