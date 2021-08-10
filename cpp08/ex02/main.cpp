#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << BLUE << "=====" << RESET << std::endl;
	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.top() << std::endl;
	std::cout << BLUE << "=====" << RESET << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	std::cout << BLUE << "==Use iterators to read the content of mstack==" << RESET << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	MutantStack<std::string> strmstack;
	std::cout << BLUE << "==Mstack of strings==" << RESET << std::endl;
	strmstack.push("Hello");
	strmstack.push("it also work with strings");
	strmstack.push("Incredible");
	
	MutantStack<std::string>::iterator it2 = strmstack.begin();
	MutantStack<std::string>::iterator ite2 = strmstack.end();

	++it2;
	--it2;
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}

	return 0;
}