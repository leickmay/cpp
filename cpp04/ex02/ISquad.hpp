#ifndef ISQUAD_HPP
# define ISQUAD_HPP

# include "ISpaceMarine.hpp"

class ISquad
{
	public:
		virtual ~ISquad() {};
		virtual int	getCount() const = 0;
		virtual ISpaceMarine*	getUnit(int u) const = 0;
		virtual int	push(ISpaceMarine* s) = 0;
};

#endif