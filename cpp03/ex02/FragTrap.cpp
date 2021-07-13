#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout <<  "Unknown became a FragTrap !" << std::endl;
	m_attackDamages = 30;
	m_energyPoints = 100;
	m_hitPoints = 100;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << name <<  " became a FragTrap !" << std::endl;
	m_attackDamages = 30;
	m_energyPoints = 100;
	m_hitPoints = 100;
}

FragTrap::FragTrap(FragTrap const& other)
{
	std::cout << "a copy of " << m_name << " is born !" << std::endl;
	m_name = other.m_name;
	m_hitPoints = other.m_hitPoints; 
	m_energyPoints = other.m_energyPoints;
	m_attackDamages = other.m_attackDamages;

}

FragTrap	&FragTrap::operator=(FragTrap const& other)
{
	if (this != &other)
	{
		std::cout << m_name << " is assignated to " << other.m_name << std::endl;
		m_name = other.m_name;
		m_hitPoints = other.m_hitPoints;
		m_energyPoints = other.m_energyPoints;
		m_attackDamages = other.m_attackDamages;
	}
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << m_name << " isn't a FragTrap anymore" << std::endl;
}

void	FragTrap::highFivesGuys(void) const
{
	std::cout << BLUE << m_name << " request a legendary high five" << RESET << std::endl;
}

void	FragTrap::displayStats() const
{
	std::cout << m_name << " FragTrap Stats : " << std::endl;
	std::cout << "hitPoints : " << m_hitPoints << std::endl;
	std::cout << "energypoints : " << m_energyPoints << std::endl;
	std::cout << "attack damages : " << m_attackDamages << std::endl;
}