#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain* _brain;

	public:
		Cat();
		Cat(Cat const& other);
		Cat	&operator=(Cat const& other);
		~Cat();
		void	makeSound() const;
		void	displayIdeas() const;
};

#endif