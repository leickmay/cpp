#include "easyfind.hpp"
#include <vector>

int main()
{
	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	std::cout << BLUE << "== Display vector ==" << RESET << std::endl;
	for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		std::cout << *it << std::endl;
	}

	std::cout << BLUE << "== Try to find occurences ==" << RESET << std::endl;
	try
	{
		std::cout << easyfind(v, 3) << std::endl;
		std::cout << easyfind(v, 6) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}