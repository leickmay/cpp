/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   annuaire.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leickmay <leickmay@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 11:23:34 by leickmay          #+#    #+#             */
/*   Updated: 2021/06/11 14:58:05 by leickmay         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "annuaire.hpp"

void	annuaire::fill_contact()
{
	std::string	input;

	std::cout << "Enter first name :" << std::endl;
	getline(std::cin, input);
	while (!input.size())
	{
		std::cout << "First name madatory ! Please enter first name :" << std::endl;
		getline(std::cin, input);
	}
	first_name = input;
	std::cout << "Enter last name :" << std::endl;
	getline(std::cin, input);
	while (!input.size())
	{
		std::cout << "Last name madatory ! Please enter last name :" << std::endl;
		getline(std::cin, input);
	}
	last_name = input;
	std::cout << "Enter nickname :" << std::endl;
	getline(std::cin, input);
	nickname = input;
	std::cout << "Enter login :" << std::endl;
	getline(std::cin, input);
	login = input;
	std::cout << "Enter postal adress :" << std::endl;
	getline(std::cin, input);
	postal_adress = input;
	std::cout << "Enter email adress :" << std::endl;
	getline(std::cin, input);
	email_adress = input;
	std::cout << "Enter phone number :" << std::endl;
	getline(std::cin, input);
	phone_number = input;
	std::cout << "Enter birthday date :" << std::endl;
	getline(std::cin, input);
	birthday_date = input;
	std::cout << "Enter favorite meal :" << std::endl;
	getline(std::cin, input);
	favorite_meal = input;
	std::cout << "Enter underwear color :" << std::endl;
	getline(std::cin, input);
	underwear_color = input;
	std::cout << "Enter darkest secret :" << std::endl;
	getline(std::cin, input);
	darkest_secret = input;
}

void	annuaire::display_search_elt(std::string str)
{
	int	space;
	int	j;

	space = 10 - str.size();
	if (space < 0)
	{
		std::cout << "|" << str.substr(0, 9) << ".";
	}
	else
	{
		std::cout << "|";
		for (j = 0; j < space; j++)
			std::cout << " ";
		std::cout << str;
	}
}

void	annuaire::display_search(int i)
{
	int	space;
	int	j;

	std::cout << "         " << i + 1;
	display_search_elt(first_name);
	display_search_elt(last_name);
	display_search_elt(nickname);
	std::cout << std::endl;

}

void	annuaire::display_info()
{
	std::cout << first_name << std::endl << last_name << std::endl << nickname << std::endl << login << std::endl;
	std::cout << postal_adress << std::endl << email_adress << std::endl << phone_number << std::endl << birthday_date << std::endl;
	std::cout << favorite_meal << std::endl << underwear_color << std::endl << darkest_secret << std::endl;
}

void	annuaire::display_name(void)
{
	std::cout << first_name << " " << last_name << std::endl;
}

int	annuaire::entry_exist(void)
{
	if (first_name.empty())
		return 0;
	else
		return 1;
}