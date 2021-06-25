#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

# define BLUE "\e[0;34m"
# define RED "\e[0;31m"
# define GREEN "\e[0;32m"
# define YELLOW "\e[1;33m"
# define RESET "\e[0m"

class ClapTrap
{
	public:
	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap();
	void	attack(std::string const& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	private:
	std::string m_name;
	int			m_hitPoints;
	int			m_energyPoints;
	int			m_attackDamages;
};

#endif