/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leickmay <leickmay@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:26:13 by leickmay          #+#    #+#             */
/*   Updated: 2021/06/16 11:26:15 by leickmay         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
# include <string>
# include <iostream>
# include "Zombie.hpp"

class ZombieEvent
{
	public:

	ZombieEvent();
	void	setZombieType(std::string type);
	Zombie	*newZombie(std::string name);
	Zombie	*randomChump();

	private:

	std::string	m_type;
};

#endif