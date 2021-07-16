#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Unicorn.hpp"

int	main()
{
	Sorcerer	robert("Robert", "the Magnificent");

	Victim	jim("Jimmy");
	Peon	joe("Joe");
	Unicorn	charlie("Charlie");

	std::cout << robert << jim << joe << charlie;

	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(charlie);

	return 0;
}