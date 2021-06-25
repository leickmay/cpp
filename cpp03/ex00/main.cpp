#include "ClapTrap.hpp"

int	main()
{
	ClapTrap maurice("Maurice");
	ClapTrap michel("Michel");
	michel.attack("Maurice");
	maurice.takeDamage(10);
	maurice.beRepaired(5);
	michel.attack("Maurice");
	maurice.takeDamage(10);
	return 0;
}