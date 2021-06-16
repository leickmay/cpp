/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leickmay <leickmay@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:26:02 by leickmay          #+#    #+#             */
/*   Updated: 2021/06/16 11:26:04 by leickmay         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
	m_name = name;
	m_type = type;
}

void	Zombie::advert()
{
	std::cout << "<" << m_name << " (" << m_type << ")> Braiiiiiiinnnssss ..." << std::endl;
}

void	Zombie::announce()
{
	std::cout << m_name << " : \"Raaaaarrgh i'm aaaaaanouncing myseeeeeeelf\"" << std::endl;
}