/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leickmay <leickmay@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 10:15:26 by leickmay          #+#    #+#             */
/*   Updated: 2021/06/15 15:47:36 by leickmay         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& club) : m_name(name), m_weapon(club)
{
}

void	HumanA::attack()
{
	std::cout << m_name << " attcaks with his " << m_weapon.getType() << std::endl;
}