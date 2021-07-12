#include "DiamondTrap.hpp"

int	main()
{
	ClapTrap maurice("Maurice");
	ScavTrap bob("Bob");
	FragTrap johnny("Johnny");
	DiamondTrap jeanPhi("Jean-Phi");

	jeanPhi.attack("Maurice");
	maurice.takeDamage(30);
	maurice.beRepaired(5);
	jeanPhi.attack("Maurice");
	maurice.takeDamage(30);
	johnny.highFivesGuys();
	jeanPhi.attack("Maurice");
	maurice.takeDamage(30);
	jeanPhi.whoAmI();
	jeanPhi.displayStats();
	bob.guardGate();
	johnny.displayStats();
	bob.displayStats();
	jeanPhi.guardGate();
	jeanPhi.highFivesGuys();
	jeanPhi.guardGate();
	return 0;
}