/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leickmay <leickmay@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:26:17 by leickmay          #+#    #+#             */
/*   Updated: 2021/06/16 11:26:19 by leickmay         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

int	main()
{
	srand(time(NULL));
	ZombieHorde horde(10);
	horde.announce();
	return 0;
}

//clang++ -Wall -Wextra -Werror -std=c++98 main.cpp Zombie.cpp ZombieHorde.cpp