/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leickmay <leickmay@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:25:30 by leickmay          #+#    #+#             */
/*   Updated: 2021/06/16 11:25:32 by leickmay         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string n, std::string c, int a, int h, int w)
{
	name = n;
	color = c;
	age = a;
	height = h;
	weight = w;
}

void	Pony::display_info()
{
	std::cout << "Pony caracteristics :" << std::endl;
	std::cout << "name : " << name << std::endl;
	std::cout << "color : " << color << std::endl;
	std::cout << "age : " << age << std::endl;
	std::cout << "height : " << height << std::endl;
	std::cout << "weight : " << weight << std::endl;
}

void	Pony::run()
{
	std::cout << name << " is running as fast as he can !!" << std::endl;
}

void	Pony::die()
{
	std::cout << "Oh no ! The little pony " << name << " died, he runned too much" << std::endl;
}
