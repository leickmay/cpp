/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leickmay <leickmay@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 10:15:33 by leickmay          #+#    #+#             */
/*   Updated: 2021/06/15 15:47:21 by leickmay         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	public:
	HumanA(std::string name, Weapon& club);
	void	attack();

	private:
	std::string	m_name;
	Weapon		&m_weapon;
};

#endif