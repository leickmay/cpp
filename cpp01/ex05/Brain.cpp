#include "Brain.hpp"

Brain::Brain()
{
	m_weight = 8.54;
	m_size = 55.12;
	m_nbNeurones = 2347483647;
}

const void	*Brain::identify() const
{
	return this;
}