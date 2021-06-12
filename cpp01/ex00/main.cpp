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