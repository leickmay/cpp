#include "Human.hpp"

const void *Human::identify()
{
	return this->m_brain.identify();
}

const Brain	&Human::getBrain()
{
	return (this->m_brain);
}