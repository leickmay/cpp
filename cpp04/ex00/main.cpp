#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main()
{
	const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
	std::cout << std::endl;
	std::cout << "Wrong class test :" << std::endl;
	const WrongAnimal*	wmeta = new WrongAnimal();
	const WrongAnimal*	k = new WrongCat();
	std::cout << k->getType() << " " << std::endl;
	k->makeSound();
	wmeta->makeSound();
	delete wmeta;
	delete k;
}