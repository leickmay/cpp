#include "Brain.hpp"
#include "Human.hpp"

int main()
{
	Human	bob;

	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
}

//clang++ -Wall -Werror -Wextra -std=c++98 main.cpp Brain.cpp Human.cpp