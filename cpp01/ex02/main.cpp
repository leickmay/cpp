/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leickmay <leickmay@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:25:59 by leickmay          #+#    #+#             */
/*   Updated: 2021/06/16 11:26:01 by leickmay         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int	main()
{
	ZombieEvent	event;
	Zombie		jeanmi("Jean Michel", "Runner");
	Zombie		*marco;
	Zombie		*rand;

	srand(time(NULL));
	jeanmi.advert();
	jeanmi.announce();
	event.setZombieType("Rampant");
	marco = event.newZombie("Marco");
	marco->advert();
	marco->announce();
	delete marco;
	event.setZombieType("Sleepy");
	rand = event.randomChump();
	rand->advert();
	delete rand;
	rand = event.randomChump();
	rand->advert();
	delete rand;
	event.setZombieType("Dancing");
	rand = event.randomChump();
	rand->advert();
	delete rand;
	return 0;

}

//clang++ -Wall -Wextra -Werror -std=c++98 main.cpp Zombie.cpp ZombieEvent.cpp