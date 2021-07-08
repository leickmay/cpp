#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ClapTrap maurice("Maurice");
	ScavTrap bob("Bob");
	FragTrap johnny("Johnny");

	johnny.attack("Maurice");
	maurice.takeDamage(30);
	maurice.beRepaired(5);
	johnny.attack("Maurice");
	maurice.takeDamage(30);
	johnny.highFivesGuys();
	johnny.attack("Maurice");
	maurice.takeDamage(30);
	bob.guardGate();
	return 0;
}