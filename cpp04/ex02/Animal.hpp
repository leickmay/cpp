#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string _type;
		Animal();

	public:
		Animal(std::string type);
		Animal(Animal const& other);
		Animal	&operator=(Animal const& other);
		virtual ~Animal();
		virtual void	makeSound() const = 0;
		std::string		getType() const;
};

#endif