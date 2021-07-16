#ifndef UNICORN_HPP
# define UNICORN_HPP

# include "Victim.hpp"
# include "Unicorn.hpp"

class Unicorn: public Victim
{
	public:
		Unicorn(std::string name);
		~Unicorn();
		Unicorn(Unicorn const& other);
		Unicorn& operator=(Unicorn const& other);
		virtual void	getPolymorphed() const;

	private:
		Unicorn();
};

#endif