#include "ClapTrap.hpp"

ClapTrap::ClapTrap():m_hitPoints(10), m_energyPoints(10), m_attackDamages(0)
{
	m_name = "Unknown";
	std::cout << m_name << " is born ! You didn't gave him any name..." << std::endl;
}

ClapTrap::ClapTrap(std::string name):m_hitPoints(100), m_energyPoints(50), m_attackDamages(20)
{
	m_name = name;
	std::cout << m_name << " is born !" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& other):m_name(other.m_name), m_hitPoints(other.m_hitPoints), m_energyPoints(other.m_energyPoints), m_attackDamages(other.m_attackDamages)
{
	std::cout << "a copy of " << m_name << " is born !" << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const& other)
{
	std::cout << m_name << " is assignated to " << other.m_name << std::endl;
	m_name = other.m_name;
	m_hitPoints = other.m_hitPoints;
	m_energyPoints = other.m_energyPoints;
	m_attackDamages = other.m_attackDamages;

	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << m_name << " desappears..." << std::endl;
}

void	ClapTrap::attack(std::string const& target)
{
	std::cout << YELLOW;
	std::cout << "FR4G-TP " << m_name << " attacks " << target << ", causing " << m_attackDamages << " points of damage !" << std::endl;
	std::cout << RESET;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (m_energyPoints <= 0)
		std::cout << RED << "FR4G-TP " << m_name << " is already dead" << RESET << std::endl;
	else
	{
		m_energyPoints -= amount;
		if (m_energyPoints <= 0)
		{
			std::cout << RED << "FR4G-TP " << m_name << " took " << amount + m_energyPoints << " damage points" << RESET << std::endl;
			std::cout << RED << "FR4G-TP " << m_name << " died" << RESET << std::endl;
			m_energyPoints = 0;
		}
		else
			std::cout << RED << "FR4G-TP " << m_name << " took " << amount << " damage points" << RESET << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << GREEN;
	std::cout << "FR4G-TP " << m_name << " recovered " << amount << " energy points" << std::endl;
	std::cout << RESET;
	if (m_energyPoints <= 0)
		std::cout << GREEN << m_name << " REBORN" << RESET << std::endl;
	m_energyPoints += amount;
}