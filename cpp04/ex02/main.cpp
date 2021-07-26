#include "Dog.hpp"
#include "Cat.hpp"
#include <unistd.h>

int	main()
{
	//Abstract class not allowed :
	//Animal randomA();
	std::cout << std::endl << "let's see what happens in a cat brain :"<<std::endl;
	sleep(2);
	Cat* test = new Cat;
	Cat* copy = new Cat(*test);
	test->displayIdeas();
	delete test;
	sleep(1);
	std::cout << "Now that the original is deleted, let's see the ideas of the copy :" << std::endl;
	sleep(2);
	copy->displayIdeas();
	delete copy;
}