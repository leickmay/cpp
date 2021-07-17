#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
# define BLUE "\e[0;34m"
# define RED "\e[0;31m"
# define GREEN "\e[0;32m"
# define YELLOW "\e[1;33m"
# define RESET "\e[0m"

class Brain
{
	protected:
		std::string _ideas[100];

	public:
		Brain();
		Brain(Brain const& other);
		Brain	&operator=(Brain const& other);
		~Brain();
		void	displayIdeas() const;
		void	setIdeas(std::string i1, std::string i2, std::string i3);
};

#endif