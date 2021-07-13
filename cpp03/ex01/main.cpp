#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap maurice("Maurice");
	ScavTrap bob("Bob");

	bob.displayStats();
	bob.attack("Maurice");
	maurice.takeDamage(20);
	maurice.beRepaired(5);
	bob.attack("Maurice");
	maurice.takeDamage(20);
	bob.guardGate();
	bob.attack("Maurice");
	maurice.takeDamage(20);
	bob.guardGate();
	return 0;
}