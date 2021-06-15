/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leickmay <leickmay@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 10:15:35 by leickmay          #+#    #+#             */
/*   Updated: 2021/06/15 15:48:10 by leickmay         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	public:
	HumanB(std::string name);
	void	attack();
	void	setWeapon(Weapon& club);

	private:
	std::string	m_name;
	Weapon		*m_weapon;
};

#endif