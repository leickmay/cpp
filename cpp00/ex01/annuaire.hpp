/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   annuaire.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leickmay <leickmay@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 11:12:53 by leickmay          #+#    #+#             */
/*   Updated: 2021/06/11 14:54:03 by leickmay         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <string>
#include <iostream>

class annuaire
{
	public:

	annuaire();
	void	add_first_name(std::string input);
	void	fill_contact();
	void	display_info();
	void	display_first_name(void);
	int		entry_exist(void);
	void	display_search(int i);
	void	display_search_elt(std::string str);

	private:

	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	login;
	std::string	postal_adress;
	std::string	email_adress;
	std::string	phone_number;
	std::string	birthday_date;
	std::string	favorite_meal;
	std::string	underwear_color;
	std::string	darkest_secret;
};

#endif