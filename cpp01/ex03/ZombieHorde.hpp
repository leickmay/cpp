/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leickmay <leickmay@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:26:31 by leickmay          #+#    #+#             */
/*   Updated: 2021/06/16 11:26:33 by leickmay         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
# include <string>
# include <iostream>
# include "Zombie.hpp"

class ZombieHorde
{
	public:

	ZombieHorde(int n);
	~ZombieHorde();
	void	announce();

	private:
	int m_n;
	Zombie *m_horde;
};


#endif