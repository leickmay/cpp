#include "Dog.hpp"
#include "Cat.hpp"
#include <unistd.h>

int	main()
{
	Animal* array[10];
	for (int i = 0; i < 5; i++)
		array[i] = new Dog;
	for (int i = 5; i < 10; i++)
		array[i] = new Cat;
	for (int i = 0; i < 10; i++)
		delete array[i];

	sleep(1);
	std::cout << std::endl << "let's see what happens in a dog brain :"<<std::endl;
	sleep(2);
	Dog* test = new Dog;
	Dog copy(*test);
	test->displayIdeas();
	delete test;
	sleep(1);
	std::cout << "Now that the original is deleted, let's see the ideas of the copy :" << std::endl;
	sleep(2);
	copy.displayIdeas();

}