/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leickmay <leickmay@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 10:15:30 by leickmay          #+#    #+#             */
/*   Updated: 2021/06/15 14:13:38 by leickmay         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	m_type = "hands";
}

Weapon::Weapon(std::string str)
{
	m_type = str;
}

void	Weapon::setType(std::string str)
{
	m_type = str;
}

const std::string	Weapon::getType()
{
	const std::string& r_type = m_type;
	return (r_type);
}