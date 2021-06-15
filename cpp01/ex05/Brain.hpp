#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>
# include <iostream>

class Brain
{
	public:
	Brain();
	const void	*identify() const;

	private:
	double	m_weight;
	double	m_size;
	long	m_nbNeurones;
};

#endif