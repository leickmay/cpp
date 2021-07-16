#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"
# include "Peon.hpp"

class Peon: public Victim
{
	public:
		Peon(std::string name);
		~Peon();
		Peon(Peon const& other);
		Peon& operator=(Peon const& other);
		virtual void	getPolymorphed() const;

	private:
		Peon();
};

#endif