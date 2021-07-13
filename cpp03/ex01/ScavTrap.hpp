#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public :
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &);
		ScavTrap& operator=(ScavTrap const &);
		~ScavTrap();
		void	guardGate();
		void	attack(std::string const& target);
		void	displayStats() const;

	private:
		bool	m_guardMode;
};

#endif