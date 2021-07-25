#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iostream>

template <typename T>
T	easyfind(T cont, int oc)
{
	int i = 0;
	while (cont[i])
	{
		if (cont[i] == oc)
			return cont[i];
		i++;
	}
	if (!cont[i])
		return 0;
}

#endif