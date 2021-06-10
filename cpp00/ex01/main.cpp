/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leickmay <leickmay@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 18:28:46 by leickmay          #+#    #+#             */
/*   Updated: 2021/06/10 19:32:08 by leickmay         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	std::string command;
	std::cout << "Welcome to the all new version of Minitel - Turfu edition !" << std::endl;
	std::cout << "Please enter you commmand (ADD, SEARCH, EXIT) : " << std::endl;
	getline(std::cin, command);
	std::cout << command << std::endl;

}