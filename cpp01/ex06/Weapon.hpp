/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leickmay <leickmay@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 10:15:38 by leickmay          #+#    #+#             */
/*   Updated: 2021/06/15 14:13:49 by leickmay         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>

class Weapon
{
	public:
	Weapon();
	Weapon(std::string str);
	void		setType(std::string str);
	const std::string	getType();

	private:
	std::string			m_type;
};

#endif