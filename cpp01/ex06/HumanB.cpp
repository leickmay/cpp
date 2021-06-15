/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leickmay <leickmay@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 10:15:28 by leickmay          #+#    #+#             */
/*   Updated: 2021/06/15 15:48:08 by leickmay         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	m_name = name;
}

void	HumanB::attack()
{
	std::cout << m_name << " attacks with his " << m_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& club)
{
	m_weapon = &club;
}