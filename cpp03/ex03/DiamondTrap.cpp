#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "Unknown became a DiamondTrap" << std::endl;
	m_name = "Unknown";
	ScavTrap::setEnergyPoints();
}

DiamondTrap::DiamondTrap(std::string name):ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	std::cout << name << " became a DiamondTrap" << std::endl;
	m_name = name;
	ScavTrap::setEnergyPoints();
}

DiamondTrap::~DiamondTrap()
{
	std::cout << m_name << " isn't a DiamondTrap anymore" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name : " << m_name << std::endl;
	std::cout << "ClapTrap name : " << ClapTrap::m_name << std::endl;
}

void	DiamondTrap::displayStats()
{
	std::cout << m_name << " DiamondTrap Stats : " << std::endl;
	std::cout << "hitPoints : " << m_hitPoints << std::endl;
	std::cout << "energypoints : " << m_energyPoints << std::endl;
	std::cout << "attack damages : " << m_attackDamages << std::endl;
}