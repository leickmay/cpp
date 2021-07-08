#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(), m_guardMode(false)
{
	std::cout << "Unknown became a ScavTrap !" << std::endl;
	m_attackDamages = 20;
	m_energyPoints = 50;
	m_hitPoints = 100;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name), m_guardMode(false)
{
	std::cout << name << " became a ScavTrap !" << std::endl;
	m_attackDamages = 20;
	m_energyPoints = 50;
	m_hitPoints = 100;
}

ScavTrap::~ScavTrap()
{
	std::cout << m_name << " isn't a ScavTrap anymore" << std::endl;
}

void	ScavTrap::attack(std::string const& target)
{
	std::cout << YELLOW;
	std::cout << "FR4G-TP " << m_name << "(ScavTrap) attacks " << target << ", causing " << m_attackDamages << " points of damage !" << std::endl;
	std::cout << RESET;
}

void	ScavTrap::guardGate()
{
	if (!m_guardMode)
	{
		std::cout << BLUE << m_name << " ScavTrap has enterred in Gate keeper mode" << RESET << std::endl;
		m_guardMode = true;
	}
	else
	{
		std::cout << BLUE << m_name << " ScavTrap left in Gate keeper mode" << RESET << std::endl;
		m_guardMode = false;
	}
	
}

void	ScavTrap::displayStats()
{
	std::cout << m_name << " ScavTrap Stats : " << std::endl;
	std::cout << "hitPoints : " << m_hitPoints << std::endl;
	std::cout << "energypoints : " << m_energyPoints << std::endl;
	std::cout << "attack damages : " << m_attackDamages << std::endl;
}