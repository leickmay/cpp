#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const& other)
{
	(void)other;
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine&	TacticalMarine::operator=(TacticalMarine const& other)
{
	(void)other;
	return *this;
}

ISpaceMarine*	TacticalMarine::clone() const
{
	ISpaceMarine* temp = new TacticalMarine(*this);
	return temp;
}

void	TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void	TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void	TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}