#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# define BLUE "\e[0;34m"
# define RED "\e[0;31m"
# define RESET "\e[0m"

# include <algorithm>
# include <iostream>

class NotFoundException : public std::exception
{
	const char* what() const throw()
	{
		return "\e[0;31mError: Element not found\e[0m";
	}
};

template <typename T>
int easyfind(T cont, int oc)
{
	typename T::iterator it;
	for (it = cont.begin(); it != cont.end(); it++)
	{
		if (*it == oc)
			return *it;
	}
	throw NotFoundException();
}

#endif