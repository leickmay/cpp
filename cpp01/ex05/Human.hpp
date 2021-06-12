#ifndef HUMAN_HPP
# define HUMAN_HPP
# include "Brain.hpp"
# include <string>
# include <iostream>

class Human
{
	public:
	Human();
	~Human();
	Brain	getBrain();
	Brain	*identify();

	private:
	Brain *m_brain;
};


#endif