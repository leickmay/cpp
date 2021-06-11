/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leickmay <leickmay@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 18:28:46 by leickmay          #+#    #+#             */
/*   Updated: 2021/06/11 15:09:06 by leickmay         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "annuaire.hpp"

void	ft_add(annuaire *contact)
{
	std::string	input;
	int			i = 0;
	//int			exist;

	//exist = annuaire[i].entry_exist()
	while (contact[i].entry_exist() && i < 8)
		i++;
	if (i < 8)
	{
		contact[i].fill_contact();
		contact[i].display_info();
	}
	else
	{
		std::cout << "Too much entries. Choose one to replace : " << std::endl;
		for (i = 1; i <= 8; i++)
		{
			std::cout << i << " ";
			contact[i].display_first_name();
		}
	}
	//contact[0].display_first_name();
}

void	ft_exit(void)
{
	std::cout << "Closing Minitel - Turfu edition..." << std::endl;
	exit(0);
}

void	ft_search(annuaire *contact)
{
	int			i(0);
	std::string	input;

	if (!contact[i].entry_exist())
		std::cout << "You didn't add any contact" << std::endl;
	else{
		while (contact[i].entry_exist())
		{
			contact[i].display_search(i);
			i++;
		}
		std::cout << "Choose an index to display informations :" << std::endl;
		getline(std::cin, input);
		i = atoi(input.c_str());
		std::cout << "i : " << i << std::endl;
	}
}

void	ft_menu(void)
{
	std::string command;
	std::string	input;
	annuaire	contact[8];

	while (1)
	{
		std::cout << "Please enter you commmand (ADD, SEARCH, EXIT) : " << std::endl;
		getline(std::cin, command);
		if (command == "ADD")
			ft_add(contact);
		else if (command == "EXIT")
			ft_exit();
		else if(command == "SEARCH")
			ft_search(contact);
		else
			std::cout << "Unknown command" << std::endl;
	}
}

int	main(int ac, char **av)
{
	std::cout << "Welcome to the all new version of Minitel - Turfu edition !" << std::endl;
	ft_menu();
}

// cin.ignore();