#ifndef HUMAN_HPP
# define HUMAN_HPP
# include "Brain.hpp"
# include <string>
# include <iostream>

class Human
{
	public:
	const Brain	&getBrain();
	const void	*identify();

	private:
	const Brain m_brain;
};


#endif