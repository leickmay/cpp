#include "Human.hpp"

Human::Human()
{
	m_brain = new Brain;
}

Human::~Human()
{
	delete m_brain;
}

Brain	*Human::identify()
{
	return m_brain;
}

Brain	Human::getBrain()
{
	return (*m_brain);
}