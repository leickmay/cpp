#include "ClapTrap.hpp"

ClapTrap::ClapTrap():m_hitPoints(10), m_energyPoints(10), m_attackDamages(0)
{
	m_name = "Unknown";
	std::cout << m_name << " is born ! You didn't gave him any name..." << std::endl;
}

ClapTrap::ClapTrap(std::string name):m_hitPoints(10), m_energyPoints(10), m_attackDamages(0)
{
	m_name = name;
	std::cout << m_name << " is born !" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << m_name << " desappears..." << std::endl;
}

void	ClapTrap::attack(std::string const& target)
{
	std::cout << YELLOW;
	std::cout << "FR4G-TP " << m_name << " attacks " << target << ", causing " << m_hitPoints << " points of damage !" << std::endl;
	std::cout << RESET;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	m_attackDamages += amount;
	if (m_attackDamages >= m_energyPoints)
		amount = m_energyPoints - (m_attackDamages - m_energyPoints);
	std::cout << RED << "FR4G-TP " << m_name << " took " << amount << " damage points" << RESET << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	m_attackDamages -= amount;
	if (m_attackDamages < 0)
	{
		amount -= (0 - m_attackDamages);
		m_attackDamages = 0;
	}
	std::cout << GREEN;
	std::cout << "FR4G-TP " << m_name << " recovered " << amount << " energy points" << std::endl;
	std::cout << RESET;

}