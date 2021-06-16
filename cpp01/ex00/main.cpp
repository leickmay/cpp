/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leickmay <leickmay@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:25:27 by leickmay          #+#    #+#             */
/*   Updated: 2021/06/16 11:25:29 by leickmay         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	PonyOnTheStack(std::string name, std::string color, int age, int height, int weight)
{
	Pony	stack(name, color, age, height, weight);
	stack.display_info();
	stack.run();
	stack.die();
}

void	PonyOnTheHeap(std::string name, std::string color, int age, int height, int weight)
{
	Pony	*heap = new Pony(name, color, age, height, weight);
	heap->display_info();
	heap->run();
	heap->die();
	delete heap;
}

int	main()
{
	PonyOnTheStack("Michel", "Black", 10, 130, 200);
	PonyOnTheHeap("Jacques", "White", 5, 110, 150);
	return 0;
}

//clang++ -Wall -Wextra -Werror -std=c++98 main.cpp Pony.cpp