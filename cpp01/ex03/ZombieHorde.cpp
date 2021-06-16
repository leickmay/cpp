/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leickmay <leickmay@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:26:27 by leickmay          #+#    #+#             */
/*   Updated: 2021/06/16 11:26:28 by leickmay         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	m_horde = new Zombie[n];
	m_n = n;
}

ZombieHorde::~ZombieHorde()
{
	delete [] m_horde;
}

void	ZombieHorde::announce()
{
	int	i(0);

	while (i < m_n)
	{
		m_horde[i].announce();
		i++;
	}
}