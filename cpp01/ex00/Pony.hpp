/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leickmay <leickmay@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:25:34 by leickmay          #+#    #+#             */
/*   Updated: 2021/06/16 11:25:35 by leickmay         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP
# include <string>
# include <iostream>

class Pony
{
	public:

	Pony(std::string n, std::string c, int a, int h, int w);
	
	void	display_info();
	void	run();
	void	die();

	private:

	std::string	name;
	std::string	color;
	int			age;
	int			height;
	int			weight;

};

#endif