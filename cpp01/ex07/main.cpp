/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leickmay <leickmay@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 15:57:07 by leickmay          #+#    #+#             */
/*   Updated: 2021/06/16 17:39:28 by leickmay         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

void	ft_replace(char **av, std::string filename)
{
	std::string	s1, s2, line;
	unsigned long	i(0);
	s1 = av[2];
	s2 = av[3];

	if (s1.size() == 0 || s2.size() == 0)
		std::cout << "Error: the strings shouldn't be empty" << std::endl;
	else
	{
		if (s1 != s2)
		{
			std::string line;
			std::ifstream r_file(filename);
			std::ofstream w_file(filename + ".replace");
			while (getline(r_file, line))
			{
				i = line.find(s1);
				while (i != std::string::npos)
				{
					line.replace(i, s1.size(), s2);
					i = line.find(s1, i + s2.size());

				}
				w_file << line << std::endl;
			}
			r_file.close();
			w_file.close();
		}
	}
	
}

int	main(int ac, char **av)
{
	if (ac != 4)
		std::cout << "Error: Wrong number of arguments" << std::endl;
	else
	{
		std::string filename = av[1];
		std::ifstream r_file(filename);
		if (r_file.is_open())
		{
			r_file.close();
			ft_replace(av, filename);
		}
		else
			std::cout << "Error: file doesn't exists" << std::endl;
	}

}