#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
	public :
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const& other);
		DiamondTrap& operator=(DiamondTrap const &other);
		~DiamondTrap();
		using ScavTrap::attack;
		void	whoAmI();
		void	displayStats();
	
	private :
		std::string	m_name;
};

#endif